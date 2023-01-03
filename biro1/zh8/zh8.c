#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *in = fopen("be.txt", "r");
    FILE *out = fopen("ki.txt", "w");
    if (in != NULL) {
        int viewdist = 0, citycount = 0, res = 0, rescount = 0;
        fscanf(in, "%d\n%d\n", &viewdist, &citycount);
        int *cities = malloc(sizeof(int) * (citycount - 1));
        for (int i = 0; i < citycount - 1 && !feof(in); i++) {
            fscanf(in, "%d\n", &cities[i]);
        }
        for (int j = 0; j < citycount; j++) {
            int count = 0;
            for (int x = j - 1, tempdist = viewdist; x >= 0; x--) {
                tempdist -= cities[x];
                if (tempdist >= 0)
                    count++;
            }
            for (int y = j, tempdist = viewdist; y < citycount; y++) {
                tempdist -= cities[y];
                if (tempdist >= 0)
                    count++;
            }
            if (count > rescount) {
                res = j;
                rescount = count;
            }
        }
        if (out != NULL) {
            fprintf(out, "%d\n", res);
        }
    }
    fclose(in);
    fclose(out);
    return 0;
}