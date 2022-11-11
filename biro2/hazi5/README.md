## 1. feladat (5 pont)
Írj egy paciens nevű struktúrát, ami a nev nevű mezőjében egy páciens nevét (maximum 100 karakterből
álló szöveg), **szuletesi_ev** nevű mezőjében pedig egy páciens születési évét (előjeles egész szám) tárolja. Írj egy **rendez** függvényt, amelynek első paramétere egy a páciensek adatait tároló tömb, második paramétere pedig ezen tömb mérete (előjeles egész szám). A függvény állítsa születési év szerint növekvő sorrendbe a **paciensek** tömb elemeit. Amennyiben két, vagy több páciens születési éve megyegyezik, akkor a rendezés tartsa meg az eredeti sorrendet. (Természetsen az elemeket ilyenkor is a megfelelő sorrendbe kell állítani csak az azonos születési évű páciensek közötti sorrend ne változzon az eredetihez képest.)


```c
void rendez(paciens paciensek[], int n);
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