char eltolas(char betu, int mennyivel) {
    for(int i=0; i<mennyivel; i++) betu = betu+1>'z' ? 'a' : betu+1;
    return betu;
}