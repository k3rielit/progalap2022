int hatvany(int szam) {
    if(szam%2) return 0;
    for(int i=1; i<szam; i++) {
        int tmp = 2;
        for(int j=1; j<i; j++) tmp*=2;
        if(szam%tmp>0) return i-1;
    }
    return 1;
}