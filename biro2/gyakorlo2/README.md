## 1. feladat: Oszloponként cserélo kódolás és dekódolás (22 pont)

A kódoláshoz a szöveget sorfolytonosan adott számú oszlopba írjuk, majd az oszlopokat a kulcs által megadott sorrendben olvassuk össze felülrol lefelé. A dekódoláshoz az adott sorrendben töltjük fel az oszlopokat, majd a szöveget sorfolytonosan olvassuk ki a táblázatból, így visszanyerve az eredeti szöveget.

Például 7 oszloppal, `3 4 2 1 5 6 7` kulccsal és `eztaszovegetkelltitkositanod` szöveggel a táblázat:

|1|2|3|4|5|6|7|
|-|-|-|-|-|-|-|
|e|z|t|a|s|z|o|
|v|e|g|e|t|k|e|
|l|l|t|i|t|k|o|
|s|i|t|a|n|o|d|

*A titkosított szöveg: `tgttaeiazelievlssttnzkkooeod`.*

## be.txt

A bemenetben található elso szám mondja meg, hogy kódolásról (1) vagy dekódolásról (2) van szó. Utána következő szám az oszlopok száma. A második sorban található számok adják a kulcsot, vagyis hogy milyen sorrendben kell összeolvasni az oszlopokat ahhoz, hogy a kódolt szöveget megkapjuk, illetve dekódolás esetén milyen sorrendben kell feltölteni az oszlopokat ahhoz, hogy a sorfolytonos olvasással visszakapjuk az eredeti szöveget.

A harmadik sorban egy maximum 200 karakter hosszú szöveg található, ami nem tartalmaz szóközt és egyéb írásjeleket. Kódolás esetén ez a kódolandó szöveg, dekódolás esetén pedig a kódolt szöveg. A szöveg hossza maradék nélkül osztható az oszlopok számával, ezért a tömb minden sora teljes lesz. Az input fájl végén egy sortörés található. Az oszlopok száma legfeljebb 10 lehet.

## ki.txt

A kimenet kódolás esetén a kulcs alapján kódolt szöveg, dekódolás esetén a dekódolt szöveg. A fájl végén egy sortörés található. Az input fájl tartalmának esetleges hibáit nem kell kezelni (pl. a kódolás/dekódolás eldöntésére csak 1 vagy 2 szerepelhet).

## Példa 1

`be.txt`

```ps
1 7
3 4 2 1 5 6 7
eztaszovegetkelltitkositanod
```

`ki.txt`

```ps
tgttaeiazelievlssttnzkkooeod
```

## Példa 2

`be.txt`

```ps
2 7
3 4 2 1 5 6 7
tgttaeiazelievlssttnzkkooeod
```

`ki.txt`

```ps
eztaszovegetkelltitkositanod
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
