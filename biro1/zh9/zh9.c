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

Az alabbi fuggveny feladata helyet foglalni egy ketdimenzios int tombnek.
A tomb sor- es oszlopszama megegyezik.
A tomb N meretet a fuggveny parameterkent kapja.
A helyfoglalas ugy tortenjen, hogy eloszor helyet foglalunk az N sor
pointereinek, majd megfelelo modon minden sor N-N darab elemenek is.
A helyfoglalas utan toltsuk fel a tomb elemeit ertekekkel a kovetkezo modon:
A tomb szelen levo elemek, azaz a 0. es utolso sor, illetve 0. es utolso oszlop
elemei legyenek 0, belso elemek pedig 1 ertekuek.
A fuggveny terjen vissza a tombre mutato pointerrel. A memoria felszabaditasaval
nem kell foglalkoznod.
*/

int **foglal(int n) {
	int **mtrx = malloc(sizeof(int*)*n);
	for(int r=0; r<n; r++) {
		mtrx[r]=malloc(sizeof(int)*n);
		for(int c=0; c<n; c++) {
			mtrx[r][c]= (r==0 || r==n-1 || c==0 || c==n-1) ? 0 : 1;
		}
	}
	return mtrx;
}

/*
2. feladat (5 pont)

Irj egy fuggvenyt, amely kiszamolja, hogy egy utasitassorozat hatasara
hova jutunk a (0,0) koordinatabol kezdetben eszak fele nezve! Az
utasitassorozat egy sztring, ami a kovetkezo karakterekbol allhat:
'b', 'j', 'e', 'k', 'd', 'n', '1'..'9'. Minden egyeb, a sztringben
szereplo karaktert figyelmen kivul kell hagyni! A karakterek jelentesei:
'b' - forduljunk balra 90 fokkal; 'j' - forduljunk jobbra 90 fokkal;
'e', 'k', 'd', 'n' - forduljunk eszaknak, keletnek, delnek, nyugatnak;
'1'..'9' - lepjunk elore 1..9 egyseget. A fuggveny visszateresi erteke
a vegpont koordinatainak (elojeles) osszege. Az egyik koordinata kelet,
a masik eszak fele novekszik.
*/

int koord(char* utasitas) {
	int pos[2] = {0,0};
	int dir[4] = {1,0,0,0}; // e k d n
	for(int i=0, tmp=0; utasitas[i]!=0; i++) {
		switch(utasitas[i]) {
			case 'e': dir[0]=1; dir[1]=0; dir[2]=0; dir[3]=0; break;
			case 'k': dir[0]=0; dir[1]=1; dir[2]=0; dir[3]=0; break;
			case 'd': dir[0]=0; dir[1]=0; dir[2]=1; dir[3]=0; break;
			case 'n': dir[0]=0; dir[1]=0; dir[2]=0; dir[3]=1; break;
			case 'j': tmp=dir[0]; dir[0]=dir[3]; dir[3]=dir[2]; dir[2]=dir[1]; dir[1]=tmp; break;
			case 'b': tmp=dir[0]; dir[0]=dir[1]; dir[1]=dir[2]; dir[2]=dir[3]; dir[3]=tmp; break;
			default:
				if(utasitas[i]>='1' && utasitas[i]<='9') {
					pos[0] += dir[0]*(utasitas[i]-48) - dir[2]*(utasitas[i]-48);
					pos[1] += dir[1]*(utasitas[i]-48) - dir[3]*(utasitas[i]-48);
				}
				break;
		}
		//printf("c:%c pos[%d,%d] dir[%d,%d,%d,%d]\n",utasitas[i],pos[0],pos[1],dir[0],dir[1],dir[2],dir[3]);
	}
	return pos[0]+pos[1];
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
	int chck;
	int n, i, j;
	int **ptr = NULL;
	if(fscanf(stdin, "%d %d", &chck, &n)!=2) {
		fprintf(stderr, "HIBA: Nem olvasható adat!\n");
		return;
	}
	ptr = foglal(n);
	switch (chck) {
		case 1:
			if (ptr != NULL) {
				free(ptr);
				fprintf(stdout,"%d\n", n);
			} else {
				fprintf(stdout,"NULL\n");
			}
			break;
		case 2:
			for(i=0; i<n; i++) {
				free(ptr[i]);
				fprintf(stdout,"%d", n);
			}
			fputc('\n', stdout);
			break;
		case 3:
			for(i=0; i<n; i++) {
				for(j=0; j<n; j++) {
					fprintf(stdout, "%d%c", ptr[i][j], (j==n-1)?'\n':' ');
				}
			}
			break;
		default:
			if(fscanf(stdin, "%d %d", &i, &j)!=2) {
				fprintf(stderr, "HIBA: Nem olvasható adat!\n");
				return;
			}
			fprintf(stdout,"%d\n", ptr[i][j]);
			break;
	}
}
void test_1()
{
	const int n = 4;
	int i, j, k;
  int **ptr = NULL;
  struct {int ptr[4][4];} testlist[1] = {
  	{
  		{
  			{0,0,0,0},
  			{0,1,1,0},
  			{0,1,1,0},
  			{0,0,0,0}
  		}
  	}
  };
  for (i = 0; i < 1; ++i) {
    ptr = foglal(n);
    if (ptr == NULL) {
    	fprintf(stderr, "HIBA: NULL pointer\n");
    	return;
    } else {
    	for (j = 0; j < n; ++j) {
    		if (ptr[j] == NULL) {
		    	fprintf(stderr, "HIBA: NULL pointer\n");
		    	return;
    		} else {
	    		for (k = 0; k < n; ++k) {
	    			if (ptr[j][k] != testlist[i].ptr[j][k]) {
	    				fprintf(stderr, "HIBA a(z) (%d,%d) pozíción\n"
	    					              "\telvárt eredmény: %d\n"
	    					              "\tkapott eredmény: %d\n",
	    					              j, k, testlist[i].ptr[j][k], ptr[j][k]);
	    				return;
	    			}
	    		}
	    	}
    	}
    }
    for (j = 0; j < n; free(ptr[j++]));
    free(ptr);
  }
}

void call_2()
{
	int i = 0;
	char kif[100];
	if(fscanf(stdin, "%s", kif)!=1) {
		fprintf(stderr, "HIBA: Nem olvasható adat!\n");
		return;
	}
	i = koord(kif);
	fprintf(stdout,"%d\n",i);
}
void test_2()
{
	int i, eredmeny;
	struct {char kif[100]; int eredmeny;} testlist[1] = {
		{"2b3jj1j1ezer1", 0}
	};
	for (i = 0; i < 1; ++i) {
		eredmeny = koord(testlist[i].kif);
		if (testlist[i].eredmeny != eredmeny) {
			fprintf(stderr, "HIBA: koord(\"%s\")\n"
							"\telvárt eredmény: %d\n"
							"\tkapott eredmény: %d\n",
					testlist[i].kif, testlist[i].eredmeny, eredmeny);
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