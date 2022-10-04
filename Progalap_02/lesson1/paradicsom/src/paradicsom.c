#include <stdio.h>

int main() {
    char eredmeny;
    printf("Milyen szinu a paradicsom? (p / s)\n");
    scanf("%c",&eredmeny);
    if(eredmeny=='p') {
        printf("El kell hagyni Jozsit!\n");
    }
    return 0;
}