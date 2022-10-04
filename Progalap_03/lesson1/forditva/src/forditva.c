int spaceCount(char str[]) {
    int c = 0;
    for(int i=0; str[i]!=0; i++) c += str[i]==' ';
    return c;
}
void spaceIndex(int spaces[], int spaceCount, char str[]) {
    int si = 0;
    int i=0;
    while(str[i]!=0) {
        if(str[i]==' ') {
            spaces[si]=i;
            si++;
        }
        i++;
    }
    spaces[spaceCount-1] = i;
}

void flip(char str[]) {
    int spaceC = spaceCount(str)+1;
    int spaceI[spaceC];
    spaceIndex(spaceI,spaceC,str);
    for(int xd=0; xd<spaceC; xd++) {
        //printf("%d\n",spaceI[xd]);
    }
    for(int s=0; s<spaceC-1; s++) {
        for(int w=spaceI[s]; w<spaceI[s+1]; w++) {
            //printf("%c",str[w]);
        }
        //printf("\n");
    }
}
void kodol(char str[]) {
    flip(str);
}
void dekodol(char str[]) {
    flip(str);
}