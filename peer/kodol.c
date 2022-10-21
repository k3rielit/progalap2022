#include <stdio.h>

void code(char in[], char out[], int offset, int shouldDecode) {
    int i=0;
    for(; in[i]!=0; i++) {
        char c = in[i];
        if(in[i]>='a' && in[i]<='z') {
            if(shouldDecode) {
                for(int i=0; i<offset; i++) c = c-1<'a' ? 'z' : c-1;
            }
            else {
                for(int i=0; i<offset; i++) c = c+1>'z' ? 'a' : c+1;
            }
        }
        else if(in[i]>='A' && in[i]<='Z') {
            if(shouldDecode) {
                for(int i=0; i<offset; i++) c = c-1<'A' ? 'Z' : c-1;
            }
            else {
                for(int i=0; i<offset; i++) c = c+1>'Z' ? 'A' : c+1;
            }
        }
        out[i] = c;
    }
    out[i] = 0;
}

void encode(char in[], char out[], int offset) {
    code(in, out, offset, 0);
}
void decode(char in[], char out[], int offset) {
    code(in, out, offset, 1);
}

int main() {
    char in[] = "youtu.be/JgJScPwu_I4";
    char out[250];
    char out2[250];
    encode(in,out,5);
    decode(out,out2,5);
    printf("%s\n%s\n%s",in,out,out2);
    // write
    char outputFile[] = "uzenet.txt";
    FILE *fp;
    fp = fopen(outputFile,"w+");
    if (fp) fputs(out,fp);
    else printf("Failed to open the file\n");
    fclose(fp);
    return 0;
}