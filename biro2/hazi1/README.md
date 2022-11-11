## 1. feladat (3 pont)
Írj egy programot, amely a három oldalhosszból kiszámítja egy téglatest felszínét és térfogatát!

A program beolvas három nemnegatív valós számot a standard inputról. Ezek a számok a téglatest
oldalhosszai. A program csak jó inputot kaphat, így a hibakezeléssel nem kell foglalkozni. A program
outputja két sor. Az elsoben a `V = ` szöveg után a téglatest térfogata, a második sorban az `A = `
szöveg után a téglatest felülete szerepel. Mindkét számot 10 karakteren jobbra igazítva 3 tizedesjegy
pontossággal kell kiíratni. Ügyelj rá, hogy a kiíratást sorvége jel zárja és a program ne írjon ki más
egyebet a fentieken kívül!

A térfogat és a felület kiszámítására érdemes lehet egy-egy külön függvényt készíteni, esetleg felhasználva a téglalap területének kiszámítását végzo függvényt is.

A programot main helyett main_t néven készítsd el, de a tartalma olyan legyen, mintha egy programot
írnál!

```c
int main_t();
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