#include <stdio.h>
#include <stdlib.h>

int charToInt(char c) {
    if(c>='0' && c<='9') return c-48;
    else if(c>='A' && c<='Z') return c-'A'+10;
    return 0;
}

int ipow(int n, int p) {
    int res=1;
    while(p--) res*=n;
    return res;
}

int main() {
    FILE* in = fopen("be.txt","r");
    FILE* out = fopen("ki.txt","w");
    if(in!=NULL) {
        char str[256] = {0};
        int len=0, base=0, maxchar=0, res=0;
        char c=0;
        fscanf(in,"%d ",&base);
        if(base>=2 && base<=36) {
            while(c!='\n') {
                c = fgetc(in);
                if(c!='\n') {
                    str[len]=c;
                    if(charToInt(c)>=base) maxchar = c;
                    len++;
                }
            }
            if(charToInt(maxchar)<base) {
                for(int i=0; i<len; i++) res += charToInt(str[i]) * ipow(base,len-i-1);
                fprintf(out,"%d\n",res);
            }
            else fprintf(out,"HIBA:JEGY:%c\n",maxchar);
        }
        else fprintf(out,"HIBA:RSZ\n");
    }
    fclose(in);
    fclose(out);
    return 0;
}