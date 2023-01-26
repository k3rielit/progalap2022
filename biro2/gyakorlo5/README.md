## 1. feladat: Vigenére titkosítás és dekódolás (22 pont)

A feladat egy szöveg kulcs szerinti Vigenére titkosítása, illetve titkos szöveg dekódolása a kulcs alapján. Írjuk le a nyílt szöveget, majd írjuk fölé a kulcsszót ciklikusan ismételve. Alkalmazzuk minden nyílt szövegbeli beture a felette lévo betu szerinti eltolást.

Például ha a kulcsszó: `EZAKULCSSZO`

| eltolás    | 4 | 25 | 0 | 10 | 20 | 11 | 2 | 18 | 18 | 25 | 14 | 4 | 25 | 0 | 10 | 20 | 11 | 2 |
|------------|---|----|---|----|----|----|---|----|----|----|----|---|----|---|----|----|----|---|
| kulcs      | E | Z  | A | K  | U  | L  | C | S  | S  | Z  | O  | E | Z  | A | K  | U  | L  | C |
| nyílt sz.  | m | e  | n | e  | k  | u  | l | j  | e  | t  | e  | k | m  | e | r  | t  | j  | o |
| titkos sz. | q | d  | n | o  | e  | f  | n | b  | w  | s  | s  | o | l  | e | b  | n  | u  | q |

Vagyis az `A` 0, a `B` 1, ..., a `Z` pedig 25-tel való eltolást jelent, és amennyiben az eltolás eredménye egy `z` mögötti karakter lenne, úgy az ábécét újrakezdjük az `a` karakternél.

## be.txt

A bemenet elso sorában az elso karakter megmondja, hogy kódolásról (E) vagy dekódolásról (D) van szó, utána egy kettospont, majd a legfeljebb 100 karakter hosszúságú, az angol ábécé nagybetuibol álló kulcs következik. A második sorban egy maximum 200 karakter hosszú szöveg található, ami csak az angol ábécé kisbetuit tartalmazza. Kódolás esetén ez a kódolandó szöveg, dekódolás esetén pedig a kódolt szöveg. Az input fájl végén egy sorvége jel (`\n`) található.

## ki.txt

A kimenet kódolás esetén a kulcs alapján kódolt szöveg, dekódolás esetén a dekódolt szöveg. A fájl végén egy sorvége jel (`\n`) található. Az input fájl tartalmának esetleges hibáit nem kell kezelni (pl. a kódolás/dekódolás eldöntésére csak E vagy D karakter szerepelhet, az inputok szóközöket nem tartalmaznak, stb.).

## Példa 1

`be.txt`

```ps
E:EZAKULCSSZO
menekuljetekmertjonazellenseg
```

`ki.txt`

```ps
qdnoefnbwssolebnuqfsyspkexmpi
```

## Példa 2

`be.txt`

```ps
D:EZAKULCSSZO
qdnoefnbwssolebnuqfsyspkexmpi
```

`ki.txt`

```ps
menekuljetekmertjonazellenseg
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
