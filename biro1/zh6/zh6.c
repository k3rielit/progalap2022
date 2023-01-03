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

Szamold ki egy s1, s2, s3, ... szamtani sorozat elemeinek szorzatat. A
fuggveny megkapja a sorozat elso ket elemet (elso es masodik),
valamint egy egesz intervallum also (a) es felso (b) vegpontjat.
A fuggveny visszateresi erteke az sa*...*sb szorzat.
A szamtani sorozat n-edik eleme: sn=s1+(n-1)*d
*/

double sorozat(double elso, double masodik, int a, int b) {
    double d=masodik-elso, res=1;
    for(int i=a; i<=b; i++) res*=(elso+((i-1)*d));
    return res;
}

/*
2. feladat (5 pont)

A feladat egy fuggveny megirasa, amely parameterul var egy tehenekbol allo tombot,
annak hosszat, illetve a legelo meretet (negyzetmeterben).
A tehenek elkezdik legelni a legelot. Egy tehen annyi negyzetmeter fuvet legel le,
amennyi az ehsege. A tehenek sorban esznek. Eloszor a tomb legelso poziciojan
levo, utana a kovetkezo, es igy tovabb.
A fuggveny szamolja ki es adja vissza, hogy hany olyan tehen lesz, akinek
egyaltalan nem marad a fubol.
Ha az utolso etkezo tehennek kevesebb fu marad, mint az ehsege, akkor ot meg
ugy szamoljuk, hogy jollakott.
Amennyiben minden tehen tud legelni, akkor -1-et adjunk vissza.

Kodold le C nyelven a fuggvenyt! A fuggveny fejlecen es a strukturan ne valtoztass!
A fuggveny inputjai a parameterek, outputja a visszateresi ertek.
A fuggveny nem vegez IO muveleteket!
*/

typedef struct {
    char nev[30];
    float tomeg;
    int ehseg; // annak a teruletnek a merete negyzetmeterben, amennyit a tehen lelegel
} Tehen;

int ehezes(Tehen tehenek[], int db, int legelo_meret) {
    for(int i=0; i<db; i++) {
        if(legelo_meret<=0) return db-i;
        legelo_meret -= tehenek[i].ehseg;
    }
    return -1;
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
	double e, m, eredmeny;
	int a, b;
	if(fscanf(stdin, "%lf %lf %d %d", &e, &m, &a, &b)!=4) {
		fprintf(stderr, "HIBA: Nem olvasható adat!\n");
		return;
	}
	eredmeny=sorozat(e, m, a, b);
	fprintf(stdout, "%.5lf\n", eredmeny);
}
void test_1()
{
  int i, err;
  double eredmeny;
  struct {double e; double m; int a; int b; double eredmeny;} testlist[2] = {{1.0, 3.0, 3, 5, 315.0}, {1.0, 1.5, 2, 4, 7.5}};
  fprintf(stderr, "=== 1. feladat tesztelése ===\n");
  for (i = 0; i < 2; ++i) {
    err = 0;
    fprintf(stderr, "%d. teszteset ... ", i + 1);
    eredmeny = sorozat(testlist[i].e, testlist[i].m, testlist[i].a, testlist[i].b);
    if (eredmeny != testlist[i].eredmeny) {
      err = 1;
      fprintf(stderr, "HIBA: sorozat(%lf, %lf, %d, %d)\n"
                      "\telvárt eredmény: %lf\n"
                      "\tkapott eredmény: %lf\n",
              testlist[i].e, testlist[i].m, testlist[i].a, testlist[i].b, testlist[i].eredmeny, eredmeny);
    }
    err ?: fprintf(stderr, "OK\n");
  }
}

void call_2(){
    int db, meret;
    Tehen *tehenek;
    if (fscanf(stdin, "%d %d\n", &db, &meret) != 2) {
        fprintf(stderr, "HIBA: Nem olvasható adat (db, meret)!\n");
        return;
    }
    tehenek = (Tehen *)malloc(db * sizeof(Tehen));
    for (int i = 0; i < db; ++i) {
        if(fscanf(stdin, "%s %f %d\n", (tehenek[i].nev), &(tehenek[i].tomeg), &(tehenek[i].ehseg)) != 3) {
            fprintf(stderr, "HIBA: Nem olvasható adat (nev, tomeg, ehseg)!\n");
            free(tehenek);
            return;
        }
    }
    int eredmeny = ehezes(tehenek, db, meret);
    fprintf(stdout, "%d\n", eredmeny);
    free(tehenek);
}
void test_2(){
    int i, err;
    int vegeredmeny;
    struct { Tehen tehenek[3]; int db; int meret; int eredmeny; }
        testlist[3] = {
            {
                { {"Pocok", 2, 5}, {"Menyus", 6, 6}, {"Bela", 4, 2} }, 3, 11, 1
            },
            {
                { {"Nyakas", 2, 4}, {"Foltos", 4, 5}, {"Malacka", 4, 6} }, 3, 6, 1
            },
            {
                { {"Tejeskave", 2, 4}, {"Kakao", 4, 5}, {"Tejfol", 4, 6} }, 3, 30, -1
            }
        };
    fprintf(stderr, "=== 2. feladat tesztelése ===\n");
    for (i = 0; i < 3; ++i) {
        err = 0;
        fprintf(stderr, "%d. teszteset ... ", i + 1);
        vegeredmeny = ehezes(testlist[i].tehenek, testlist[i].db, testlist[i].meret);
        if (vegeredmeny != testlist[i].eredmeny) {
            fprintf(stderr, "HIBA: ehezes([{\"%s\",%f,%d},{\"%s\",%f,%d},{\"%s\",%f,%d}],%d,%d}\n"
                    "\telvárt eredmény: %d\n"
                    "\tkapott eredmény: %d\n",
                    testlist[i].tehenek[0].nev, testlist[i].tehenek[0].tomeg, testlist[i].tehenek[0].ehseg,
                    testlist[i].tehenek[1].nev, testlist[i].tehenek[1].tomeg, testlist[i].tehenek[1].ehseg,
                    testlist[i].tehenek[2].nev, testlist[i].tehenek[2].tomeg, testlist[i].tehenek[2].ehseg,
                    testlist[i].db, testlist[i].meret,
                    testlist[i].eredmeny,
                    vegeredmeny
            );
            err = 1;
        }
        err ?: fprintf(stderr, "OK\n");
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