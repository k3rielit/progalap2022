int eredmeny(int cs1[], int cs2[], int len1, int len2) {
    float a1 = 0;
    float a2 = 0;
    for(int i1=0; i1<len1; i1++) a1+=(float)(cs1[i1]);
    for(int i2=0; i2<len2; i2++) a2+=(float)(cs2[i2]);
    a1 /= (float)len1;
    a2 /= (float)len2;
    return (a1>a2 ? 1 : (a1==a2 ? 0 : 2));
}