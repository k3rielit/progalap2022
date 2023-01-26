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

Irj egy trapez nevu strukturat, ami az
a, c es m nevu float tipusu mezoiben
egy trapez ket alapjanak hosszat es a trapez magassagat tarolja.
Irj egy compare nevu fuggvenyt, ami ket ilyen
trapezt kap parameterul, es a nagyobb teruletuvel ter vissza.
Amennyiben a ket trapez terulete egyforma, akkor a fuggveny
az elso parameterben kapott trapezt adja vissza.
A trapez terulete: ((a+c)*m)/2.
*/
/****************************************************
 * A kovetkezo sor programba illesztese eseten      *
 * (// torlese a #define elol) a feladat nem okoz   *
 * forditasi hibat, de pontot sem fog erni.         *
 ****************************************************/
//#define KIHAGY_1
#if ! (defined(KIHAGY_1) || defined(KIHAGY_MIND))

trapez compare(trapez tr1, trapez tr2) {
}

#endif

/*
2. feladat (5 pont)

A fuggveny parametere ket karaktertomb. A feladat az elso karaktertombben
tarolt szoveg atirasa ugy, hogy minden szo elso betuje nagy legyen, a tobbi
kicsi. A szavakat a szokoz karakter ' ' valasztja el egymastol, es a sztringet a
szokasos 0 kodu karakter zarja le. A szoveg nem tartalmaz ekezetes betuket.
Az atirt szoveg a masodik karaktertombben keruljon tarolasra. Vigyazz a szoveg
elso karakterere es az eredmeny lezarasara!
*/

void capitalize(char bemenet[], char eredmeny[]) {
}
/***********************************************************************
************************************************************************
**
**  EZEN A PONTON TÚL NE VÁLTOZTASS SEMMIT SEM A FÁJLON!
**
************************************************************************
***********************************************************************/

void call_1(){
#if ! (defined(KIHAGY_1) || defined(KIHAGY_MIND))
  int v;
  trapez a, b, x;
  if(fscanf(stdin, "%d", &v)!=1) {
    fprintf(stderr, "HIBA: Nem olvasható adat!\n");
    return;
  }
  switch(v) {
  case 1:
    if(fscanf(stdin, "%d", &v)!=1) {
      fprintf(stderr, "HIBA: Nem olvasható adat!\n");
      return;
    }
    fprintf(stdout, "fordul%d\n", v);
    break;
  default:
    if(fscanf(stdin, "%f %f %f", &a.a, &a.c, &a.m)!=3) {
      fprintf(stderr, "HIBA: Nem olvasható adat!\n");
      return;
    }
    if(fscanf(stdin, "%f %f %f", &b.a, &b.c, &b.m)!=3) {
      fprintf(stderr, "HIBA: Nem olvasható adat!\n");
      return;
    }
    x = compare(a, b);
    fprintf(stdout, "[%f,%f,%f]\n", x.a, x.c, x.m);
    break;
  }
#endif
}
void test_1(){
#if ! (defined(KIHAGY_1) || defined(KIHAGY_MIND))
  int i;
  trapez eredmeny;
  struct {trapez a, b, eredmeny;} testlist[2] = {
    {{.a=3, .c=10, .m=4}, {.a=6, .c=5, .m=4}, {.a=3, .c=10, .m=4}},
    {{.a=2, .c=3,  .m=4}, {.a=6, .c=4, .m=2}, {.a=2, .c=3,  .m=4}}
  };
  for (i = 0; i < 2; ++i) {
    eredmeny = compare(testlist[i].a, testlist[i].b);
    if (eredmeny.a != testlist[i].eredmeny.a || eredmeny.c != testlist[i].eredmeny.c || eredmeny.m != testlist[i].eredmeny.m) {
      fprintf(stderr, "HIBA: compare([%f,%f,%f], [%f,%f,%f])\n"
		      "\telvárt eredmény: [%f,%f,%f]\n"
		      "\tkapott eredmény: [%f,%f,%f]\n",
		      testlist[i].a.a, testlist[i].a.c, testlist[i].a.m, testlist[i].b.a, testlist[i].b.c, testlist[i].b.m,
		      testlist[i].eredmeny.a, testlist[i].eredmeny.c, testlist[i].eredmeny.m,
		      eredmeny.a, eredmeny.c, eredmeny.m
      );
    }
  }
#endif
}

void call_2()
{
	char *p, bemenet[256]="#####", eredmeny[256]="#####";
	if(fgets(bemenet, 256, stdin)==NULL) {
		fprintf(stderr, "HIBA: Nem olvasható adat!\n");
		return;
	}
	for(p=bemenet;*p&&*p!=10;p++);
	*p=0;
	capitalize(bemenet, eredmeny);
	fprintf(stdout,"%s\n", eredmeny);
}
void test_2()
{
  int i, j;
  char eredmeny[100] = "#####";
  struct {char bemenet[100]; char eredmeny[100];} testlist[2] = {
    {"pRoGaLaP", "Progalap"},
    {"EGY par Szavas pELDA", "Egy Par Szavas Pelda"}
  };
  for (i = 0; i < 2; ++i) {
    capitalize(testlist[i].bemenet, eredmeny);
    for (j = 0; testlist[i].eredmeny[j] == eredmeny[j] && testlist[i].eredmeny[j] != 0; ++j);
    if (eredmeny[j] != testlist[i].eredmeny[j]) {
      fprintf(stderr, "HIBA: capitalize(\"%s\", \"...\")\n"
                      "\telvárt eredmény: \"%s\"\n"
                      "\tkapott eredmény: \"%s\"\n",
              testlist[i].bemenet, testlist[i].eredmeny, eredmeny);
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
