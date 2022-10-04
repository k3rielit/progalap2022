int hossz(char szoveg[]) {
    int len = 0;
    int i = 0;
    while(szoveg[i]!=0) {
        len++;
        i++;
    }
    return len;
}