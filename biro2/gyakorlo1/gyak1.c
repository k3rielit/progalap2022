#include <stdio.h>
#include <stdlib.h>

int digitToInt(char d) {
    if(d>='A' && d<='Z') return d-55;
    else if(d>='a' && d<='z') return d-87;
    else if(d>='0' && d<='9') return d-48;
}

char intToDigit(int n) {
    if(n>=10 && n<=35) return n+55;
    else if(n>=0 && n<=9) return n+48;
}

int pow(int n, int p) {
    int res=1;
    while(p--) res*=n;
    return res;
}

void revstr(char* str) {
    int len=0;
    char tmp;
    for(; str[len]!=0; len++);
    for(int i=0; i<len/2; i++) {
        tmp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = tmp;
    }
}

int main() {
    FILE* in = fopen("be.txt","r");
    FILE* out = fopen("ki.txt","w");
    if(in!=NULL && out!=NULL) {
        char num[256] = {0};
        char res[256] = {0};
        char c=0;
        int from=0, to=0, len=0, b10=0, rem=0, maxdigit=0;
        fscanf(in,"%d %d ",&from,&to);
        if(from>=2 && from<=36 && to>=2 && to<=36) {
            // read num
            for(; len<256 && !feof(in); len++) {
                c=fgetc(in);
                maxdigit = digitToInt(c)>maxdigit ? digitToInt(c) : maxdigit;
                if(c!='\n') num[len]=c;
                else break;
            }
            if(maxdigit>=from) fprintf(out,"HIBA\n");
            else {
                // from-10
                for(int i=0, digitn=len-1; num[i]!=0; i++, digitn--) {
                    int tmp = digitToInt(num[i])*pow(from,digitn);
                    b10 += tmp;
                }
                // 10-to
                for(int i=0; b10!=0 && i<256; i++) {
                    rem=b10%to;
                    b10=(b10-rem)/to;
                    res[i]=intToDigit(rem);
                }
                revstr(res);
                fprintf(out,"%s\n",res);
            }
        }
        else fprintf(out,"HIBA\n");
    }
    fclose(in);
    fclose(out);
    return 0;
}