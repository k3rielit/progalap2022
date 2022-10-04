#include <gtest/gtest.h>

#define main main_0
#include "../src/szamologep.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int eredmeny;
    char str[100];
    IO("5 7", main_0(), str);
    sscanf(str, "%d", &eredmeny);
    ASSERT_EQ(eredmeny, 12);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int eredmeny;
    char str[100];

    IO("-4 13", main_0(), str)
    sscanf(str, "%d", &eredmeny);
    ASSERT_EQ(eredmeny, 9);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int eredmeny;
    char str[100];

    IO("-5 -7", main_0(), str)
    sscanf(str, "%d", &eredmeny);
    ASSERT_EQ(eredmeny, -12);
}

TEST(Teszt, visszateresi_ertek) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];

    IO("5 5", int eredmeny = main_0(), str)
    ASSERT_EQ(eredmeny, 0);
}