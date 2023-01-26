## 1. feladat (10 pont)
A feladat egy függvény megírása, amely paraméterül vár egy karakterekbol álló, egy dimenziós tömböt, illetve egy karakterre mutató pointert. A függvény egy karakterre mutató pointert ad vissza.

Tudjuk, hogy a tömbben pontosan egy `A` betu van. A függvény feladata, hogy meghatározza ennek az `A` betunek a helyét, és visszaadja azt (tehát annak a tömbelemnek a címét kell visszaadnia, aminek az értéke `A`). Ezen kívül össze kell számolnia, hány `B` betu van a tömbben. (A kis `b` betuket is bele kell számolni.) Ezt az értéket a paraméterben kapott pointerben kell visszaadni.

**A pointereknek helyet foglalni, illetve a foglalt helyet felszabadítani nem kell/szabad!**

Kódold le C nyelven a függvényt! A függvény fejlécén ne változtass! A függvény inputja az elso paraméter, outputjai a második paraméter és a visszatérési érték. A függvény nem végez IO muveleteket!

```c
char* karakterek(char tomb[], int* bBetuk);
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
