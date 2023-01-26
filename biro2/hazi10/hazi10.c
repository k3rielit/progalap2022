#include <stdio.h>
#include <stdlib.h>

#define MSIZE 20

int main() {
    FILE* in = fopen("be.txt","r");
    FILE* out = fopen("ki.txt","w");
    int tmp = 0;
    if(in!=NULL) {
        int start[2] = {0};
        int elems=0;
        fscanf(in,"%d,%d\n",&start[0],&start[1]);
        start[0]--;
        start[1]--;
        int mtrx[MSIZE][MSIZE] = {-1};
        memset(mtrx, -1, sizeof(mtrx[0][0]) * MSIZE * MSIZE);
        for(int r=0; r<MSIZE && !feof(in); r++) {
            for(int c=0; c<MSIZE && !feof(in); c++) {
                int ti = fscanf(in,"%d",&tmp);
                if(ti>0) {
                    mtrx[r][c] = tmp;
                    elems++;
                }
                if(fgetc(in)=='\n') break;
            }
        }
        if(out!=NULL) {
            for(int i=0, elem=0, len=1, axis=0, direction=-1; elem<elems; len+=i%2, i++, axis=i%2, direction*=(i%2?1:-1)) {
                for(int j=0; j<len; j++, start[axis]+=direction) {
                    if(start[0]>=0 && start[1]>=0 && mtrx[start[0]][start[1]]>=0) {
                        elem++;
                        fprintf(out,(elem<elems?"%d,":"%d\n"),mtrx[start[0]][start[1]]);
                    }
                }
            }
        }
    }
    fclose(in);
    fclose(out);
    return 0;
}