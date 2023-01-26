## 1. feladat: Mars-kolónia - Terjeszkedés (10 pont)

A Mars-kolónia sikeres. A Földön megszületett a döntés, hogy nemcsak folytatják a projektet, hanem ki is terjesztik. További kolóniákat terveznek tehát létrehozni. Az elozo hibákból okulva elrendelték a környezo területek feltérképezését. Ez hónapokba tellett, ám a munka eredménye kielégíto. A felderítést végzo kutatók és geológusok számos helyen mutattak ki földalatti megfagyott vizet, amely sok szempontból hasznos lehet, illetve immár a domborzat is teljes mértékben ismeretes. A következo lépés az új kolóniák helyének meghatározása.

Dr. Zhang, a meteorológiai szakérto szintén szorgosan dolgozott, és megállapította, hogy mely területek veszélyeztetettek a homokviharok által. A meteorzáporoktól való védelemre pedig a mérnökök a mozgó robot helyett immár teljes védelmi rendszert terveztek, amely lézerrel megsemmisíti az összes veszélyes meteort. Ez utóbbinak azonban a teljes területet be kell látni, magas helyen kell felépíteni az új kolónia közelében. Tehát a kolónia alapítása hegyek közelében lenne ideális.

Mivel a vezetoség elégedett eddigi munkáddal, rád bízták a feladatot, hogy a rendelkezésre álló adatok alapján jelöld ki azokat a területeket, amelyek az új kolónia helyének alkalmasak. Ehhez egy olyan programot kell készítened, amely figyelembe veszi a területek környezetét.

A további komplikációk elkerülésének érdekében az új kolónia legalább egy vízforrás és legalább egy hegy közelében, illetve lehetoleg a homokviharoktól távol kell legyen. Ehhez három paramétert kapsz, az elsot a mérnökök állapítják meg és azt írja le, hogy mi a legnagyobb ideális távolság egy hegytol. A második paraméter azt írja le, hogy legfeljebb milyen távolságra kell elhelyezkedni egy vízforrástól, ez a geológus és biológus kutatóktól jön. A harmadik paramétert pedig Dr. Zhang állapítja meg és azt írja le, hogy mi a minmális biztonságos távolság, ahonnan a homokviharok már nem okoznak veszélyt.

A célod olyan területek keresése, amelyek legfeljebb a megadott távolságban vannak legalább egy hegytol és vízforrástól, valamint nincsenek egy homokvihar megadott környezetében sem. Az új kolónia lehet üres területen, vagy vízforrás felett, azonban hegyre, vagy homokviharra nem építkezhetünk. A feladatod az alkalmas területek megszámlálása egy térkép részleten. A keresés során 8-szomsédságot használj (azaz egy mezo szomszédait fel, le, jobbra, balra és átlósan fel-jobbra, le-jobbra, stb. irányokban pontosan egy lépéssel lehet elérni)!

## be.txt

A be.txt fájl elso sorában három egész szám található szóközökkel elválasztva. Ez a három szám rendre a hegyekre, a vízforrásokra és a homokviharokra vonatkozó, a tudósok és mérnökök által megállapított paraméter. A fájl második sorában a térkép részlet sorainak és oszlopainak száma van. A harmadik sortól kezdve pedig maga a térkép jön, ahol minden elem egy-egy területet jelent. A területeken lévő objektumok a következok lehetnek:

- a `~` ("tilde", ASCII 126-os kód) karakter jelöli a vizet,
- az `A` jelöli a hegyet,
- az `X` jelöli a homokvihart és
- a `0` jelöli az üres területet.

## ki.txt

A ki.txt fájl egyetlen sorában az eredmény található, azaz a bemenetként kapott térkép részleten az új kolónia telepítésére alkalmas területek száma.

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
