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

A feladat megallapitani, hogy egy huszar hany mezot uthet a sakktablan.
A huszar a tole L alakban egyenesen 2 oldalra 1 tavolsagra levo mezoket
uti (ahol az egyenes barmelyik irany lehet a 4 kozul).

A fuggveny bemenetkent karakterben kapja meg a mezo koordinatait (egy
kisbetu 'a'-'h' es egy szamjegy '1'-'8'), a visszateresi erteke pedig
az utott mezok szama.

Kodold le a fuggvenyt C nyelven!
A fuggveny fejlecen ne valtoztass!
A fuggveny inputjai a parameterek, outputja a visszateresi ertek.
A fuggveny nem vegez IO muveleteket!
*/

int huszar(char oszlop, char sor) {
}

/*
2. feladat (5 pont)

Az alabbi fuggveny parametere egy sztring. A feladat torolni belole
minden masodik karaktert. (Ezaltal a sztring rovidulhet.) Kodold le
a fuggvenyt C nyelven.

Kodold le a fuggvenyt C nyelven!
A fuggveny fejlecen ne valtoztass!
A fuggveny inputjai a parameterek, outputja a visszateresi ertek.
A fuggveny nem vegez IO muveleteket!
*/

void strtorles(char str[]) {
}

/*
3. feladat (5 pont)

Hatarozzuk meg, hogy a parameterkent kapott evben az adott honap
adott napja az ev hanyadik napja. A fuggveny ezzel az ertekkel terjen
vissza. Figyeljunk a szokoevekre! Az input adatok egy 1800 es 5000
kozotti valos napot jelolnek.

Kodold le a fuggvenyt C nyelven!
A fuggveny fejlecen ne valtoztass!
A fuggveny inputjai a parameterek, outputja a visszateresi ertek.
A fuggveny nem vegez IO muveleteket!
*/

int evnapja(int ev, int ho, int nap) {
}

/*
4. feladat (5 pont)

Az alabbi fuggveny egy penzosszeget kap parameterkent, majd meghatarozza,
hogy legkevesebb hany darab 10, 5, 2 es 1 koronas ermervel fizetheto ki az
osszeg! A fuggveny visszateresi erteke -1, ha rossz erteket kap.

Kodold le a fuggvenyt C nyelven!
A fuggveny fejlecen ne valtoztass!
A fuggveny inputjai a parameterek, outputja a visszateresi ertek.
A fuggveny nem vegez IO muveleteket!
*/

int erme(int osszeg) {
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
	char o, s;
	int eredmeny;
	if(fscanf(stdin, "%c%c", &o, &s) != 2) {
		fprintf(stderr, "HIBA: Nem olvasható adat!\n");
		return;
	}
	eredmeny=huszar(o, s);
	fprintf(stdout, "%d\n", eredmeny);
}
void test_1()
{
    int i, eredmeny;
    struct {char o; char s; int eredmeny;} testlist[2] = {
        {'a', '1', 2},
        {'d', '4', 8},
    };
    for (i = 0; i < 2; ++i) {
        eredmeny=huszar(testlist[i].o, testlist[i].s);
        if (eredmeny != testlist[i].eredmeny) {
            fprintf(stderr, "HIBA: huszar('%c', '%c')\n", testlist[i].o, testlist[i].s);
            fprintf(stderr, "\telvárt eredmény: %d\n", testlist[i].eredmeny);
            fprintf(stderr, "\tkapott eredmény: %d\n", eredmeny);
        }
    }
}

void call_2()
{
	char str[128]="#####", *p;
	if(fgets(str, 128, stdin) == NULL) {
		fprintf(stderr, "HIBA: Nem olvasható adat!\n");
		return;
	}
	for(p=str;*p&&*p!=10;p++);
	*p=0;
	strtorles(str);
	fprintf(stdout, "%s\n", str);
}

void test_2()
{
    int i, j;
    char str[] = "####################";
    struct {char str[20]; char eredmeny[20];} testlist[2] = {
        {"progalap",     "poaa"  },
        {"zsirosdeszka", "ziodsk"},
    };
    for (i = 0; i < 2; ++i) {
        for(j = 0; testlist[i].str[j] != 0; str[j] = testlist[i].str[j], ++j);
        str[j] = 0;
        strtorles(str);
        for(j = 0; str[j] != 0 && testlist[i].eredmeny[j] != 0 && str[j] == testlist[i].eredmeny[j]; ++j);
        if (str[j] != testlist[i].eredmeny[j]) {
            fprintf(stderr, "HIBA: strtorles(\"%s\")\n", testlist[i].str);
            fprintf(stderr, "\telvárt eredmény: \"%s\"\n", testlist[i].eredmeny);
            fprintf(stderr, "\tkapott eredmény: \"%s\"\n", str);
        }
    }
}


void call_3()
{
	int Y, M, D, eredmeny;
	if(fscanf(stdin, "%d %d %d", &Y, &M, &D) != 3) {
		fprintf(stderr, "HIBA: Nem olvasható adat!\n");
		return;
	}
	eredmeny = evnapja(Y, M, D);
	fprintf(stdout, "%d\n", eredmeny);
}
void test_3()
{
    int i, eredmeny;
    struct {int ev; int ho; int nap; int eredmeny;} testlist[2] = {
        {2019, 1, 1, 1 },
        {2020, 3, 1, 61},
    };
    for (i = 0; i < 2; ++i) {
        eredmeny=evnapja(testlist[i].ev, testlist[i].ho, testlist[i].nap);
        if (eredmeny != testlist[i].eredmeny) {
            fprintf(stderr, "HIBA: evnapja(%d, %d, %d)\n", testlist[i].ev, testlist[i].ho, testlist[i].nap);
            fprintf(stderr, "\telvárt eredmény: %d\n", testlist[i].eredmeny);
            fprintf(stderr, "\tkapott eredmény: %d\n", eredmeny);
        }
    }
}

void call_4()
{
	int osszeg, eredmeny;
	if(fscanf(stdin, "%d", &osszeg)!= 1) {
		fprintf(stderr, "HIBA: Nem olvasható adat!\n");
		return;
	}
	eredmeny = erme(osszeg);
	fprintf(stdout, "%d\n", eredmeny);
}
void test_4()
{
    int i, eredmeny;
    struct {int osszeg; int eredmeny;} testlist[2] = {
        {2019, 204},
        {18,   4  },
    };
    for (i = 0; i < 2; ++i) {
        eredmeny=erme(testlist[i].osszeg);
        if (eredmeny != testlist[i].eredmeny) {
            fprintf(stderr, "HIBA: erme(%d)\n", testlist[i].osszeg);
            fprintf(stderr, "\telvárt eredmény: %d\n", testlist[i].eredmeny);
            fprintf(stderr, "\tkapott eredmény: %d\n", eredmeny);
        }
    }
}

typedef void (*call_function)();

call_function call_table[] = {
	call_1,
	call_2,
	call_3,
	call_4,
	NULL
};


call_function test_table[] = {
	test_1,
	test_2,
	test_3,
	test_4,
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
