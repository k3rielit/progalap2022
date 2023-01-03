## 1. feladat (5 pont)
Írj egy `trapez` nevu struktúrát, ami az `a`, `c`, `m` nevu float típusú mezoiben egy trapéz két alapjának hosszát és a trapéz magasságát tárolja. Írj egy `compare` nevu függvényt, ami két ilyen trapézt kap paraméterül, és a nagyobb területuvel tér vissza. Amennyiben a két trapéz területe egyforma, akkor a függvény az elso paraméterben kapott trapézt adja vissza. A trapéz területe: `((a+c)*m)/2` .

```c
trapez compare(trapez tr1, trapez tr2);
```

## 2. feladat (5 pont)

A függvény paramétere két karaktertömb. A feladat az elso karaktertömbben tárolt szöveg átírása úgy, hogy minden szó elso betuje nagy legyen, a többi kicsi. A szavakat a szóköz karakter `' '` választja el egymástól, és a sztringet a szokásos `0` kódú karakter zárja le. A szöveg nem tartalmaz ékezetes betuket. Az átírt szöveg a második karaktertömbben kerüljön tárolásra. Vigyázz a szöveg elso karakterére és az eredmény lezárására!

```c
void capitalize(char bemenet[], char eredmeny[]);
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