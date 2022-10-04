#include <stdio.h>

int vasarlas(int osszeg, int penz) {
    if(penz<osszeg) {
        printf("Irma neni, sajnos nincs eleg penze!");
        return 0;
    }
    return 1;
}