int szamjegyek(char szoveg[]) {
    int i = 0;
    while(szoveg[i]!=0) {
        if(szoveg[i]<'0' || szoveg[i]>'9') return 0;
        i++;
    }
    return 1;
}