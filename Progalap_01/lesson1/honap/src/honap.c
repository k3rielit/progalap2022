#include <stdio.h>

void melyikHonap(int sorszam) {
    char honapok[12][11] = {"januar","februar","marcius","aprilis","majus","junius","julius","augusztus","szeptember","oktober","november","december"};
    if(sorszam >0 && sorszam<=12) {
        printf("%s",honapok[sorszam-1]);
    }
    else printf("nincs ilyen honap");
}