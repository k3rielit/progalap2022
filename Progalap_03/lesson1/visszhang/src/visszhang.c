#include <stdio.h>

void echo() {
    char str[100];
    scanf("%[^\n]s", str);
    printf("%s", str);
}