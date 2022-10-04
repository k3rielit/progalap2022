#include <stdio.h>
int main() {
    char c;
    int offset;
    scanf("%c%*c%d",&c,&offset);
    printf("Az eltolt betu: %c\n",c+offset);
    return 0;
}