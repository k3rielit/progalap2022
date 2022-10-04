#include <stdio.h>
int main() {
    char c;
    int offset;
    scanf("%d%*c%c",&offset,&c);
    printf("Az eltolt betu: %c\n",c+offset);
    return 0;
}