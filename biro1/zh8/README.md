## 1. feladat: Tuzijáték (10 pont)

Egy egyenes országút mentén a városok a megadott távolságokban követik egymást. Az egyik városban tuzijátékot szeretnénk rendezni. A feladat kiszámolni, hogy melyik városban célszeru megrendezni az eseményt, ha arra törekszünk, hogy az minél több városból látható legyen. Feltesszük, hogy a látványosság csak a rendezo város megadott sugarú környezetében látható. Több optimális megoldás esetén az a város nyer, amelyiket az országúton balról-jobbra haladva (az indexeket `0...N` sorrendben véve) először érjük el.

### Bemenet

A `be.txt` fájl elso két sorában egy-egy egész szám található. Az elso a látótávolság, a második a városok száma. A látótávolság azt a távolságot jelenti, ahonnan még látható a tuzijáték. A további sorokban a városok számánál eggyel kevesebb egész szám található, amely számok a városok közötti távolságok úgy, hogy az `i`. szám az `i`. és `i+1`. város távolságát jelenti.

Pelda 1 `be.txt`
```
6
7
1
3
5
3
4
3
```

Pelda 2 `be.txt`
```
8
7
1
3
5
3
4
3
```

### Kimenet

A `ki.txt` fájl egyetlen sort kell tartalmazzon, amelyben a megoldásnak tekinthető város sorszáma (0-tól indexelve) található.

Pelda 1 `ki.txt`
```
2
```

Pelda 2 `ki.txt`
```
2
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