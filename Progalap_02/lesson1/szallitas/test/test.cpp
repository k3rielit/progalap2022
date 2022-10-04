#include <gtest/gtest.h>

#define main main_0
#include "../src/szallitas.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("5 3 6 3 2 1", main_0(), str)
    ASSERT_STREQ(str, "Hany csoki all rendelkezesre?\nA csokik ossztomege: 15\n");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("1 400", main_0(), str)
    ASSERT_STREQ(str, "Hany csoki all rendelkezesre?\nA csokik ossztomege: 400\n");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("3 2 1 1", main_0(), str)
    ASSERT_STREQ(str, "Hany csoki all rendelkezesre?\nA csokik ossztomege: 4\n");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("10 1 2 3 4 5 6 7 8 8 11", main_0(), str)
    ASSERT_STREQ(str, "Hany csoki all rendelkezesre?\nA csokik ossztomege: 55\n");
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("0", main_0(), str)
    ASSERT_STREQ(str, "Hany csoki all rendelkezesre?\nA csokik ossztomege: 0\n");
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("2 1 100000", main_0(), str)
    ASSERT_STREQ(str, "Hany csoki all rendelkezesre?\nA csokik ossztomege: 100001\n");
}
