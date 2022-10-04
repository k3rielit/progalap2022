int harcIdo(int eletero, int sebzes) {
    if(eletero==0) return 0;
    else if(sebzes==0) return -1;
    return eletero/sebzes+(eletero%sebzes>0);
}
