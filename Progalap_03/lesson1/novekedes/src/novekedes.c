char megnovel(char eredeti) {
    if (eredeti >= 'a' && eredeti <= 'z') {
        return eredeti-32;
    }

    return eredeti;
}