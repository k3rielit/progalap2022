int betuszamitas(char str[], char c) {
    int count = 0;
    for(int i=0; str[i]!=0; i++) {
        count+= str[i]==c || str[i]-32==c || str[i]+32==c  ? 1 : 0;
    }
    return count;
}