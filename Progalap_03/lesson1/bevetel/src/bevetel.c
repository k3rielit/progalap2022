int osszesites(int penzek[]) {
    int i = 0;
    int bevetel = 0;
    while(penzek[i]!=0) {
        bevetel += penzek[i]>0 ? penzek[i] : 0;
        i++;
    }
    return bevetel;
}