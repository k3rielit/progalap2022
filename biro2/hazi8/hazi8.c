#include <stdio.h>
#include <stdlib.h>

typedef struct Mars {
    int MaxHillDist;
    int MaxWaterDist;
    int MinStormDist;
    int Rows;
    int Cols;
    char** Area;
} Mars;

int canBuildOn(Mars* mars, int row, int col);


int main() {
    FILE* in = fopen("be.txt","r");
    Mars mars = {0,0,0,0,0,NULL};
    int result = 0;
    if(in!=NULL) {
        fscanf(in, "%d %d %d\n%d %d\n", &(mars.MaxHillDist), &(mars.MaxWaterDist), &(mars.MinStormDist), &(mars.Rows), &(mars.Cols));
        printf("hill:%d water:%d storm:%d rows:%d cols:%d\n",(mars.MaxHillDist), (mars.MaxWaterDist), (mars.MinStormDist), (mars.Rows), (mars.Cols));
        mars.Area = malloc(sizeof(char*)*mars.Rows);
        for(int r=0; r<mars.Rows; r++) {
            mars.Area[r] = malloc(sizeof(char*)*mars.Cols);
            for(int c=0; c<mars.Cols; c++) {
                mars.Area[r][c] = fgetc(in);
            }
            fgetc(in);
        }
        for(int r=0; r<mars.Rows; r++) {
            for(int c=0; c<mars.Cols; c++) {
                int cbo = canBuildOn(&mars,r,c);
                result += cbo;
                printf("%c-%d ",mars.Area[r][c],cbo);
            }
            printf("\n");
        }
        printf("habitable:%d",result);
    }
    else {
        printf("fopen() error\n");
    }
    fclose(in);
    FILE* out = fopen("ki.txt","w");
    fprintf(out,"%d\n",result);
    fclose(out);
    return 0;
}

int canBuildOn(Mars* mars, int row, int col) {
    if(mars->Area[row][col]!='A' && mars->Area[row][col]!='X') {
        int hill=0, water=0, storm=0, maxrow=mars->Rows-1, maxcol=mars->Cols-1,
        hillrmin=(row-mars->MaxHillDist < 0 ? 0 : row-mars->MaxHillDist),
        hillrmax=(row+mars->MaxHillDist > maxrow ? maxrow : row+mars->MaxHillDist),
        hillcmin=(col-mars->MaxHillDist < 0 ? 0 : col-mars->MaxHillDist),
        hillcmax=(col+mars->MaxHillDist > maxcol ? maxcol : col+mars->MaxHillDist),
        waterrmin=(row-mars->MaxWaterDist < 0 ? 0 : row-mars->MaxWaterDist),
        waterrmax=(row+mars->MaxWaterDist > maxrow ? maxrow : row+mars->MaxWaterDist),
        watercmin=(col-mars->MaxWaterDist < 0 ? 0 : col-mars->MaxWaterDist),
        watercmax=(col+mars->MaxWaterDist > maxcol ? maxcol : col+mars->MaxWaterDist),
        stormrmin=(row-mars->MinStormDist < 0 ? 0 : row-mars->MinStormDist),
        stormrmax=(row+mars->MinStormDist > maxrow ? maxrow : row+mars->MinStormDist),
        stormcmin=(col-mars->MinStormDist < 0 ? 0 : col-mars->MinStormDist),
        stormcmax=(col+mars->MinStormDist > maxcol ? maxcol : col+mars->MinStormDist);
        // hill check
        for(; hillrmin<=hillrmax && !hill; hillrmin++) {
            for(int c=hillcmin; c<=hillcmax && !hill; c++) {
                hill = hill || mars->Area[hillrmin][c] == 'A';
            }
        }
        // water check
        for(; waterrmin<=waterrmax && !water; waterrmin++) {
            for(int c=watercmin; c<=watercmax && !water; c++) {
                water = water || mars->Area[waterrmin][c] == '~';
            }
        }
        // storm check
        for(; stormrmin<=stormrmax && !storm; stormrmin++) {
            for(int c=stormcmin; c<=stormcmax && !storm; c++) {
                storm = storm || mars->Area[stormrmin][c] == 'X';
            }
        }
        return hill && water && !storm;
    }
    return 0;
}