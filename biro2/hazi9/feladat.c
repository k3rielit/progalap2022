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
1. feladat (10 pont)

A feladat egy fuggveny megirasa, amely parameterul var
egy karakterekbol allo, ket dimenzios, negyzetes (8×8-as) tombot,
illetve egy karakterre mutato pointert.
A fuggveny egy karakterre mutato pointert ad vissza.

A tomb egy sakktablat szimbolizal, amin sakkbabuk vannak
(gyalog: 'G'; bastya: 'B'; huszar: 'H'; futo: 'F'; kiraly: 'K';
vezer: 'V'; ures mezo: 'U'). Tudjuk, hogy pontosan egy kiraly
van a tablan, a tobbi babubol akarmennyi lehet (akar tobb is,
mint egy hagyomanyos sakk-keszletben, de az is lehet, hogy nulla).

A fuggveny feladata, hogy meghatarozza a kiraly helyet, es
visszaadja azt (tehat annak a tombelemnek a cimet kell visszaadnia,
aminek az erteke 'K'). Ezen kivul ossze kell szamolnia, hany
bastya tudja leutni a kiralyt. (A bastyak nem tudnak atugrani
a tobbi babun.) Ezt az erteket a parameterben kapott pointerben
kell visszaadni. A pointereknek helyet foglalni, illetve
a foglalt helyet felszabaditani nem kell/szabad!

Kodold le C nyelven a fuggvenyt! A fuggveny fejlecen ne valtoztass!
A fuggveny inputjai az elso parameter, outputja a masodik parameter
es a visszateresi ertek. A fuggveny nem vegez IO muveleteket!
*/
char* sakktabla(char tabla[8][8], int* utniKepesBastyak) {
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
    int mod;
    if (fscanf(stdin, "%d\n", &mod) != 1) {
        fprintf(stderr, "HIBA: Nem olvasható adat (mod)!\n");
        return;
    }
    const int meret = 8;
    char tomb[meret][meret];
    for (int i = 0; i < meret; i++){
        for (int j = 0; j < meret; j++){
            if (fscanf(stdin, "%c ", &tomb[i][j]) != 1) {
                fprintf(stderr, "HIBA: Nem olvasható adat (tomb[%d][%d])!\n", i, j);
                return;
            }
        }
    }
    char *eredmeny = NULL;
    int *bastyak = (int*)malloc(sizeof(int));
    *bastyak = -1;
    eredmeny = sakktabla(tomb, bastyak);
    switch (mod) {
        case 1:
            if (eredmeny != NULL) {
                fprintf(stdout,"A mutatott mezon allo babu: %c\n", *eredmeny);
            } else {
                fprintf(stdout,"K:NULL\n");
            }
            break;
        case 2:
            if (bastyak != NULL) {
                fprintf(stdout,"Utni kepes bastyak szama: %d\n", *bastyak);
            } else {
                fprintf(stdout,"B:NULL");
            }
            break;
        default:
            if (eredmeny != NULL) {
                fprintf(stdout,"A mutatott mezon allo babu: %c\n", *eredmeny);
            } else {
                fprintf(stdout,"K:NULL\n");
            }
            if (bastyak != NULL) {
                fprintf(stdout,"Utni kepes bastyak szama: %d\n", *bastyak);
            } else {
                fprintf(stdout,"B:NULL");
            }
            break;
    }
    if (bastyak != NULL) {
        free(bastyak);
        bastyak = NULL;
    }
}
void test_1()
{
    int *bastyak = (int*)malloc(sizeof(int));
    char *eredmeny = NULL;
    struct {char tomb[8][8]; int eredmeny;} testlist[3] = {
        {{
            "UUUBUUUU",
            "UUUUUUBU",
            "UUUUUUUU",
            "UUUKUUBB",
            "UUUUUUUU",
            "UUUUUBUB",
            "UBUBUUUU",
            "UUUUUBUU",
        }, 3},
        {{
            "UUUBUUUU",
            "UUUUUUBU",
            "UUUUUUUU",
            "BUUKUUUU",
            "UUUUUUUU",
            "UUUUUBUB",
            "UBUUUUUU",
            "UUUUUBUU",
        }, 2},
        {{
            "UUUBUUUU",
            "UUHUUUBU",
            "UUHUUUUU",
            "UFUKUUVB",
            "UUUUUUUU",
            "UUUGUBUB",
            "UBUBUUUU",
            "UUUUUBUU",
        }, 1},
    };
    for (int i = 0; i < 3; ++i) {
        *bastyak = 1 << 10, eredmeny = NULL;
        eredmeny = sakktabla(testlist[i].tomb, bastyak);
        if (eredmeny == NULL) {
            fprintf(stderr, "HIBA: a visszatérési érték NULL pointer!\n");
            free(bastyak);
            bastyak = NULL;
            return;
        }
        if (bastyak == NULL) {
            fprintf(stderr, "HIBA: a bástyák száma NULL pointer!\n");
            return;
        }
        if (*eredmeny != 'K' || *bastyak != testlist[i].eredmeny) {
            fprintf(stderr, "HIBA\n");
            for (int k = 0; k < 8; ++k) {
                for (int l = 0; l < 8; ++l) {
                    fprintf(stdout, "%c ", testlist[i].tomb[k][l]);
                }
                fprintf(stdout, "\n");
            }
            fprintf(stdout, "\telvárt eredmény: 'K' %d\n\tkapott eredmény: %c %d\n",
               testlist[i].eredmeny, *eredmeny, *bastyak
            );
            free(bastyak);
            bastyak = NULL;
            return;
        }
    }
    if (bastyak != NULL) {
        free(bastyak);
        bastyak = NULL;
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
