#include <stdio.h>
void ebreszto(int prep) {
    prep = prep%1440;
    int t = 960-prep < 0 ? 1440-(prep-960) : 960-prep;
    printf("Janosnak %d ora %d percre kell az ebresztot beallitania.\n",t/60,t%60);
}