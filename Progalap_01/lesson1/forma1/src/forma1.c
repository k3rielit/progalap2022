float futamhossz(float korido, int korokSzama, float boxkiallasHossza, int boxkiallasokSzama) {
    float palyanToltottIdo = korido*korokSzama;
    float boxbanToltottIdo = boxkiallasHossza*boxkiallasokSzama;
    float osszesIdo = palyanToltottIdo+boxbanToltottIdo;
    float idoPercben = osszesIdo/60;
    return idoPercben;
}