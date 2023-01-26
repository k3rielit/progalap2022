## 1. feladat: Számrendszerek közötti átváltás (22 pont)

A feladat adott számrendszerbeli számok átváltása másik számrendszerbe. Bemenetként adott az átváltandó szám számrendszerének alapja, melyik számrendszerbe kell átváltani, továbbá maga a szám. Figyeljünk oda, hogy csak akkor váltható át a megadott szám, ha az valóban a hozzá tartózó számrendszerben van ábrázolva, és ha a számrendszerek alapjai 2 és 36 közöttiek! A negatív számokkal nem kell foglalkozni. A szám értéke a `[0,2^31)` tartományba esik.

## be.txt

A bemenetben három érték szerepel. Az elso érték egy egész szám, mely az átváltandó szám számrendszerének alapja. A második érték szintén egy egész szám, mely az a számrendszer, amelybe át kell váltani a számot, és a harmadik érték maga az átváltandó nemnegatív egész szám az adott számrendszerben. A szám megadásánál a nem decimális karaktereket az angol ábécé 26 nagybetűje helyettesíti (`A` == 10, ... , `Z` == 35). Mindhárom érték szóközzel van elválasztva egymástól, és a sor végén soremelés található. A számrendszerek alapjai `2 <= alap <= 36` között lehetnek adottak. Ha ettol eltéro számrendszer van adva, akkor azt hibaként kell kezelni. Feltételezhető, hogy amennyiben a bemenetet nem hibaként kezeljük le, úgy az átváltandó szám a `[0,2^31)` tartományba esik.

## ki.txt

A kimenet az eredményt tartalmazza, vagyis az átváltott számot, esetleg a **HIBA** szót, ha valami miatt nem lehet átváltani a számot (pl. olyan számot adtunk meg, ami nem az elso oszlopban megadott számrendszerben van ábrázolva, vagy ha valamelyik számrendszer nem 2 és 36 között van). A nem decimális karaktereket az angol ábécé 26 nagybetuje helyettesíti (`A` == 10, ... , `Z` == 35). Az eredményt egy sorvége-karakter (`\n`) zárja!

## Példa 1

`be.txt`

```ps
10 16 255
```

`ki.txt`

```ps
FF
```

## Példa 2

`be.txt`

```ps
3 10 Z
```

`ki.txt`

```ps
HIBA
```

## Teszt

```ps
tcc -o bin.exe feladat.c
./bin
notepad ki.txt
```

```ps
gcc -O2 -static -Wall -o feladat feladat.c
./feladat
nano ki.txt
```
