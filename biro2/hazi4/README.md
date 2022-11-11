## 1. feladat (5 pont)
Nancy és Jane a következo titkosírással leveleztek A. A. Milne "Micsoda négy nap!" címu regényében:
Megszámolták, hány betubol állanak a titkosítandó üzenet szavai, majd minden szó betuit véletlenszeruen összezagyválták, leírták folyó írassal, és ebbe a szövegbe szintén sorrendet tartva, de véletlenlenszeru helyekre beszúrták a szavak hosszát jelzo számokat.
Például:
```c
"Haho, ez egy uzenet!" -> "haohzeg4ye2t3nez6eu"
```
Valósítsuk meg ennek a titkosírásnak az egyszerusített verzióját!

A titkosító függvény paramétere két karaktertömb, egy bemenet és egy kimenet. A titkosítandó üzenet
a bemenetben van, a titkosítottat a kimenetbe kell elkészíteni. A függvény számolja meg, hogy a bemenet szavai hány betusek, és ezeket a számokat írja sorrendet tartva a kimenet elejére. Az egyszeruség kedvéért minden bemenet maximum 9 betus szavakat tartalmaz. Egy szónak számítunk minden karaktert két space között. (Tehát pl. az írásjelek a szóhoz tartoznak. A magányos karakterek, mint pl. a gondolatjel, egybetus szónak számítanak.) Ez után a függvény a bemenet minden szavát fordítsa meg, és space nélkül, sorrendet tartva írja be a kimenetbe.

Például:
```c
"Haho, ez egy uzenet!" -> "5237,ohaHzeyge!tenezu"
```

```c
void titkosit(char bemenet[], char kimenet[]);
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