## 1. feladat (1 pont)
Készíts egy programot, amely kiírja a Victor szöveget a képernyore úgy, hogy az ezt követo kiíratás a
sor elején kezdodjön majd! A programot `main` helyett `main_p` néven készítsd el, de a tartalma olyan legyen, mintha egy programot írnál!

```c
int main_p();
```

## 2. feladat (2 pont)
Készíts egy programot, amely a standard inputról beolvas három egész számot (`a`, `b`, `c`), majd a `b+c−a` kifejezés értékét kiírja a képernyore! A kiíratást sorvége jel zárja! A program mást ne írjon ki! A programot `main` helyett `main_e` néven készítsd el, de a tartalma olyan legyen, mintha egy programot írnál!

```c
int main_e();
```

## 3. feladat (2 pont)
Készíts egy programot, amely a standard inputról beolvas két valós számot, majd a két szám szorzatát
kiírja a képernyore! A kiíratást sorvége jel zárja! A program mást ne írjon ki! A programot `main` helyett `main_v` néven készítsd el, de a tartalma olyan legyen, mintha egy programot írnál!

```c
int main_v();
```

## Teszt
```ps
tcc -o bin.exe feladat.c
./bin -t 1
./bin -t 2
./bin -t 3
```
```ps
gcc -O2 -static -Wall -o feladat feladat.c
./feladat -t 1
./feladat -t 2
./feladat -t 3
```