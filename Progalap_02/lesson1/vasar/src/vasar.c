#include <stdio.h>

int main() {
    int mennyiseg;
    printf("Mennyi szenat tegyek a bagyujaba? ");
    scanf("%d", &mennyiseg);

    for (int i=0; i<mennyiseg; i++) {
        printf("Betettem\n");
    }

    return 0;
}