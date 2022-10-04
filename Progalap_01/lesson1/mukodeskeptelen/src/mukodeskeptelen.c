#include <stdio.h>

void gyozelem() {
    printf("Gratulalok, nyertel!\n");
}
void vereseg() {
    printf("Sajnos vesztettel!\n");
}
void kor(int kor) {
    char a, b, c, d;
    printf("%d. kor\n",kor);
    scanf("%c %c %c %c%*c", &a, &b, &c, &d);
    printf("Talalatok: %c %c %c %c\n", a == 's' ? 'I' : 'N', b == 'p' ? 'I' : 'N', c == 'z' ? 'I' : 'N', d == 'k' ? 'I' : 'N');
}

int main() {
    printf("Szia, kezdheted a jatekot!\n");

    char a, b, c, d;

    printf("1. kor\n");
    scanf("%c %c %c %c%*c", &a, &b, &c, &d);
    printf("Talalatok: %c %c %c %c\n", a == 's' ? 'I' : 'N', b == 'p' ? 'I' : 'N', c == 'z' ? 'I' : 'N', d == 'k' ? 'I' : 'N');

    if (a == 's' && b == 'p' && c == 'Z' && d == 'k') {
        gyozelem();
        return 0;
    }

    printf("2. kor\n");
    scanf("%c %c %c %c%*c", &a, &b, &c, &d);
    printf("Talalatok: %c %c %c %c\n", a == 's' ? 'I' : 'N', b == 'p' ? 'I' : 'N', c == 'z' ? 'I' : 'N', d == 'k' ? 'I' : 'N');

    if (a == 's' && b == 'p' && c == 'z' && d == 'k') {
        gyozelem();
        return 0;
    }

    printf("3. kor\n");
    scanf("%c %c %c %c%*c", &a, &b, &c, &d);
    printf("Talaaltok: %c %c %c %c\n", a == 's' ? 'I' : 'N', b == 'p' ? 'I' : 'N', c == 'z' ? 'I' : 'N', d == 'k' ? 'I' : 'N');

    if (a == 's' && b == 'p' && c == 'z' && d == 'k') {
        gyozelem();
        return 0;
    }

    printf("4. kor\n");
    scanf("%c %c %c %c%*c", &a, &b, &c, &d);
    printf("Talalatok: %c %c %c %c\n", a == 's' ? 'I' : 'N', b == 'p' ? 'I' : 'N', c == 'z' ? 'I' : 'N', d == 'k' ? 'I' : 'N');

    if (a == 'S' && b == 'p' && c == 'z' && d == 'k') {
        gyozelem();
        return 0;
    }

    printf("5. kor\n");
    scanf("%c %c %c %c%*c", &a, &b, &c, &d);
    printf("Talalatok: %c %c %c %c\n", a == 's' ? 'I' : 'N', b == 'p' ? 'I' : 'N', c == 'z' ? 'I' : 'N', d == 'k' ? 'I' : 'N');

    if (a == 's' && b == 'p' && c == 'z' && d == 'k') {
        gyozelem();
    }
    vereseg();
}