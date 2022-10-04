#include <stdio.h>

double oldaltBeolvas() {
    double oldal = 0.0;
    scanf("%lf",&oldal);
    return oldal;
}

double kerulet(double oldal1, double oldal2) {
    return (oldal1*2)+(oldal2*2);
}

double terulet(double oldal1, double oldal2) {
    return oldal1*oldal2;
}

void kiiras(double ker, double ter) {
    printf("A teglalap kerulete: %.2lf\nA teglalap terulete: %.2lf\n",ker,ter);
}

int main() {
    double egyikOldal = oldaltBeolvas();
    double masikOldal = oldaltBeolvas();

    double ker = kerulet(egyikOldal, masikOldal);
    double ter = terulet(egyikOldal, masikOldal);

    kiiras(ker, ter);

    return 0;
}