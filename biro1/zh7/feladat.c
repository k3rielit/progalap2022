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

A leghosszabb() fuggveny feladata a parameterben kapott szovegben meghatarozni
a leghosszabb szo hosszat. A szovegben a szavakat szokozok valasztjak el, de
a szoveg legvegen nem feltetlenul van szokoz. A szavak az angol abece kis- es 
nagybetuit, valamint szamokat tartalmazhatnak. Vesszok, pontok, felkialtojelek, 
kerdojelek vagy egyeb irasjelek nincsenek a szovegben. A fuggveny a leghosszabb 
szo hosszaval terne vissza.

A fuggveny megvalositasa hibakat tartalmaz.
Javitsd ki ezeket a hibakat.
*/
int leghosszabb(char szoveg[]) {
    int i, szohossz = 0, maxszohossz = 0;
    for (i = 1; szoveg[i] != '0'; ++i) {
        if (szoveg[i] != ' ') {
            ++szohossz;
        } else {
            if (szohossz > maxszohossz) {
                maxszohossz = szohossz;
            }
            szohossz = 0;
        }
    }
    return szohossz > maxszohossz ? maxszohossz : szohossz;
}

/*
2. feladat (5 pont)

A feladat egy fuggveny megirasa, amely parameterul var egy egesz szamokbol allo tombot,
N es M egesz szamokat, illetve ket lebegopontos szamra mutato pointert.
A tombben pozitiv egesz szamok vannak, a tomb veget az elso nempozitiv ertek jelzi.

A fuggveny feladata, hogy meghatarozza a tombben levo elemek kozul az N-nel oszthato elemek,
illetve az M-mel oszthato elemek atlagat kulon-kulon. A pN pointer altal mutatott ertek
legyen az N-nel oszthato elemek atlaga, mig a pM altal mutatott ertek az M-mel oszthato
elemek atlaga.

Amennyiben a tombben egy N-nel / M-mel oszthato ertek sem fordul elo, akkor a pointer
altal mutatott ertek legyen a tomb veget jelzo ertek.

Kodold le C nyelven a fuggvenyt! A fuggveny fejlecen ne valtoztass!
A fuggveny inputjai a parameterek, outputja a visszateresi ertek.
A fuggveny nem vegez IO muveleteket!
*/
void statisztika(int szamok[], int N, int M, float* pN, float* pM) {
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
    char szoveg[128];

    int i;
    for (i = 0; i < 128; ++i)
        szoveg[i] = ' ';
    szoveg[i-1] = '0';

    if (fgets(szoveg, 128, stdin) == NULL) {
        fprintf(stderr, "HIBA: Nem olvasható adat!\n");
        return;
    }

    fprintf(stdout, "%d\n", leghosszabb(szoveg));
}
void test_1()
{
  int i, eredmeny;
  struct {char szoveg[128]; int eredmeny;} testlist[1] = {
    {"eez az ez az ki mi", 3},
  };
  fprintf(stderr, "=== 1. feladat tesztelése ===\n"); 
  for (i = 0; i < 1; ++i) {
    fprintf(stderr, "%d. teszteset ... ", i + 1);
    eredmeny = leghosszabb(testlist[i].szoveg);
    if (eredmeny != testlist[i].eredmeny) {
      fprintf(stderr, "HIBA: leghosszabb(\"%s\")\n"
                      "\telvárt eredmény: %d\n"
                      "\tkapott eredmény: %d\n",
                      testlist[i].szoveg, testlist[i].eredmeny, eredmeny);
    } else
      fprintf(stderr, "OK\n");
  }
}

void call_2()
{
	int meret, N, M;

	if(fscanf(stdin, "%d", &meret) != 1) {
		fprintf(stderr, "HIBA: Nem olvasható adat (meret)!\n");
		return;
	}

    if(fscanf(stdin, "%d %d", &N, &M) != 2) {
        fprintf(stderr, "HIBA: Nem olvasható adat (N es M)!\n");
        return;
    }

	int tomb[meret];
	for (int i = 0; i < meret; i++){
		if(fscanf(stdin, "%d", &tomb[i]) != 1) {
			fprintf(stderr, "HIBA: Nem olvasható (tomb[%d])!\n", i);
			return;
		}
	}

	float *pN = (float*)malloc(sizeof(float));
	if (pN == NULL) {
		fprintf(stderr, "HIBA: Nem foglalható memória (pN)\n");
		return;
	}

	float *pM = (float*)malloc(sizeof(float));
	if (pM == NULL) {
		fprintf(stderr, "HIBA: Nem foglalható memória (pM)\n");
		free(pN);
		return;
	}

	*pM = 9753;
	*pN = 8642;

	statisztika(tomb, N, M, pN, pM);

	if (pN != NULL) {
		fprintf(stdout, "%.3f\n", *pN);
		free(pN);
	} else {
		fprintf(stdout, "NULL\n");
	}

	if (pM != NULL) {
		fprintf(stdout, "%.3f\n", *pM);
		free(pM);
	} else {
		fprintf(stdout, "NULL\n");
	}
}
void test_2()
{
	float delta = 0.001;
	struct {int tomb[5]; int N0; int M0; float atlagNsokszoros; float atlagMsokszoros;} testlist[2] = {
		{ { 3, 5, 4, 3, -1}, 3, 4, 3, 4 },
		{ { 8, 2, 3, 6, -5}, 3, 2, 4.5, 5.3333 },
	};
	fprintf(stderr, "=== 2. feladat tesztelése ===\n");
	for (int i = 0; i < 2; ++i) {
		fprintf(stderr, "%d. teszteset ... ", i + 1);
		float *pM = (float*)malloc(sizeof(float));
		float *pN = (float*)malloc(sizeof(float));
		statisztika(testlist[i].tomb, testlist[i].N0, testlist[i].M0, pN, pM);
		if (pN == NULL) {
			fprintf(stderr, "HIBA: NULL pointer (pN)\n");
			if (pM) free(pM);
			continue;
		}
		if (pM == NULL) {
			fprintf(stderr, "HIBA: NULL pointer (pM)\n");
			if (pN) free(pN);
			continue;
		}
		if (*pN <= testlist[i].atlagNsokszoros - delta ||
			*pN >= testlist[i].atlagNsokszoros + delta ||
			*pM <= testlist[i].atlagMsokszoros - delta ||
			*pM >= testlist[i].atlagMsokszoros + delta) {
			fprintf(stderr, "HIBA statisztika({");
			int j = 0; for (; testlist[i].tomb[j] > 0; fprintf(stderr, "%d,", testlist[i].tomb[j++]));
			fprintf(stderr, "%d}, %d, %d)\n"
				"\telvárt eredmény: %0.3f %0.3f\n"
				"\tkapott eredmény: %0.3f %0.3f\n",
				testlist[i].tomb[j], testlist[i].N0, testlist[i].M0,
				testlist[i].atlagNsokszoros, testlist[i].atlagMsokszoros,
				*pN, *pM);
		} else
			fprintf(stderr, "OK\n");
		if (pM) free(pM);
		if (pN) free(pN);
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
