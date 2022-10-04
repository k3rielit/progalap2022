#include <gtest/gtest.h>

#define main main_0
#include "../src/jatekok.c"
#undef main

#include "../../tools.cpp"

TEST(JatekokTorlese, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int arak[] = {8, 5, 10, 15, 4, 13, 5};
    int db = 7;
    int osszeg = 10;

    int megoldas[] = {8, 5, 10, 4, 5};
    int megoldasDb = 5;

    vasarlas(arak, db, osszeg);

    ASSERT_ARRAY_EQ(arak, megoldas, megoldasDb)
}

TEST(JatekokTorlese, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int arak[] = {8, 5, 10, 15, 4, 13, 5};
    int db = 7;
    int osszeg = 16;

    int megoldas[] = {8, 5, 10, 15, 4, 13, 5};
    int megoldasDb = 7;

    vasarlas(arak, db, osszeg);

    ASSERT_ARRAY_EQ(arak, megoldas, megoldasDb)
}

TEST(JatekokTorlese, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int arak[] = {8, 5, 10, 15, 4, 13, 5};
    int db = 7;
    int osszeg = 4;

    int megoldas[] = {4};
    int megoldasDb = 1;

    vasarlas(arak, db, osszeg);

    ASSERT_ARRAY_EQ(arak, megoldas, megoldasDb)
}

TEST(JatekokTorlese, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int arak[] = {8, 5, 10, 15, 4, 13, 5};
    int db = 7;
    int osszeg = 3;

    int megoldas[] = {8};
    int megoldasDb = 0;

    vasarlas(arak, db, osszeg);

    ASSERT_ARRAY_EQ(arak, megoldas, megoldasDb)
}

TEST(JatekokTorlese, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int arak[] = {1300, 30000, 25000, 22000, 5000, 5900, 4900, 5900, 12000, 11990, 11990, 1000};
    int db = 12;
    int osszeg = 5000;

    int megoldas[] = {1300, 5000, 4900, 1000};
    int megoldasDb = 4;

    vasarlas(arak, db, osszeg);

    ASSERT_ARRAY_EQ(arak, megoldas, megoldasDb)
}

TEST(Sporolas, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int arak[] = {8, 5, 10, 15, 4, 13, 5};
    int db = 7;
    int osszeg = 10;

    int res = vasarlas(arak, db, osszeg);

    ASSERT_EQ(res, 28);
}

TEST(Sporolas, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int arak[] = {8, 5, 10, 15, 4, 13, 5};
    int db = 7;
    int osszeg = 16;

    int res = vasarlas(arak, db, osszeg);

    ASSERT_EQ(res, 0);
}

TEST(Sporolas, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int arak[] = {8, 5, 10, 15, 4, 13, 5};
    int db = 7;
    int osszeg = 4;

    int res = vasarlas(arak, db, osszeg);

    ASSERT_EQ(res, 56);
}

TEST(Sporolas, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int arak[] = {8, 5, 10, 15, 4, 14, 5};
    int db = 7;
    int osszeg = 3;

    int res = vasarlas(arak, db, osszeg);

    ASSERT_EQ(res, 61);
}

TEST(Sporolas, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int arak[] = {1300, 30000, 25000, 22000, 5000, 5900, 4900, 5900, 12000, 11990, 11990, 1000};
    int db = 12;
    int osszeg = 5000;

    int res = vasarlas(arak, db, osszeg);

    ASSERT_EQ(res, 124780);
}