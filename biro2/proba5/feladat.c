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

A feladat egy fuggveny megirasa, amely parameterul var egy
karakterekbol allo, egy dimenzios tombot, illetve egy karakterre mutato pointert.
A fuggveny egy karakterre mutato pointert ad vissza.

Tudjuk, hogy a tombben pontosan egy 'A' betu van. A fuggveny feladata,
hogy meghatarozza ennek az 'A' betunek a helyet, es visszaadja azt
(tehat annak a tombelemnek a cimet kell visszaadnia, aminek az erteke 'A').
Ezen kivul ossze kell szamolnia, hany 'B' betu van a tombben.
(A kis 'b' betuket is bele kell szamolni.)
Ezt az erteket a parameterben kapott pointerben kell visszaadni.

A pointereknek helyet foglalni, illetve a foglalt helyet felszabaditani nem kell/szabad!

Kodold le C nyelven a fuggvenyt! A fuggveny fejlecen ne valtoztass!
A fuggveny inputja az elso parameter, outputjai a masodik parameter es a visszateresi ertek.
A fuggveny nem vegez IO muveleteket!
*/
char* karakterek(char tomb[], int* bBetuk) {
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
    char tomb[50] = {'#'};
    if (fscanf(stdin, "%d\n", &mod) != 1) {
        fprintf(stderr, "HIBA: Nem olvasható adat (mod)!\n");
        return;
    }
    if (fscanf(stdin, "%[^\n]\n", tomb) != 1) {
        fprintf(stderr, "HIBA: Nem olvasható adat (tomb)!\n");
        return;
    }
    char *eredmeny = NULL;
    int *bBetuk = (int*)malloc(sizeof(int));
    *bBetuk = -1;
    eredmeny = karakterek(tomb, bBetuk);
    switch (mod) {
        case 1:
            if (eredmeny != NULL) {
                fprintf(stdout,"A mutatott helyen (idx:%ld) allo karakter: %c\n", eredmeny - tomb, *eredmeny);
            } else {
                fprintf(stdout,"A:NULL\n");
            }
            break;
        case 2:
            if (bBetuk != NULL) {
                fprintf(stdout,"B betuk szama: %d\n", *bBetuk);
            } else {
                fprintf(stdout,"B:NULL");
            }
            break;
        default:
            if (eredmeny != NULL) {
                fprintf(stdout,"A mutatott helyen (idx:%ld) allo karakter: %c\n", eredmeny - tomb, *eredmeny);
            } else {
                fprintf(stdout,"A:NULL\n");
            }
            if (bBetuk != NULL) {
                fprintf(stdout,"B betuk szama: %d\n", *bBetuk);
            } else {
                fprintf(stdout,"B:NULL");
            }
            break;
    }
    if (bBetuk != NULL) {
        free(bBetuk);
        bBetuk = NULL;
    }
}
void test_1()
{
    int *bBetuk = (int*)malloc(sizeof(int));
    char *eredmeny = NULL;
    
    struct {char tomb[12]; int eredmeny;} testlist[3] = {
        {"ABUBUUB", 3},
        {"bUUbUUserUA", 2},
        {"UUUBAbUber", 3},
    };
    for (int i = 0; i < 3; ++i) {
        *bBetuk = 1 << 10, eredmeny = NULL;
        eredmeny = karakterek(testlist[i].tomb, bBetuk);
        if (eredmeny == NULL) {
            fprintf(stderr, "HIBA: a visszatérési érték NULL pointer!\n");
            free(bBetuk);
            bBetuk = NULL;
            return;
        }
        if (bBetuk == NULL) {
            fprintf(stderr, "HIBA: a 'B' betuk száma NULL pointer!\n");
            return;
        }
        if (*eredmeny != 'A' || *bBetuk != testlist[i].eredmeny) {
            fprintf(stderr, "HIBA: karakterek(\"%s\", int*)\n", testlist[i].tomb);
            fprintf(stdout, "\telvárt eredmény: 'A' %d\n\tkapott eredmény: '%c' %d\n",
               testlist[i].eredmeny, *eredmeny, *bBetuk
            );
            free(bBetuk);
            bBetuk = NULL;
            return;
        }
    }
    if (bBetuk != NULL) {
        free(bBetuk);
        bBetuk = NULL;
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
