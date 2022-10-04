#include <stdio.h>

void hullamvasut(int kor, int magassag) {
    printf("%s", (kor >= 16 && magassag > 150 ? "Mehet" : "Nem mehet"));
}