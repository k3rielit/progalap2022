#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* file = fopen("be.txt","r");
    if (NULL == file) {
        printf("Error: fopen(be.txt,r)\n");
        return 0;
    }
    char c;
    int h=0, w=0, robot=0, uncaught=0;
    fscanf(file,"%d %d\n",&h,&w);
    //printf("%dx%d\n",h,w);
    for(int row=0; !feof(file) && row<h; row++) {
        int col=0, realcol=0, caught=0, newpos=robot, oldpos=robot, leftmeteors=0, rightmeteors=0;
        for(; col<w*2; col++) {
            c = fgetc(file);
            if(c!='\n' && c!=32) {
                int robotoffset = realcol-robot>=0 ? realcol-robot : robot-realcol;
                leftmeteors += c-48 && realcol<robot;
                rightmeteors += c-48 && realcol>robot;
                if(row==0 && c-48) { // initial position
                    newpos=realcol;
                    caught++;
                }
                else if(c-48 && caught==0 && realcol==robot) { // robot directly on meteor
                    caught++;
                }
                else if(c-48 && robotoffset>1) { // out of robot range
                    uncaught++;
                }
                else if(c-48 && caught==0 && robotoffset<=1) { // in range
                    caught++;
                    newpos=realcol;
                }
                else if(c-48 && caught==1 && robotoffset<=1) { // in range but already caught one
                    uncaught+=2;
                    caught--;
                    newpos=oldpos;
                }
                realcol++;
                printf("%c", c);
            }
        }
        if(caught==0 && uncaught>0 && leftmeteors-rightmeteors!=0) { // decide new pos when it couldn't catch anything
            newpos += (leftmeteors > rightmeteors ? -1 : 1);
        }
        robot=newpos;
        printf("  caught:%d  uncaught:%d  leftm:%d  rightm:%d  =>  robot:%d\n",caught,uncaught,leftmeteors,rightmeteors,robot);
    }
    printf("uncaught:%d\n",uncaught);
    fclose(file);
    FILE* out = fopen("ki.txt","w");
    fprintf(out,"%d\n",uncaught);
    fclose(out);
    return 0;
}