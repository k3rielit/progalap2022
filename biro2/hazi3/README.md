## 1. feladat (5 pont)
A hollandok gátakkal hódítanak el területet a tengertol, és nem szeretik, ha ezeken a gátakon átcsapnak
a hullámok. Egy régi gát felújítását a következo módon tervezik. A gát elott egy ponton megmérik a
hullámok magasságát, majd veszik azokat a hullámokat, melyek átcsapnak (azaz amelyek magasabbak a
jelenlegi gátnál), és ezen hullámok magasságának az átlaga lesz az új gátmagasság. Például, ha van egy
20 méteres gát, és mérnek elotte [12, 32, 16, 40, 21] méter magas hullámokat, akkor a 2., 4., és 5. csap át, ezek értéke 32, 40, 21, aminek az átlaga (32+40+21)/3=31, azaz az új gát 31 méteres kell, hogy legyen.

Írjunk függvényt, mely kiszámítja az új gátmagasságot! Az elso bemeneti paramétere egy egészekbol
álló tömb, aminek a lezáró eleme 0. Ez tartalmazza a hullámok magasságát. A másik bemeneti paraméter a
jelenlegi gát magassága, ami egész szám. A függvény a gátnál magasabb hullámok átlagának egészrészével
tér vissza. Ha egyetlen hullám sem csap át, akkor a függvény az eredeti gát magasságával tér vissza.

```c
int atlag(int bemenet[], int magassag);
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