## 1. feladat (5 pont)
Számold ki egy `s1, s2 = s1 + d1, s3 = s2 + d2, ...` sorozat elso n elemének összegét, ahol az elemek közötti `d1, d2, ...` különbségek **mértani sorozatot** alkotnak. A függvény megkapja a sorozat elso három elemét (**elso**, **masodik** és **harmadik**), valamint **n** értékét.

A függvény visszatérési értéke az s1 + . . . + sn összeg.

A mértani sorozat n-edik eleme: `dn = d1*q^(n-1)`

```c
double sorozat(double elso, double masodik, double harmadik, int n);
```

## Teszt
```ps
tcc -o bin.exe feladat.c
./bin -t 1
```
```ps
gcc -O2 -static -Wall -o feladat feladat.c
./feladat -t 1
```