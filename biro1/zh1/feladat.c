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
1. feladat (1 pont)

Keszits egy programot, amely kiirja a ``Victor'' szoveget a kepernyore
ugy, hogy az ezt koveto kiiratas a sor elejen kezdodjon majd!

A programot main helyett main_p neven keszitsd el, de a tartalma olyan
legyen, mintha egy programot irnal!
*/

int main_p() {
}

/*
2. feladat (2 pont)
* 
Keszits egy programot, amely a standard inputrol beolvas harom egesz
szamot (a, b es c), majd a b+c-a kifejezes erteket kiirja a kepernyore!
A kiiratast sorvege jel zarja! A program mast ne irjon ki!

A programot main helyett main_e neven keszitsd el,
de a tartalma olyan legyen, mintha egy programot irnal!
*/

int main_e() {
}

/*
3. feladat (2 pont)

Keszits egy programot, amely a standard inputrol beolvas ket valos
szamot, majd a ket szam szorzatat kiirja a kepernyore!
A kiiratast sorvege jel zarja! A program mast ne irjon ki!

A programot main helyett main_v neven keszitsd el,
de a tartalma olyan legyen, mintha egy programot irnal!
*/

int main_v() {
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
	main_p();
}
void test_1()
{
	main_p();
}

void call_2()
{
	main_e();
}
void test_2()
{
	main_e();
}

void call_3()
{
	int check;
	if((check = fgetc(stdin)) == EOF) {
		fprintf(stderr, "HIBA: Nem olvasható adat!\n");
		return;
	}
	if(main_v() && (check == 'R')) {
		fputs("RETURNS NONZERO", stdout);
	}
}
void test_3()
{
	main_v();
}


typedef void (*call_function)();

call_function call_table[] = {
	call_1,
	call_2,
	call_3,
	NULL
};


call_function test_table[] = {
	test_1,
	test_2,
	test_3,
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
