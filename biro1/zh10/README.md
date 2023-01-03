## 1. feladat: Egyéb és 10 számrendszerek közötti átváltás (10 pont)

A feladat adott számrendszerbeli számok átváltása tizes számrendszerbe. Bemenetként adott az átváltandó szám számrendszerének alapja, továbbá maga a szám. Figyeljünk oda, hogy csak akkor váltható át a megadott szám, ha az valóban a hozzá tartózó számrendszerben van ábrázolva, és ha a számrendszer alapja 2 és 36 közötti! A negatív számokkal nem kell foglalkozni. A szám értéke a `[0, 2^31)` tartományba esik.

### Bemenet

A bemenetben két érték szerepel. Az elso érték egy egész szám, mely az átváltandó szám számrendszerének alapja. A második érték maga az átváltandó nemnegatív egész szám az adott számrendszerben. A szám megadásánál a nem decimális karaktereket az angol ábécé 26 nagybetuje helyettesíti (`'A' == 10`, ... , `'Z' == 35`). A két érték szóközzel van elválasztva egymástól, és a sor végén soremelés található. A számrendszer alapja 2 <= alap <= 36 között lehet adott. Ha ettol eltéro számrendszer van adva, akkor azt hibaként kell kezelni. Feltételezhető, hogy amennyiben a bemenetet nem hibaként kezeljük le, úgy az átváltandó szám a `[0, 2^31)` tartományba esik.

Pelda 1 `be.txt`
```
28 PALAP
```

### Kimenet

A kimenet az eredményt, azaz az átváltott számot tartalmazza. Ha a számrendszer hibás, a kimenetbe kerüljön a `HIBA:RSZ` szöveg. Ha olyan számot adtunk meg, ami nem a megadott számrendszerben van ábrázolva, akkor a kimenetbe kerüljön a `HIBA:JEGY:X` szöveg, ahol `X` a helyiérték szerint növekvo sorrendben vett elso hibás számjegy. Az eredményt egy sorvége-karakter zárja!

Pelda 1 `ki.txt`
```
15602689
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