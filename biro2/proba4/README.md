## 1. feladat: Mars E01: Sandstorms (5 pont)

Az emberiség egy önellátó muködésre képes kolóniát létesített a Marson. Az építkezés és bovítés még javában folyik. Azonban néhány naponta homokviharok söpörnek végig a kolónia területen, amelyek miatt sajnos már több kint rekedt telepes életét vesztette.

Dr. Zhang, a kolónia meteorológiai szakértoje feljegyezte a homokviharok elofordulásait, és azt állapította meg, hogy a helyi speciális mikroklíma következtében pontos rendszer van a viharok érkezésében: a köztük eltelt napok egy ismétlodo mintát követnek. Arról nincs adatunk, hogy a minta milyen hosszú, de tudjuk azt, hogy mostanra már legalább egyszer teljesen feljegyzésre került, valamint az is ismert, hogy az összes feljegyzett nap illeszkedik ehhez a mintához.

Sajnos elodöd és mentorod, Dr. Halliburton szintén odaveszett az elozo viharban, így mától te látod el az informatikai feladatokat a kolónián. Mint a szuperszámítógép új kezeloje, minden felelosség rád hárul. A feladatod elérni, hogy a szuperszámítógép meg tudja jósolni a következo vihar jöveteléig várható napok számát. Ennek sikerén emberi életek és a Mars kolonizációjának teljes jövoje múlhat.

Írd meg a szuperszámítógép vihar-elorejelzo függvényét, amely egy egész számokból álló tömbben kapja paraméterül a viharok között eltelt napok számát, majd az ismétlodo minta meghatározása után kiszámítja, hogy mely értékkel folytatódna a tömb. A függvény ezzel az értékkel, azaz a következo viharig várható napok számával térjen vissza. Az input tömböt a -1 érték zárja (ez az érték már nem része a feljegyzések sorozatának). A minta mindig a tömb elején kezdodik.

Az alábbi példában 17 vihar alapján készült feljegyzéseket látjuk és a 17. után a 18. viharig hátralévo napok számát keressük. Mint látszik az elso 7 vihar rendre 1, 2, 3, 1, 2, 3, 4 naponta követi egymást, majd a mintázat a 8. viharnál újrakezdodik. Amennyiben ezt a 7 elemu mintát megfeleloen hozzáillesztjük a fejlegyzéseink végéhez, akkor azt kapjuk, hogy a következo vihar 1 nap múlva várható.

Kódold le a függvényt C nyelven! A függvény fejlécén ne változtass! A függvény inputjai a paraméterek, outputja a visszatérési érték. A függvény nem végez IO muveleteket!

```c
int elorejelez(int feljegyzesek[]);
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
