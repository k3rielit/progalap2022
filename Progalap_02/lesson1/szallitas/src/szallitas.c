#include <stdio.h>

int main() {
    int db;
    printf("Hany csoki all rendelkezesre?\n");
    scanf("%d", &db);

    int osszeg = 0;

    int temp = 0;
    for(int i=0; i<db; i++) {
        scanf("%d",&temp);
        osszeg += temp;
    }


    printf("A csokik ossztomege: %d\n", osszeg);

    return 0;
}