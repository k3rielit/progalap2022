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

Irj egy paciens nevu strukturat, ami a nev nevu mezojeben egy paciens nevet 
(maximum 100 karakterbol allo szoveg), szuletesi_ev nevu mezojeben pedig egy 
paciens szuletesi evet (elojeles egesz szam) tarolja.
Irj egy rendez fuggvenyt, amelynek elso parametere egy a paciensek adatait 
tarolo tomb, masodik parametere pedig ezen tomb merete (elojeles egesz szam). 
A fuggveny allitsa szuletesi ev szerint novekvo sorrendbe a paciensek tomb 
elemeit. Amennyiben ket, vagy tobb paciens szuletesi eve megyegyezik, akkor a 
rendezes tartsa meg az eredeti sorrendet. (Termeszetsen az elemeket ilyenkor 
is a megfelelo sorrendbe kell allitani csak az azonos szuletesi evu paciensek 
kozotti sorrend ne valtozzon az eredetihez kepest.)
*/
/****************************************************
 * A kovetkezo sor programba illesztese eseten      *
 * (// torlese a #define elol) a feladat nem okoz   *
 * forditasi hibat, de pontot sem fog erni.         *
 ****************************************************/
//#define KIHAGY_1
#if ! (defined(KIHAGY_1) || defined(KIHAGY_MIND))

void rendez(paciens paciensek[], int n) {
}

#endif
/***********************************************************************
************************************************************************
**
**  EZEN A PONTON TÚL NE VÁLTOZTASS SEMMIT SEM A FÁJLON!
**
************************************************************************
***********************************************************************/

void call_1() {
#if ! (defined(KIHAGY_1) || defined(KIHAGY_MIND))
	int i, n;
	if (fscanf(stdin, "%d\n", &n) != 1) {
		fprintf(stderr, "HIBA: Nem olvasható adat (n)!\n");
		return;
	}
	paciens p[n];
	for (i = 0; i < n; ++i) {
		if (fscanf(stdin, "%[^;];%d\n", p[i].nev, &p[i].szuletesi_ev) != 2) {
			fprintf(stderr, "HIBA: Nem olvasható adat (paciens)!\n");
			return;
		}
	}
	rendez(p, n);
	for (i = 0; i < n; ++i) {
		fprintf(stdout, "%s %d\n", p[i].nev, p[i].szuletesi_ev);
	}
#endif
}
void test_1() {
#if ! (defined(KIHAGY_1) || defined(KIHAGY_MIND))
	int i, j, k, err;
	struct {paciens paciensek[5]; int n; paciens eredmeny[5];} testlist[2] = {
		{{
			{.nev = "Géza",	.szuletesi_ev = 2011},
			{.nev = "Éva",	.szuletesi_ev = 1995},
			{.nev = "Béla",	.szuletesi_ev = 2001},
			{.nev = "Anna",	.szuletesi_ev = 1995},
			{.nev = "Ádám",	.szuletesi_ev = 1989}
		},5,{
			{.nev = "Ádám",	.szuletesi_ev = 1989},
			{.nev = "Éva",	.szuletesi_ev = 1995},
			{.nev = "Anna",	.szuletesi_ev = 1995},
			{.nev = "Béla",	.szuletesi_ev = 2001},
			{.nev = "Géza",	.szuletesi_ev = 2011}
		}},
		{{
			{.nev = "Géza",	.szuletesi_ev = 2011},
			{.nev = "Éva",	.szuletesi_ev = 1996},
			{.nev = "Béla",	.szuletesi_ev = 2001},
			{.nev = "Anna",	.szuletesi_ev = 1995},
			{.nev = "Ádám",	.szuletesi_ev = 1989}
		},5,{
			{.nev = "Ádám",	.szuletesi_ev = 1989},
			{.nev = "Anna",	.szuletesi_ev = 1995},
			{.nev = "Éva",	.szuletesi_ev = 1996},
			{.nev = "Béla",	.szuletesi_ev = 2001},
			{.nev = "Géza",	.szuletesi_ev = 2011}
		}}
	};
	fprintf(stderr, "=== 1. feladat tesztelése ===\n");
	for (i = 0; i < 2; ++i) {
		err = 0;
		fprintf(stderr, "%d. teszteset ... ", i + 1);
		rendez(testlist[i].paciensek, testlist[i].n);
		for (j = 0; j < testlist[i].n; ++j) {
			for(k = 0; testlist[i].paciensek[j].nev[k] != 0 && testlist[i].eredmeny[j].nev[k] != 0 && testlist[i].paciensek[j].nev[k] == testlist[i].eredmeny[j].nev[k]; ++k);
			if (testlist[i].paciensek[j].nev[k] != testlist[i].eredmeny[j].nev[k] || testlist[i].paciensek[j].szuletesi_ev != testlist[i].eredmeny[j].szuletesi_ev) {
				fprintf(stderr, "HIBA\n\trendez({...}, %d)\n", testlist[i].n);
				fprintf(stderr, "\telvárt eredmény:\n");
				for (j = 0; j < testlist[i].n; ++j) {
					fprintf(stderr, "\t\t%s %d\n", testlist[i].eredmeny[j].nev, testlist[i].eredmeny[j].szuletesi_ev);
				}
				fprintf(stderr, "\tkapott eredmény:\n");
				for (j = 0; j < testlist[i].n; ++j) {
					fprintf(stderr, "\t\t%s %d\n", testlist[i].paciensek[j].nev, testlist[i].paciensek[j].szuletesi_ev);
				}
				err = 1;
				break;
			}
		}
		err ?: fprintf(stderr, "OK\n");
	}
#endif
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
