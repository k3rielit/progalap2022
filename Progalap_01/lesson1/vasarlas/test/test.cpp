#include <gtest/gtest.h>

#define main main_0
#include "../src/vasarlas.c"
#undef main

#include "../../tools.cpp"

TEST(Visszateresi_ertek, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(int res = vasarlas(100, 200))
    ASSERT_EQ(1, res);
}

TEST(Visszateresi_ertek, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(int res = vasarlas(504, 504))
    ASSERT_EQ(1, res);
}

TEST(Visszateresi_ertek, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(int res = vasarlas(611, 610))
    ASSERT_EQ(0, res);
}

TEST(Kiirt_szoveg, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(int res = vasarlas(1000, 200))
    ASSERT_STREQ("Irma neni, sajnos nincs eleg penze!", readstring(file, str));
}

TEST(Kiirt_szoveg, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(int res = vasarlas(103, 104))
    ASSERT_STREQ("", readstring(file, str));
}

TEST(Kiirt_szoveg, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(int res = vasarlas(313, 313))
    ASSERT_STREQ("", readstring(file, str));
}