void csere(char szoveg[], char c1, char c2) {
    int i=0;
    while(szoveg[i]!=0) {
        if(szoveg[i]==c1) szoveg[i]=c2;
        else if(szoveg[i]==c2) szoveg[i]=c1;
        i++;
    }
}