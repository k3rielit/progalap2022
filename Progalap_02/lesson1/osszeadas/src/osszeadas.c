#include <stdio.h>

int main() {
    int darab;
    scanf("%f", &darab);

    for (int i = 1; i <= darab; i++) {
        osszeg += i;
    }
    
    printf("%d", osszeg)
    return 0;
}