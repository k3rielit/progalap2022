/***********************************************************************
* A PROGRAMBAN NEM SZEREPELHETNEK AZ ALÁBBI SOROK:
* #include <string.h>
* #include <math.h>
***********************************************************************/
#include <stdio.h>
#include <stdlib.h>

/***********************************************************************
************************************************************************
**  ETTŐL A PONTTÓL DOLGOZHATSZ A FELADATOKON
************************************************************************
***********************************************************************/

/*
1. feladat (5 pont)

A hollandok gátakkal hódítanak el területet a tengertől, és nem szeretik, ha
ezeken a gátakon átcsapnak a hullámok.

Egy régi gát felújítását a következő módon tervezik. A gát előtt egy ponton
megmérik a hullámok magasságát, majd veszik azokat a hullámokat, melyek
átcsapnak (azaz amelyek magasabbak a jelenlegi gátnál), és ezen hullámok
magasságának az átlaga lesz az új gátmagasság.

Például, ha van egy 20 méteres gát, és mérnek előtte [12, 32, 16, 40, 21]
méter magas hullámokat, akkor a 2., 4., és 5. csap át, ezek értéke 32, 40,
21, aminek az átlaga (32+40+21)/3=31, azaz az új gát 31 méteres kell, hogy
legyen.

Írjunk függvényt, mely kiszámítja az új gátmagasságot! Az első bemeneti
paramétere egy egészekből álló tömb, aminek a lezáró eleme 0. Ez tartalmazza
a hullámok magasságát. A másik bemeneti paraméter a jelenlegi gát magassága,
ami egész szám. A függvény a gátnál magasabb hullámok átlagának
egészrészével tér vissza. Ha egyetlen hullám sem csap át, akkor a függvény
az eredeti gát magasságával tér vissza.
*/

int atlag(int bemenet[], int magassag){
}

/***********************************************************************
************************************************************************
**
**  EZEN A PONTON TÚL NE VÁLTOZTASS SEMMIT SEM A FÁJLON!
**
************************************************************************
***********************************************************************/

void call_1()
{
    int i = 0, magassag = 0, eredmeny;
    int bemenet[1000];
    if (fscanf(stdin,"%d",&magassag) != 1) {
        fprintf(stderr, "HIBA: Nem olvasható adat!\n");
        return;
    }
    do {
        if (fscanf(stdin, "%d", bemenet + i) != 1) {
            fprintf(stderr, "HIBA: Nem olvasható adat!\n");
            return;
        }
    } while(bemenet[i++] != 0);
    eredmeny = atlag(bemenet, magassag);
    fprintf(stdout, "%d\n", eredmeny);
}
void test_1()
{
    struct {
        int gatmagassag;
        int hullamok[8];
        int ujmagassag;
    } testlist[] = {
        { 20, { 12, 32, 16, 40, 21, 0 }, 31 },
        { 10, {  3,  8, 10,  0 },        10 },
        { 12, {  0 },                    12 },
        { -1, {  0 },                     0 }
    };
    for (int i = 0; testlist[i].gatmagassag >= 0; ++i) {
        int r = atlag(testlist[i].hullamok, testlist[i].gatmagassag);
        if (r != testlist[i].ujmagassag) {
            fprintf(stderr, "HIBA: atlag({");
            for (int j = 0; testlist[i].hullamok[j]; ++j) {
                fprintf(stderr, "%d,", testlist[i].hullamok[j]);
            }
            fprintf(stderr, "0}, %d) = %d\n"
                            "\telvárt eredmény: %d",
                            testlist[i].gatmagassag, r, testlist[i].ujmagassag);
        }
    }
}

typedef void (*call_function)();

call_function call_table[] = {
	call_1,
	NULL
};


call_function test_table[] = {
	test_1,
	NULL
};

static int __arg_check_helper(const char * exp, const char * arg) {
    while (*exp && *arg && *exp == *arg) {
        ++exp;
        ++arg;
    }
    return *exp == *arg;
}

int main(int argc, char *argv[])
{
    int feladat, calltabsize;
    if ((argc > 1) && !(__arg_check_helper("-t", argv[1]) && __arg_check_helper("--test", argv[1]))) {
        if (argc > 2) {
            feladat = atoi(argv[2]);
            for (calltabsize=0; test_table[calltabsize]; calltabsize++);
            if (feladat <= 0 || calltabsize < feladat) {
                fprintf(stderr, "HIBA: rossz feladat sorszám: %d!\n", feladat);
                return 1;
            }
            (*test_table[feladat-1])();
        } else {
            for (feladat=0; test_table[feladat]; ++feladat) {
                (*test_table[feladat])();
            }
        }
        return 0;
    }
    if (!freopen("be.txt", "r", stdin)) {
        fprintf(stderr, "HIBA: Hiányzik a `be.txt'!\n");
        return 1;
    }
    if (!freopen("ki.txt", "w", stdout)) {
        fprintf(stderr, "HIBA: A `ki.txt' nem írható!\n");
        return 1;
    }
    for (calltabsize=0; call_table[calltabsize]; calltabsize++);
    if (fscanf(stdin, "%d%*[^\n]", &feladat)!=1) {
        fprintf(stderr, "HIBA: Nem olvasható a feladat sorszám!\n");
        return 1;
    }
    fgetc(stdin);
    if (0<feladat && feladat<=calltabsize) {
        (*call_table[feladat-1])();
    } else {
        fprintf(stderr, "HIBA: Rossz feladat sorszám: %d!\n", feladat);
        return 1;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
