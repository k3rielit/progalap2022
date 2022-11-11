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

Szamold ki egy s1, s2=s1+d1, s3=s2+d2, ... sorozat elso n elemenek osszeget,
ahol az elemek kozotti d1, d2, ... kulonbsegek mertani sorozatot alkotnak.
A fuggveny megkapja a sorozat elso harom elemet (elso, masodik es harmadik), valamint n erteket.
A fuggveny visszateresi erteke az s1+...+sn osszeg.
A mertani sorozat n-edik eleme: dn=d1*q^(n-1)
*/

double _d1 = 1;
double _q = 1;

double pow(double n, int p) {
    double res = 1;
    for(int i=0; i<p; i++) res *= n;
    return res;
}

double dn(int n) {
    return _d1*pow(_q,n-1);
}

double sn(int n, double prevS) {
    return prevS+dn(n-1);
}

double sorozat(double elso, double masodik, double harmadik, int n) {
    _d1 = masodik-elso;
    _q = (harmadik-masodik)/_d1;
    double prevS = harmadik, result = elso+masodik+harmadik;
    for(int i=4; i<=n; i++) result+=prevS=sn(i,prevS);
    return result;
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
	double e, m, h, eredmeny;
	int n;
	if(fscanf(stdin, "%lf %lf %lf %d", &e, &m, &h, &n)!=4) {
		fprintf(stderr, "HIBA: Nem olvasható adat!\n");
		return;
	}
	eredmeny=sorozat(e, m, h, n);
	fprintf(stdout, "%.5lf\n", eredmeny);
}
void test_1()
{
  int i;
  double eredmeny;
  struct {double e; double m; double h; int n; double eredmeny;} testlist[2] = {
    {1.0, 3.0, 7.0, 5, 57.0},
    {1.0, 2.0, 2.5, 5, 11.125}
  };
  for (i = 0; i < 2; ++i) {
    eredmeny = sorozat(testlist[i].e, testlist[i].m, testlist[i].h, testlist[i].n);
    if (eredmeny != testlist[i].eredmeny) {
      fprintf(stderr, "HIBA: sorozat(%lf, %lf, %lf, %d)\n"
                      "\telvárt eredmény: %lf\n"
                      "\tkapott eredmény: %lf\n",
              testlist[i].e, testlist[i].m, testlist[i].h, testlist[i].n, testlist[i].eredmeny, eredmeny);
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