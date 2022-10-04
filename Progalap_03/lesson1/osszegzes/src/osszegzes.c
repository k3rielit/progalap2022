int osszegzes(int szamok[], int darabszam) {
    int osszeg = 0;
    for (int i = 0; i < darabszam; i++) {
        osszeg+=szamok[i];
    }

    return osszeg;
}