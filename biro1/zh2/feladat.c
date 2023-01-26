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
1. feladat (2 pont)

A feladat egy maximum fuggveny megirasa. A fuggveny a harom parametere
kozul a legnagyobb sorszamaval ter vissza (a:1, b:2, c:3).
A harom kapott szam paronkent kulonbozo lesz.

Kodold le C nyelven a fuggvenyt! A fuggveny fejlecen ne valtoztass!
A fuggveny inputjai a parameterek, outputja a visszateresi ertek.
A fuggveny nem vegez IO muveleteket!
*/

int maximum(int a, int b, int c) {
}

/*
2. feladat (3 pont)

A feladat meghatarozni ket egesz szam kozotti zart intervallumba eso
negyzetszamok osszeget. A fuggveny ket parametere sorban az
intervallum also (a) es felso (b) vegpontja.
Visszateresi erteke az intervallumba eso negyzetszamok osszege. A
vegpontok meg az intervallum reszei.

A feladat a math.h hasznalata nelkul megoldhato egy ciklussal,
amely 0-tol indul, es addig tart amig a ciklusvaltozo negyzete nagyobb
nem lesz b-nel. A ciklusmagban ellenorizzuk, hogy a ciklusvaltozo
negyzete nagyobb-egyenlo-e mint a, es ha igen, akkor noveljuk a
negyzetszamok osszeget tarolo valtozo erteket a ciklusvaltozo negyzetevel.
A fuggveny ezzel az eredetileg 0-ra inicializalt valtozoval ter vissza.
(Nulla darab ertek osszege 0.)

Kodold le C nyelven a fuggvenyt! A fuggveny fejlecen ne valtoztass!
A fuggveny inputjai a parameterek, outputja a visszateresi ertek.
A fuggveny nem vegez IO muveleteket!
*/

int negyzetosszeg(int a, int b) {
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
    int a, b, c, eredmeny;
    if(fscanf(stdin, "%d %d %d", &a, &b, &c)!=3) {
        fprintf(stderr, "HIBA: Nem olvasható adat!\n");
        return;
    }
    eredmeny=maximum(a, b, c);
    fprintf(stdout, "%d\n", eredmeny);
}
void test_1()
{
    int eredmeny, i;
    struct {int a; int b; int c; int eredmeny;} testlist[2] = {{1, 2, 3, 3}, {-1, -2, -3, 1}};
    for (i = 0; i < 2; ++i) {
        eredmeny = maximum(testlist[i].a, testlist[i].b, testlist[i].c);
        if (eredmeny != testlist[i].eredmeny) {
            fprintf(stderr, "HIBA: maximum(%d, %d, %d)\n"
                            "\telvárt eredmény: %d\n"
                            "\tkapott eredmény: %d\n",
                testlist[i].a, testlist[i].b, testlist[i].c, testlist[i].eredmeny, eredmeny);
        }
    }
}

void call_2()
{
	int a, b, eredmeny;
	if(fscanf(stdin, "%d %d", &a, &b)!=2) {
		fprintf(stderr, "HIBA: Nem olvasható adat!\n");
		return;
	}
	eredmeny=negyzetosszeg(a, b);
	fprintf(stdout, "%d\n", eredmeny);
}
void test_2()
{
	int eredmeny, i;
	struct {int a; int b; int eredmeny;} testlist[2] = {{100, 400, 2585}, {5, 20, 25}};
	for (i = 0; i < 2; ++i) {
		eredmeny = negyzetosszeg(testlist[i].a, testlist[i].b);
		if (eredmeny != testlist[i].eredmeny) {
			fprintf(stderr, "HIBA: negyzetosszeg(%d, %d)\n"
							"\telvárt eredmény: %d\n"
							"\tkapott eredmény: %d\n",
				testlist[i].a, testlist[i].b, testlist[i].eredmeny, eredmeny);
		}
	}
}

typedef void (*call_function)();

call_function call_table[] = {
	call_1,
	call_2,
	NULL
};


call_function test_table[] = {
	test_1,
	test_2,
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
