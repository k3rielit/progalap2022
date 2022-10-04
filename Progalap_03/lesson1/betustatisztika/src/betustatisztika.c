void statisztika(char str[], int stats[]) {
    for(int si=0; si<26; si++) stats[si] = 0; // mert nem nullazott alapbol a tomb......
    int i = 0;
    while(str[i]!=0) { // 0 +65 nagy +32 kicsi
        for(int c=0; c<26; c++) {
            if(str[i]==c+65 || str[i]==c+65+32) {
                stats[c]++;
                break;
            }
        }
        i++;
    }
}