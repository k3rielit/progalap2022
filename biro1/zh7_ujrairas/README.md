## 1. feladat (5 pont)

Az `emelkedo()` függvény feladata kiszámolni azt, hogy mekkora szintemelkedéssel bír a legnagyobb szintkülönbségu szakasz egy szakaszokból felépülo hegyvidéki túra során. A paraméterben kapott terkep tömb a túraútvonal szakaszait záró állomások tengerszint feletti magasságértékeit tartalmazza. A tömböt a `-1` érték zárja. A függvény kiszámolná, hogy mekkora a legnagyobb különbség a következo és az aktuális állomás között, ott ahol a következő állomás eléréséhez felfelé kell haladni. Vedd szemügyre a próbainputot és a hozzá tartozó kimenetet. A függvény megvalósítása hibákat tartalmaz. Javítsd ki ezeket a hibákat.

```c
int emelkedo(int terkep[]);
```

## 2. feladat (5 pont)

A feladat egy függvény megírása, amely paraméterül vár egy egész számokból álló tömböt, illetve két lebegopontos számra mutató pointert. A tömbben pozitív egész számok vannak, a tömb végét az elso nempozitív érték jelzi. A függvény feladata, hogy meghatározza a tömbben lévo elemek közül a páros elemek, illetve páratlan elemek átlagát külön-külön. A paratlan pointer által mutatott érték legyen a páratlan elemek átlaga, míg a paros által mutatott érték a páros elemek átlaga. Amennyiben a tömbben egy páros / páratlan érték sem fordul elo, akkor a pointer által mutatott érték legyen a tömb végét jelzo érték. Kódold le C nyelven a függvényt! A függvény fejlécén ne változtass! A függvény inputjai a paraméterek, outputja a visszatérési érték. A függvény nem végez IO muveleteket!

```c
void statisztika(int szamok[], float* paratlan, float* paros);
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