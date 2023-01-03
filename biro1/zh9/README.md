## 1. feladat (5 pont)

Az alábbi függvény feladata helyet foglalni egy kétdimenziós int tömbnek. A tömb sor- és oszlopszáma megegyezik. A tömb `N` méretét a függvény paraméterként kapja. A helyfoglalás úgy történjen, hogy eloször helyet foglalunk az `N` sor pointereinek, majd megfelelo módon minden sor `N - N` darab elemének is. A helyfoglalás után töltsük fel a tömb elemeit értékekkel a következo módon: A tömb szélén lévo elemek, azaz a 0. és utolsó sor, illetve 0. és utolsó oszlop elemei legyenek 0, belso elemek pedig 1 értékuek. A függvény térjen vissza a tömbre mutató pointerrel. A memória felszabadításával nem kell foglalkoznod.

```c
int **foglal(int n);
```

## 2. feladat (5 pont)

Írj egy függvényt, amely kiszámolja, hogy egy utasítássorozat hatására hová jutunk a `(0, 0)` koordinátából
kezdetben észak felé nézve! Az utasítássorozat egy string, ami a következo karakterekből állhat: `'b'`, `'j'`,
`'e'`, `'k'`, `'d'`, `'n'`, `'1'..'9'`. Minden egyéb, a stringben szereplo karaktert figyelmen kívül kell hagyni!

A karakterek jelentései:
- `'b'` - forduljunk balra 90 fokkal
- `'j'` - forduljunk jobbra 90 fokkal
- `'e'`, `'k'`, `'d'`, `'n'` - forduljunk északnak, keletnek, délnek, nyugatnak
- `'1'..'9'` - lépjünk előre 1..9 egységet.

A függvény visszatérési értéke a végpont koordinátáinak összege. Az egyik koordináta kelet, a másik észak felé növekszik.

```c
int koord(char* utasitas);
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