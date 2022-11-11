## 1. feladat (5 pont)
A hupikék törpikék kirándulni mentek, és Dulifuli beleesett egy gödörbe. Természetesen nem kiáltott
segítségért, hanem egyedül akart kimászni. Elso lendülettel felmászott 10 törparaszt, majd lenézett, és lecsúszott, méghozzá az eddig elért magasságának 10%-t (tehát 9 törparasz magasságban sikerült megkapaszkodnia). Ekkor másodszor is lendületet vett, 20 araszt mászott, majd megint lenézett, és megint visszacsúszta az addig elért összmagasságának a 10%-át. És így tovább, minden lenülettel 10 arasszal többet mászott felfelé, de minden megállásnál az addigi összmagasságának 10%-át elvesztette.

Írj függvényt, melynek paramétere a gödör mélysége (törparaszban), és egy egész értékkel tér vissza:
azzal, hogy Dulifuli hanyadik lendülettel mászott ki a gödörbol.

```c
int hanyadiklendulet(int cel);
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