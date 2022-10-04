#include <gtest/gtest.h>

#define main main_0
#include "../src/jatekallas.c"
#undef main

#include "../../tools.cpp"

void eredmenyKiir(int pontszam);

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[100];
    KIIR(eredmenyKiir(13))
    ASSERT_STREQ("Elert pontszam: 13\n", readstring(file, res));
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[100];
    KIIR(eredmenyKiir(-7))
    ASSERT_STREQ("Elert pontszam: -7\n", readstring(file, res));
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[100];
    KIIR(eredmenyKiir(5))
    ASSERT_STREQ("Elert pontszam: 5\n", readstring(file, res));
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[100];
    KIIR(eredmenyKiir(5151))
    ASSERT_STREQ("Elert pontszam: 5151\n", readstring(file, res));
}