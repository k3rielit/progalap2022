## 1. feladat: Polübiosz tábla kódolás és dekódolás (22 pont)

Polübiosz célja egy olyan kódolás létrehozása volt ahol az ABC szimbólumait egy másik kevesebb szimbólumból álló reprezentációra alakítja át.

Polübiosz egy módosított táblázata az alábbi 6x6-os táblázat ami az angol ABC 26 betujét és a számjegyeket tartalmazza.

|       | 1 | 2 | 3 | 4 | 5 | 6 |
|-------|---|---|---|---|---|---|
| **1** | a | b | c | d | e | f |
| **2** | g | h | i | j | k | l |
| **3** | m | n | o | p | q | r |
| **4** | s | t | u | v | w | x |
| **5** | y | z | 0 | 1 | 2 | 3 |
| **6** | 4 | 5 | 6 | 7 | 8 | 9 |

A feladat a táblázat alapján kódolni, vagy dekódolni egy üzenetet. Vegyük a következo üzenetet kódolva és dekódolva:

| üzenet        | h  | e  | l  | l  | o  |
|---------------|----|----|----|----|----|
| kódolt üzenet | 22 | 15 | 26 | 26 | 33 |

A kódolt üzenetben minden elem ketto számjegybol áll: az elso számjegy megadja a táblázat sorát, a második számjegy pedig a táblázat oszlopát határozza meg. Egy karakter kódolásakor megkeressük, hogy az adott karakter melyik sorban és oszlopban található. Például az `e` karakter az első sorban és ötödik oszlopban található így a kódolt érték a `15`. Dekódolás esetén az adott érték által meghatározott sor és oszlop metszéspontjában található karaktert keressük. Például a `26` szám a táblázat második sorát és hatodik oszlopát határozza meg ahol a metszéspontban az `l` betű áll, ez a dekódolt karakter.

*A táblázat nem kódol írásjeleket és szöközöket!*

## be.txt

A bemeneti fájl elso sorában egy `K`, vagy `D` betu található attól függően, hogy kódolás, vagy dekódolás a feladat.

Kódolás esetén a bemeneti fájl második sorában a kódolandó üzenet található, szóközök nélkül, sorvégejellel (`\n`) lezárva. A kódolandó üzenet hossza maximálisan 512 karakter lehet és legalább 1 karakterbol biztosan áll.

Dekódolás esetén a második sorban egy az `[1,512]` zárt intervallumba eso `N` egész szám található, amely megadja, hogy hány további sor található még a bemeneti fájlban. A következő `N` sorban egy-egy szám található mely a táblázat alapján egy-egy kisbetus karaktert illetve számjegyet kódol.

## ki.txt

Kódolás esetén a kimeneti fájl elso sorában a kódolt karakterek számát kell megadni. Minden további sor pedig a kódolandó karaktersorozat egy-egy karakterének Polübiosz tábla szerint kódolt megfelelojét kell tartalmazza.

Dekódolás esetén a kimeneti fájlnak a dekódolt szöveget kell tartalmaznia szóközök nélkül.

A kimeneti fájl minden sorát 1-1 sorvégejel karakter (`\n`) zárja le!

## Példa 1

`be.txt`

```ps
K
almasreteskopaszto9000
```

`ki.txt`

```ps
22
11
26
31
11
41
36
15
42
15
41
25
33
34
11
41
52
42
33
66
53
53
53
```

## Példa 2

`be.txt`

```ps
D
22
11
26
31
11
41
36
15
42
15
41
25
33
34
11
41
52
42
33
66
53
53
53
```

`ki.txt`

```ps
almasreteskopaszto9000
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
