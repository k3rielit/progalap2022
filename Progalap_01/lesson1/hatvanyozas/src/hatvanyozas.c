#include <stdio.h>

#include <math.h>
void m1(void);
void m2(void);
void m3(void);

int main() {
    m3();
    return 0;
}

void m1() {
    int base = 0;
    scanf("%d",&base);
    int result = base;
    for(int exp = 1; exp < 5; exp++) {
        result = result*base;
    }
    printf("%d",result);
}

void m2() {
    int base = 0;
    scanf("%d",&base);
    printf("%.0lf",pow((double)base,5.0));
}

void m3() {
    int base = 0;
    int exp = 5;
    int result = 1;
    scanf("%d",&base);
    for(;;) {
        if(exp & 1) {
            result *= base;
        }
        exp >>= 1;
        if(!exp) {
            break;
        }
        base *= base;
    }
    printf("%d",result);
}