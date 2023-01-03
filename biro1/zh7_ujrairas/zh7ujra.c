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

Az emelkedo() fuggveny feladata kiszamolni azt, hogy mekkora szintemelkedessel bir
a legnagyobb szintkulonbsegu szakasz egy szakaszokbol felepulo hegyvideki tura soran.
A parameterben kapott terkep tomb a turautvonal szakaszait zaro allomasok tengerszint 
feletti magassagertekeit tartalmazza. A tombot a -1 ertek zarja. A fuggveny kiszamolna, 
hogy mekkora a legnagyobb kulonbseg a kovetkezo es az aktualis allomas kozott, ott ahol 
a kovetkezo allomas eleresehez felfele kell haladni.
Vedd szemugyre a probainputot es a hozza tartozo kimenetet.

A fuggveny megvalositasa hibakat tartalmaz.
Javitsd ki ezeket a hibakat.
*/
int emelkedo(int terkep[]) {
    int szint = 0, i = 0;
    for (; terkep[i] != -1; ++i) szint = terkep[i+1]-terkep[i] > szint ? terkep[i+1]-terkep[i] : szint;
    return szint;
}

/*
2. feladat (5 pont)

A feladat egy fuggveny megirasa, amely parameterul var egy egesz szamokbol
allo tombot, illetve ket lebegopontos szamra mutato pointert. A tombben pozitiv
egesz szamok vannak, a tomb veget az elso nempozitiv ertek jelzi.

A fuggveny feladata, hogy meghatarozza a tombben levo elemek kozul a paros elemek,
illetve paratlan elemek atlagat kulon-kulon. A paratlan pointer altal mutatott
ertek legyen a paratlan elemek atlaga, mig a paros altal mutatott ertek
a paros elemek atlaga.

Amennyiben a tombben egy paros / paratlan ertek sem fordul elo, akkor a pointer
altal mutatott ertek legyen a tomb veget jelzo ertek.

Kodold le C nyelven a fuggvenyt! A fuggveny fejlecen ne valtoztass!
A fuggveny inputjai a parameterek, outputja a visszateresi ertek.
A fuggveny nem vegez IO muveleteket!
*/
void statisztika(int szamok[], float* paratlan, float* paros) {
    *paratlan = *paros = 0;
    int i=0, p1c=0, p2c=0;
    for(; szamok[i]>=0; i++) {
        if(szamok[i]%2) {
            *paratlan += szamok[i];
            p2c++;
        }
        else {
            *paros += szamok[i];
            p1c++;
        }
    }
    *paros = p1c>0 ? *paros/p1c : szamok[i];
    *paratlan = p2c>0 ? *paratlan/p2c : szamok[i];
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
    int i, n, terkep[128];

    if(fscanf(stdin, "%d\n", &n)!=1) {
        fprintf(stderr, "HIBA: Nem olvasható adat!\n");
        return;
    }

    for (i=0; i<n; ++i) {
        if (fscanf(stdin, "%d", terkep + i)!=1) {
            fprintf(stderr, "HIBA: Nem olvasható adat!\n");
            return;
        }
    }

    terkep[i] = -1;

    fprintf(stdout, "%d\n", emelkedo(terkep));
}
void test_1()
{
  int i, j, eredmeny;
  struct {int terkep[128]; int eredmeny;} testlist[1] = {
    {{90,101,112,132,134,150,150,140,140,147,152,163,-1}, 20},
  };
  fprintf(stderr, "=== 1. feladat tesztelése ===\n"); 
  for (i = 0; i < 1; ++i) {
    fprintf(stderr, "%d. teszteset ... ", i + 1);
    eredmeny = emelkedo(testlist[i].terkep);
    if (eredmeny != testlist[i].eredmeny) {
      fprintf(stderr, "HIBA: emelkedo({");
      for(j = 0; testlist[i].terkep[j] != -1; fprintf(stderr, "%d,", testlist[i].terkep[j++]));
      fprintf(stderr, "-1})\n"
                      "\telvárt eredmény: %d\n"
                      "\tkapott eredmény: %d\n",
                      testlist[i].eredmeny, eredmeny);
    } else
      fprintf(stderr, "OK\n");
  }
}

void call_2()
{
	int meret;

	if(fscanf(stdin, "%d", &meret) != 1) {
		fprintf(stderr, "HIBA: Nem olvasható adat (meret)!\n");
		return;
	}

	int tomb[meret];
	for (int i = 0; i < meret; i++){
		if(fscanf(stdin, "%d", &tomb[i]) != 1) {
			fprintf(stderr, "HIBA: Nem olvasható (tomb[%d])!\n", i);
			return;
		}
	}

	float *paros = (float*)malloc(sizeof(float));
	if (paros == NULL) {
		fprintf(stderr, "HIBA: Nem foglalható memória (paros)\n");
		return;
	}

	float *paratlan = (float*)malloc(sizeof(float));
	if (paratlan == NULL) {
		fprintf(stderr, "HIBA: Nem foglalható memória (paratlan)\n");
		free(paros);
		return;
	}

	*paratlan = 9753;
	*paros = 8642;

	statisztika(tomb, paratlan, paros);

	if (paros != NULL) {
		fprintf(stdout, "%.3f\n", *paros);
		free(paros);
	} else {
		fprintf(stdout, "NULL\n");
	}

	if (paratlan != NULL) {
		fprintf(stdout, "%.3f\n", *paratlan);
		free(paratlan);
	} else {
		fprintf(stdout, "NULL\n");
	}
}
void test_2()
{
	float delta = 0.001;
	struct {int tomb[5]; float atlagParatlan; float atlagParos;} testlist[2] = {
		{ { 3, 5, 4, 3, -1}, 3.666, 4 },
		{ { 8, 2, 3, 5, -5}, 4, 5 },
	};
	fprintf(stderr, "=== 2. feladat tesztelése ===\n");
	for (int i = 0; i < 2; ++i) {
		fprintf(stderr, "%d. teszteset ... ", i + 1);
		float *paratlan = (float*)malloc(sizeof(float));
		float *paros = (float*)malloc(sizeof(float));
		statisztika(testlist[i].tomb, paratlan, paros);
		if (paratlan == NULL) {
			fprintf(stderr, "HIBA: NULL pointer (paratlan)\n");
			if (paros) free(paros);
			continue;
		}
		if (paros == NULL) {
			fprintf(stderr, "HIBA: NULL pointer (paros)\n");
			if (paratlan) free(paratlan);
			continue;
		}
		if (*paros <= testlist[i].atlagParos - delta ||
			*paros >= testlist[i].atlagParos + delta ||
			*paratlan <= testlist[i].atlagParatlan - delta ||
			*paratlan >= testlist[i].atlagParatlan + delta) {
			fprintf(stderr, "HIBA statisztika({");
			int j = 0; for (; testlist[i].tomb[j] > 0; fprintf(stderr, "%d,", testlist[i].tomb[j++]));
			fprintf(stderr, "%d})\n"
				"\telvárt eredmény: %0.3f %0.3f\n"
				"\tkapott eredmény: %0.3f %0.3f\n",
				testlist[i].tomb[j],
				testlist[i].atlagParatlan, testlist[i].atlagParos,
				*paratlan, *paros);
		} else
			fprintf(stderr, "OK\n");
		if (paros) free(paros);
		if (paratlan) free(paratlan);
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