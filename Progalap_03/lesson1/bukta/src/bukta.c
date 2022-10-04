int eredmenyek(int pontszamok[]) {
    int i = 0;
    int bukott = 0;

    while(pontszamok[i]!=-1) {
        bukott += pontszamok[i]>=40 ? 0 : 1;
        i++;
    }

    return bukott;
}