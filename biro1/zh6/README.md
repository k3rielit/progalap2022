## 1. feladat (5 pont)

Számold ki egy `s1, s2, s3, ...` számtani sorozat elemeinek szorzatát. A függvény megkapja a sorozat elso két elemét (`elso` és `masodik`), valamint egy egész intervallum alsó (`a`) és felso (`b`) végpontját. A függvény visszatérési értéke az `sa ... sb` szorzat. A számtani sorozat n-edik eleme: `sn = s1 + (n − 1) * d` .

```c
double sorozat(double elso, double masodik, int a, int b);
```

## 2. feladat (5 pont)

A feladat egy függvény megírása, amely paraméterül vár egy tehenekbol álló tömböt, annak hosszát, illetve a legelo méretét (négyzetméterben). A tehenek elkezdik legelni a legelot. Egy tehén annyi négyzetméter füvet legel le, amennyi az éhsége. A tehenek sorban esznek. Eloször a tömb legelso pozícióján lévo, utána a következo, és így tovább. A függvény számolja ki és adja vissza, hogy hány olyan tehén lesz, akinek egyáltalán nem marad a fubol. Ha az utolsó étkezo tehénnek kevesebb fu marad, mint az éhsége, akkor ot még úgy számoljuk, hogy jóllakott. Amennyiben minden tehén tud legelni, akkor `−1`-et adjunk vissza. Kódold le C nyelven a függvényt! A függvény fejlécén és a struktúrán ne változtass! A függvény inputjai a paraméterek, outputja a visszatérési érték. A függvény nem végez IO muveleteket!

```c
int ehezes(Tehen tehenek[], int db, int legelo_meret);
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