int meret(int tomb[]) {
    int hossz = 0;
    int i = 0;
    while(tomb[i]!=-1) {
        hossz++;
        i++;
    }
    return hossz;
}