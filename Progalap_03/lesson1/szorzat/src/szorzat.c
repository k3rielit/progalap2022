#include <stdio.h>
int main() {
    int in = 1;
    int sz = 1;
    while(in!=0) {
        scanf("%d",&in);
        sz *= in==0?1:in;
    }
    printf("%d",sz);
    return 0;
}