## 1. feladat (5 pont)

Az alábbi függvény elso paramétere egy egészekbol álló tömb, aminek a méretét a függvény utolsó paraméterében kapjuk meg. A feladat a tömb adott számú elemének törlése a tömb elejérol. A feladat megoldható egy ciklus és két számláló használatával. Az elso számláló az elso nem törlendo elem indexétol indul, a második pedig az eredmény-tömb elejérol. Az elso számláló által mutatott értéket kell az eredmény-tömbben a második számláló által mutatott helyre tenni. Figyelj arra, ha a tömb elejérol törlendo elemek száma esetleg több, mint a tömb elemeinek száma. Figyelj arra, hogy az eredmény-tömb méretével térjen vissza a függvényed! Az eredményt a második paraméterben kapott eredmeny nevu tömbben kell elkészíteni. Kódold le a függvényt C nyelven. A függvény fejlécén ne változtass!

```c
int tombtorles(int tomb[], int eredmeny[], int darab, int meret);
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