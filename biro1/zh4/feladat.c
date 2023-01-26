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

Javitsd ki a fgv_1 fuggveny hibait a fordito visszajelzesei
alapjan!
*/
#if !defined(COMPILEONBIRO) || defined(COMPILEFOR1)

int fgv_1(char sz[]) {
	int s = 0;
	for (i = 0; sz[i] != 0; ++i) {
		s = sz[i] - '0' - s;
	}
	return s % 11;
}

#endif

/*
2. feladat (1 pont)

Javitsd ki a fgv_2 fuggveny hibait a fordito visszajelzesei
alapjan!
*/
#if !defined(COMPILEONBIRO) || defined(COMPILEFOR2)

int fgv_2(char sz[]) {
	int i, s = 0;
	for {i = 0; sz[i] != 0; ++i} {
		s += sz[i] - '0';
	}
	return s % 3;
}

#endif

/*
3. feladat (1 pont)

Javitsd ki a fgv_3 fuggveny hibait a fordito visszajelzesei
alapjan!
*/
#if !defined(COMPILEONBIRO) || defined(COMPILEFOR3)

int fgv_3(char sz[]) {
	int s = 0;
	for (i = 0; sz[i] != 0; ++i) {
		s += sz[i] - '0';
	}
	return s % 9;
}

#endif

/*
4. feladat (1 pont)

Az alabbi fuggvenyek megvalositasai hibakat tartalmaznak.
Javitsd ki ezeket a hibakat.
*/
#if !defined(COMPILEONBIRO) || defined(COMPILEFOR4)

struct f4_data {
    int field_A;
    int field_B;
};

int f4_read(struct f4_data*);
void f4_write(struct f4_data);
struct f4_data f4_diff(struct f4_data, struct f4_data);

int f4_main() {
    struct f4_data prev, curr;
    f4_read(&perv);
    f4_write(perv);
    while(f4_read(&curr)) {
        perv = f4_diff(perv, curr);
        f4_write(perv);
        perv = curr;
    }
    return 0;
}

int f4_read(struct f4_data *t) {
    return (scanf("%d.%d", &t->field_A, &t->field_B) == 2);
}

void f4_write(struct f4_data t) {
    printf("%4d.%03d\n", t.field_A, t.field_B);
}

struct f4_data f4_diff(struct f4_data par1, struct f4_data par2) {
    par1.field_B = (par2.field_A-par1.field_A)*1000+(par2.field_B-par1.field_B);
    par1.field_A = par1.field_B / 1000;
    par1.field_B %== 1000;
    return par1;
}

#endif

/*
5. feladat (1 pont)

Az alabbi fuggvenyek megvalositasai hibakat tartalmaznak.
Javitsd ki ezeket a hibakat.
*/
#if !defined(COMPILEONBIRO) || defined(COMPILEFOR5)

struct f5s {
    double x;
    double y;
    double z;
}

typedef struct f5s f5_t;

f5_t f5_g();
double f5_a(f5_t, f5_t, f5_t);

int f5_main() {
    f5_t p[4];
    double t{4};
    double a = 0.0;
    int i;
    for (i = 0; i < 4; ++i) {
        p[i] = f5_g();
        t[i] = 0.0;
    }
    t[0] = f5_a(p[1], p[2], p[3]);
    t[1] = f5_a(p[0], p[2], p[3]);
    t[2] = f5_a(p[0], p[1], p[3]);
    t[3] = f5_a(p[0], p[1], p[2]);
    for (i = 0; i < 4; ++i) {
        a += t[i];
    }
    printf("%.2lf\n", a);
    return 0;
}

f5_t f5_g() {
    f5_t r = {0.0, 0.0, 0.0};
    if(scanf("(%lf,%lf,%lf)\n", &r.x, &r.y, &r.z) != 3) {
        r.x = r.y = r.z = 0.0;
    }
    return r;
}

double f5_r(double xx) {
    double xn;
    xn = xx / 2.0;
    while (f5_m(xx - (xn * xn)) > (xx * 1e-6)) {
        xp = xn;
        xn = f5_m(0.5 * (xp - (xx / xp)));
    }
    return xn;
}

double f5_m(double d) {
    return (d > 0.0) ? d : -d;
}

double f5_d(f5_t p, f5_t q) {
    f5_t d;
    d.x = p.x - q.x;
    d.y = p.y - q.y;
    d.z = p.z - q.z;
    return f5_r(d.x * d.x + d.y * d.y + d.z * d.z);
}

