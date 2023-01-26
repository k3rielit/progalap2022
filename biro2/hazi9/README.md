## 1. feladat (10 pont)

A feladat egy függvény megírása, amely paraméterül vár egy karakterekből álló, két dimenziós, négyzetes (8×8-as) tömböt, illetve egy karakterre mutató pointert. A függvény egy karakterre mutató pointert ad vissza.

A tömb egy sakktáblát szimbolizál, amin sakkbábuk vannak (gyalog: `G`; bástya: `B`; huszár: `H`; futó: `F`; király: `K`; vezér: `V`; üres mezo: `U`). Tudjuk, hogy pontosan egy király van a táblán, a többi bábuból akármennyi lehet (akár több is, mint egy hagyományos sakk-készletben, de az is lehet, hogy nulla).

A függvény feladata, hogy meghatározza a király helyét, és visszaadja azt (tehát annak a tömbelemnek a címét kell visszaadnia, aminek az értéke `K`). Ezen kívül össze kell számolnia, hány bástya tudja leütni a királyt. (A bástyák nem tudnak átugrani a többi bábun.) Ezt az értéket a paraméterben kapott pointerben kell visszaadni.

***A pointereknek helyet foglalni, illetve a foglalt helyet felszabadítani nem kell/szabad!***

Kódold le C nyelven a függvényt! A függvény fejlécén ne változtass! A függvény inputjai az elso paraméter, outputja a második paraméter és a visszatérési érték. A függvény nem végez IO muveleteket!

```c
char* sakktabla(char tabla[8][8], int* utniKepesBastyak);
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