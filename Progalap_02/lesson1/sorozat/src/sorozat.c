#include <stdio.h>

void szamolas(int start, int end, int diff) {
    for(; start<=end; start+=diff) printf("%d ",start);
}