## 1. feladat (1 pont)

Javítsd ki a `fgv_1` függvény hibáit a fordító visszajelzései alapján!
```c
int fgv_1(char sz[]);
```

## 2. feladat (1 pont)

Javítsd ki a `fgv_2` függvény hibáit a fordító visszajelzései alapján!
```c
int fgv_2(char sz[]);
```

## 3. feladat (1 pont)

Javítsd ki a `fgv_3` függvény hibáit a fordító visszajelzései alapján!
```c
int fgv_3(char sz[]);
```

## 4. feladat (1 pont)

Az alábbi függvények megvalósításai hibákat tartalmaznak. Javítsd ki ezeket a hibákat.
```c
int f4_read(struct f4_data*);
void f4_write(struct f4_data);
struct f4_data f4_diff(struct f4_data, struct f4_data);
int f4_main();
```

## 5. feladat (1 pont)

Az alábbi függvények megvalósításai hibákat tartalmaznak. Javítsd ki ezeket a hibákat.
```c
int f5_main();
double f5_m(double);
double f5_r(double);
f5_t f5_g();
double f5_d(f5_t, f5_t);
double f5_a(f5_t, f5_t, f5_t);
```


## Teszt
```ps
tcc -o bin.exe feladat.c
```
```ps
gcc -O2 -static -Wall -o feladat feladat.c
```