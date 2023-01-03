## 1. feladat (5 pont)

A `leghosszabb()` függvény feladata a paraméterben kapott szövegben meghatározni a leghosszabb szó hosszát. A szövegben a szavakat szóközök választják el, de a szöveg legvégén nem feltétlenül van szóköz. A szavak az angol ábécé kis- és nagybetuit, valamint számokat tartalmazhatnak. Vesszok, pontok, felkiáltójelek, kérdojelek vagy egyéb írásjelek nincsenek a szövegben. A függvény a leghosszabb szó hosszával térne vissza. A függvény megvalósítása hibákat tartalmaz. Javítsd ki ezeket a hibákat.

```c
int leghosszabb(char szoveg[]);
```

## 2. feladat (5 pont) (hibás biro tesztesetek)

A feladat egy függvény megírása, amely paraméterül vár egy egész számokból álló tömböt, `N` és `M` egész számokat, illetve két float pointert. A tömbben pozitív egész számok vannak, a tömb végét az elso nempozitív érték jelzi. A függvény feladata, hogy meghatározza a tömbben lévo elemek közül az `N`-nel osztható elemek, illetve az `M`-mel osztható elemek átlagát külön-külön. A `pN` pointer által mutatott érték legyen az `N`-nel osztható elemek átlaga, míg a `pM` által mutatott érték az `M`-mel osztható elemek átlaga. Amennyiben a tömbben egy `N`-nel / `M`-mel osztható érték sem fordul elo, akkor a pointer által mutatott érték legyen a tömb végét jelzo érték. Kódold le C nyelven a függvényt! A függvény fejlécén ne változtass! A függvény inputjai a paraméterek, outputja a visszatérési érték. A függvény nem végez IO muveleteket!

```c
void statisztika(int szamok[], int N, int M, float* pN, float* pM);
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