double f5_a(f5_t A, f5_t B, f5_t C) {
    double a, b, c, d;
    a = f5_d(B, C);
    b = f5_d(A, C);
    c = f5_d(A, B);
    d = (a + b + c) / 2.0;
    return f5_r(d * (d - a) * (d - b) * (d - c));
}

#endif
/***********************************************************************
************************************************************************
**
**  EZEN A PONTON TÚL NE VÁLTOZTASS SEMMIT SEM A FÁJLON!
**
************************************************************************
***********************************************************************/

void call_1()
{
#if !defined(COMPILEONBIRO) || defined(COMPILEFOR1)
	char value[128];
	if(fscanf(stdin, "%127s", value)!=1) {
		fprintf(stderr, "HIBA: Nem olvasható adat!\n");
		return;
	}
	fprintf(stdout, "%d\n", fgv_1(value));
#endif
}
void test_1()
{
#if !defined(COMPILEONBIRO) || defined(COMPILEFOR1)
  int eredmeny, i;
  struct {char str[128]; int eredmeny;} testlist[1] = {{"720739", 8}};
  for (i = 0; i < 1; ++i) {
    eredmeny = fgv_1(testlist[i].str);
    if (eredmeny != testlist[i].eredmeny) {
      fprintf(stderr, "HIBA: fgv_1(\"%s\")\n"
                      "\telvárt eredmény: %d\n"
                      "\tkapott eredmény: %d\n",
                      testlist[i].str, testlist[i].eredmeny, eredmeny);
    }
	}
#endif
}

void call_2()
{
#if !defined(COMPILEONBIRO) || defined(COMPILEFOR2)
	char value[128];
	if(fscanf(stdin, "%127s", value)!=1) {
		fprintf(stderr, "HIBA: Nem olvasható adat!\n");
		return;
	}
	fprintf(stdout, "%d\n", fgv_2(value));
#endif
}
void test_2()
{
#if !defined(COMPILEONBIRO) || defined(COMPILEFOR2)
  int eredmeny, i;
  struct {char str[128]; int eredmeny;} testlist[1] = {{"720739", 1}};
  for (i = 0; i < 1; ++i) {
    eredmeny = fgv_2(testlist[i].str);
    if (eredmeny != testlist[i].eredmeny) {
      fprintf(stderr, "HIBA: fgv_2(\"%s\")\n"
                      "\telvárt eredmény: %d\n"
                      "\tkapott eredmény: %d\n",
                      testlist[i].str, testlist[i].eredmeny, eredmeny);
    }
	}
#endif
}

void call_3()
{
#if !defined(COMPILEONBIRO) || defined(COMPILEFOR3)
	char value[128];
	if(fscanf(stdin, "%127s", value)!=1) {
		fprintf(stderr, "HIBA: Nem olvasható adat!\n");
		return;
	}
	fprintf(stdout, "%d\n", fgv_3(value));
#endif
}
void test_3()
{
#if !defined(COMPILEONBIRO) || defined(COMPILEFOR3)
  int eredmeny, i;
  struct {char str[128]; int eredmeny;} testlist[1] = {{"720739", 1}};
  for (i = 0; i < 1; ++i) {
    eredmeny = fgv_3(testlist[i].str);
    if (eredmeny != testlist[i].eredmeny) {
      fprintf(stderr, "HIBA: fgv_3(\"%s\")\n"
                      "\telvárt eredmény: %d\n"
                      "\tkapott eredmény: %d\n",
                      testlist[i].str, testlist[i].eredmeny, eredmeny);
    }
	}
#endif
}

void call_4()
{
#if !defined(COMPILEONBIRO) || defined(COMPILEFOR4)
	f4_main();
#endif
}
void test_4()
{
#if !defined(COMPILEONBIRO) || defined(COMPILEFOR4)
	f4_main();
#endif
}

void call_5()
{
#if !defined(COMPILEONBIRO) || defined(COMPILEFOR5)
	f5_main();
#endif
}
void test_5()
{
#if !defined(COMPILEONBIRO) || defined(COMPILEFOR5)
	f5_main();
#endif
}

typedef void (*call_function)();

call_function call_table[] = {
	call_1,
	call_2,
	call_3,
	call_4,
	call_5,
	NULL
};


call_function test_table[] = {
	test_1,
	test_2,
	test_3,
	test_4,
	test_5,
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
