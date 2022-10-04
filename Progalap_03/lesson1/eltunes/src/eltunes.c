void maganhangzotlanito(char str[]) {
    char mh[] = "aeiouAEIOU";
    for(int i=0; str[i]!=0; i++) {
        for(int j=0; j<10; j++) {
            if(str[i] == mh[j]) {
                for(int k=i; str[k]!=0; k++) str[k] = str[k+1];
                i = -1;
            }
        }
    }
}