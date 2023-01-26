## 1. feladat: Mátrix bejárás csigavonalban (10 pont)

Adott egy mátrix, és egy kiindulási eleme. A feladat az, hogy ettol az elemtol elindulva, csigavonalban járjuk be a mátrixot, és az érintett elemeket írjuk ki. A kezdo elemtől felfelé induljunk el, majd ahol lehet balra fordulni anélkül, hogy egy elemet másodszor is érintenénk, tegyük meg, egyébként egyenesen (szokásos csigavonalban) haladjunk tovább. Ha kilépünk a mátrixból akkor is tovább kell haladni, mintha még a mátrix területén lennénk, de ekkor nem kell kiírni semmit.

## be.txt

Az elso sor tartalmazza a kezdo elem koordinátáit (sor, oszlop) vesszovel elválasztava. A kezdo koordinátának nem kell a mátrix területére esni. Minden sort újsor karakter zár. Ezután következik egy mátrix. A mátrix mérete legfeljebb 20x20-as lehet, de a bemenetben a méret nincs megadva elore. A bal felso eleme az 1, 1 koordinátájú elem, és jobbra illetve lefelé haladva nonek az oszlop illetve a sor koordináták. A mátrixnak kizárólag pozitív egész elemei vannak, de nem feltétlenül négyzetes alakú, azaz a sorainak és oszlopainak száma nem mindig egyezik meg.

## ki.txt

Az inputban nincsenek whitespace karakterek (azaz szóköz, tabulátor, stb.), a számokat `,` (vesszo) választja el egymástól, a sorban utolsó szám után nincs vesszo. (Természetesen a mátrix minden sora a bemeneti fájlban is külön sorban van). A mátrixnak akkor van vége, ha a sorban egyetlen `-` jel van (természetesen a sorvége jel itt sem marad el). A be.txt fájl egyetlen, helyes inputot tartalmaz.

## Példa 1

`be.txt`

```ps
2,3
2,1
3,0
-
```

`ki.txt`

```ps
1,0,2,3
```

## Példa 2

`be.txt`

```ps
2,2
2,1,3
3,0,4
23,12,6
-
```

`ki.txt`

```ps
0,1,2,3,23,12,6,4,3
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
