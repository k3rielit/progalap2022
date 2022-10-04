#include <stdio.h>

int main() {
    int meret;
    scanf("%d", &meret);

    for(int i=1; i<=meret; i++) {
        for(int j=1; j<=meret; j++) {
            printf("%d ",i*j);
        }
        printf("\n");
    }

    return 0;
}