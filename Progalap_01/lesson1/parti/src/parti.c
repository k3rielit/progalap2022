int eloszthato(int szeletekSzama, int emberek) {
    if (emberek != 0 && szeletekSzama % emberek == 0) {
        return 1;
    }

    return 0;
}