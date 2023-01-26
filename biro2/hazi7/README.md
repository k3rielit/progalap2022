## 1. feladat (8 pont)

A homokviharok visszatérése nem az egyetlen idojárási tényezo, amely a Mars kolonizálását fenyegeti. Mivel a Mars légköre nagyon ritka, ezért az urbol érkezo meteorzáporok és urszemét nem ég el a légkörbe való belépéskor és komoly károkat okozhat. Szerencsére erre a körülményre már fel van készülve a kolónia, elodöd, Dr. Halliburton korábban épített egy robotot, amely képes elkapni a közvetlen veszélyt okozó zuhanó tárgyakat.

Sajnos azonban a radarok felfedezték, hogy egy minden eddiginél nagyobb meteorraj tart a kolónia felé. A probléma, hogy ilyen nagy mennyiségu meteortól a robot sem tudja egymaga megvédeni a kolóniát, ezért rakétákkal kell kiloni azokat a meteorokat, amelyek átjutnának a robot által képzett védelmi vonalon. Azonban ezeknek a védelmi rakétáknak a megépítése nagy mennyiségu idot és nyersanyagot von el az épületek megerosítésétol és az egyéb felkészüléstol. A kolónia jövoje tehát ismét rajtad múlik, mint informatikus neked kell meghatároznod, hogy hány rakétára lesz szükség, azaz hány meteor jutna át a robot védelmi rendszerén.

A feladatot komplikálja, hogy a Dr. Halliburton jelszava nélkül a robot forráskódjához nem férsz hozzá. Azt azonban tudod, hogy a robot intelligenciája kezdetleges, sot elodöd feljegyzéseibol a viselkedését is teljes mértékben ismered. A robot vízszintesen mozog balra vagy jobbra egy sín mentén, és megsemmisíti a beérkezo meteorokat. A meteorzápor érkezését egyenletes idoszeletekre osztjuk fel. A robot szenzorai mindig csak az aktuális idoszeletben érkezo meteor helyzetét érzékelik. A robot idoszeletenként egyet tud lépni. A robot a mozgását az alábbi szabályok szerint végzi:

- A legelso idoszeletben még van ideje kiválasztani a megfelelo pozíciót, így balról jobbra az elso meteort garantáltan elkapja, tulajdonképpen ez a kiindulási pontja
- Amennyiben egy lépéssel meg tud semmisíteni egy meteort az adott idoszeletben, akkor ezt a lépést megteszi. Ha azonban nem csak egy meteort tudna így megsemmisíteni az adott idoszeletben, akkor döntésképtelen, így nem mozdul, akkor sem, ha ezzel akár egyet sem kap el.
- Amennyiben a következo lépésével nem tudna egy meteort sem elkapni, arra mozdul, amerre az adott idoszeletben több meteort lát
- Minden egyéb esetben mozdulatlan marad.

## Példa

| sín |  |  | R |  |  |
|-----|---|---|---|---|---|
| 1   |  |  | █ |  |  |
| 2   |  |  | █ |  |  |
| 3   |  |  | █ |  |  |
| 4   |  |  |  |  |  |
| 5   |  |  |  |  |  |
| 6   | X |  |  |  |  |
| 7   |  | █ |  | X |  |
| 8   |  |  | █ |  |  |
| 9   |  |  |  |  | x |
| 10  |  |  |  |  |  |
| 11  |  |  |  |  |   |
| 12  |  | X |  |  |   |
| 13  | X |  |  |  | X |
| 14  |  |  | █ |  |   |
| 15  |  |  |  | █ |   |

***R: Robot pozíciója, Megoldás: 6***

A példán a robot kezdetben vízszintesen a középso mezon áll, mert így tudja elkapni a balról jobbra elso beérkezo meteort (amibol itt csak ez az egy van). A 3. idoszeletig nem mozdul, mert a meteor mindig ugyanoda, az aktuális pozíciójára érkezik. A 4-5. idoszeletben szintén marad, mivel nem lát meteort. A 6. idoszeletben kezdi meg a mozgását, ám így a legbaloldalibb mezobe már nem jut el idoben, de balra lép egyet, mert abban az irányban detektál több meteort. Ezután a 7. idoszeletben két meteor jön együtt, itt egyet tudna elkapni, mégpedig, ha nem mozdul, ezért ezt teszi. A 8. idoszeletben jobbra mozdul, hogy elkapjon egy meteort, majd a következoben szintén jobbra, ám itt nem éri el. A többi meteort is ezeknek megfeleloen igyekszik elkapni.

A feladatod tehát meghatározni, hogy hány rakétára lesz szükség, azaz hány meteor jut át a robot védelmi vonalán. A bemeneti fájl elso sora két egész számot tartalmaz szóközzel elválasztva, ez a bejövo mátrix magassága és szélessége. Az ez után következo sorok már 0-kat és 1-eseket tartalmaznak az oszlopok számának megfelelo mennyiségben, szóközökkel elválasztva. Ahol 1-est találunk ott van bejövo meteor, ahol pedig 0-t, ott nincs. A legfelso sor jelzi a legközelebbi meteorokat. Ha nincs meteor az elso sávban, akkor a robot a legbaloldalibb helyen kezd. A kimenet egyetlen, sortöréssel lezárt sorában az eredmény, azaz a szükséges rakéták száma található.

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
