#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void legkozelebbi(int x, int y, int z) {
    int diffs[3] = {abs(y-x), abs(z-x), abs(z-y)};
    int min = 0;
    for(int i=1; i<3; i++) {
        if(diffs[i] < diffs[min]) {
            min = i;
        }
        else if(diffs[i] == diffs[min]) {
            return;
        }
    }
    switch(min) {
        case 0: printf("Az elso es a masodik van a legkozelebb egymashoz"); break;
        case 1: printf("Az elso es a harmadik van a legkozelebb egymashoz"); break;
        case 2: printf("A masodik es a harmadik van a legkozelebb egymashoz"); break;
    }
}