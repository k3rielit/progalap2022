## 1. feladat (2 pont)

A feladat egy maximum függvény megírása. A függvény a három paramétere közül a legnagyobb sorszámával tér vissza (`a:1`, `b:2`, `c:3`). A három kapott szám páronként különbözo lesz. Kódold le C nyelven a függvényt! A függvény fejlécén ne változtass! A függvény inputjai a paraméterek, outputja a visszatérési érték. A függvény nem végez IO muveleteket!

```c
int maximum(int a, int b, int c);
```

## 2. feladat (3 pont)

A feladat meghatározni két egész szám közötti zárt intervallumba eso négyzetszámok összegét. A függvény két paramétere sorban az intervallum alsó (`a`) és felso (`b`) végpontja. Visszatérési értéke az intervallumba eso négyzetszámok összege. A végpontok még az intervallum részei. Az 1. ábra szemlélteti a `[10,30]` intervallumba eso négyzetszámokat. A feladat a `math.h` használata nélkül megoldható egy ciklussal, amely 0-tól indul, és addig tart amíg a ciklusváltozó négyzete nagyobb nem lesz b-nél. A ciklusmagban ellenorizzük, hogy a ciklusváltozó négyzete nagyobb-egyenlo-e mint `a`, és ha igen, akkor növeljük a négyzetszámok összegét tároló változó értékét a ciklusváltozó négyzetével. A függvény ezzel az eredetileg 0-ra inicializált változóval tér vissza. Kódold le C nyelven a függvényt! A függvény fejlécén ne változtass! A függvény inputjai a paraméterek, outputja a visszatérési érték. A függvény nem végez IO muveleteket!

```c
int negyzetosszeg(int a, int b);
```

## Teszt
```ps
tcc -o bin.exe feladat.c
./bin -t 1
./bin -t 2
```
```ps
gcc -O2 -static -Wall -o feladat feladat.c
./feladat -t 1
./feladat -t 2
```