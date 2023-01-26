## 1. feladat: Egyábécés helyettesíto kódolás és dekódolás kulcs alapján (22 pont)

Adott egy 26 karakter hosszú kódoló vagy dekódoló kulcs, mely az angol ábécé betuinek permutációja. A kódoló kulcs csupa nagybetut, a dekódoló kulcs csupa kisbetut tartalmaz.

Az egyábécés helyettesíto kódolás során az angol ábécé kisbetuit a kódoló kulcs adott pozícióján lévo nagybetuvel helyettesítjük. Tehát az angol ábécé kisbetuit (`abcdefghijklmnopqrstuvwxyz`) rendre helyettesítjük a kódoló kulcsban szereplo (pl. `DKVQFIBJWPESCXHTMYAUOLRGZN`) nagy betukkel, vagyis, az `a` betuket `D`-kre, a `b` betuket `K`-ra, és így tovább lecseréljük. Ekkor megkapjuk a nagybetukbol álló kódolt szöveget.

A dekódolás során az angol ábécé nagybetuit a dekódoló kulcs adott pozícióján lévo kisbetuvel helyettesítjük. Tehát az angol ábécé nagybetuit (`ABCDEFGHIJKLMNOPQRSTUVWXYZ`) rendre helyettesítjük a dekódoló kulcsban szereplő (pl. `sgmakexofhbvqzujdwlptcinry`) kisbetűkkel, vagyis, az ’A’ betuket `s`-re, a `B` betuket `g`-re, és így tovább lecseréljük. Ekkor megkapjuk a kisbetukbul álló dekódolt, eredeti szöveget.

A kódoló kulcs és a dekódoló kulcs egyértelmuen megfeleltetheto egymásnak, ezért elegendo csak az egyiket megadni, annak segítségével eloállítható a másik kulcs is, így mindkét irányú muvelet elvégezheto. Vagyis elképzelheto olyan eset, amikor a kulcs nagybetus (kódoló kulcs), illetve a szöveg is nagybetus (már kódolt). Ilyen esetben a már kódolt szövegbol az eredeti szöveget kell visszanyerni, azaz dekódolni, viszont a kulcs azt jelzi, hogy a kódoláshoz mit használt a rendszer (a kódoló kulcs alapján a dekódoló kulcs is megkapható). Hasonlóan elofordulhat olyan eset, amikor a kulcs és a szöveg is kisbetus (dekódoló kulcs és a már dekódolt üzenet alapján kell kódolni).

## be.txt

A bemenet elso sora tartalmazza a 26 karakterbol álló kulcsot, ami dekódoló kulcs esetén az angol ábécé kisbetuibol, kódoló kulcs esetén a nagybetuibol áll (nem szerepelhetnek benne vegyesen kis- és nagybetuk). A második sorban található egy maximum 200 karakter hosszú szöveg, ami szintén az angol ábécé vagy csak nagy- vagy csak kisbetuit tartalmazhatja (és más karaktert nem tartalmaz). Kisbetuk esetén a feladat a kódolás, nagybetuk esetén a dekódolás. Tehát a muveletet a szöveg kis- vagy nagybetussége határozza meg és **NEM** a kulcsé. Az input fájl végét sorvége jel zárja. Az, hogy a program kódoló vagy dekódoló kulcsot kap, és hogy a feladat kódolás vagy dekódolás, független egymástól!

## ki.txt

Kódolás esetén a kimenet a kódoló kulcs alapján kódolt szöveg csupa nagybetukkel, dekódolás esetén a kimenet a dekódoló kulcs segítségével dekódolt kisbetus szöveg. A fájl végén egy sorvége jel található. Az input fájl tartalmának esetleges hibáit nem kell kezelni (pl. vegyesen kis- és nagybetus kulcsra vagy szóra nem kell felkészülni).

## Példa 1

`be.txt`

```ps
DKVQFIBJWPESCXHTMYAUOLRGZN
ezamasodikkotelezoprogramomamikodolesdekodol
```

`ki.txt`

```ps
FNDCDAHQWEEHUFSFNHTYHBYDCHCDCWEHQHSFAQFEHQHS
```

## Példa 2

`be.txt`

```ps
sgmakexofhbvqzujdwlptcinry
FNDCDAHQWEEHUFSFNHTYHBYDCHCDCWEHQHSFAQFEHQHS
```

`ki.txt`

```ps
ezamasodikkotelezoprogramomamikodolesdekodol
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
