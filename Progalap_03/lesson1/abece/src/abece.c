#include <stdio.h>

void abc(char kezdobetu, int lepeskoz) {
    for(char c=kezdobetu; c<='z'; c+=lepeskoz) {
        printf("%c",c);
    }
}
