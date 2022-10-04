#include <gtest/gtest.h>

#define main main_0
#include "../src/szorzat.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("5 7 2 2 0", main_0(), str)
    ASSERT_STREQ(str, "140");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("1 1 1 1 1 0", main_0(), str)
    ASSERT_STREQ(str, "1");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("100 0", main_0(), str)
    ASSERT_STREQ(str, "100");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("7 5 44 232 32 1 2 33 2 0", main_0(), str)
    ASSERT_STREQ(str, "1509150720");
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 12 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 0", main_0(), str)
    ASSERT_STREQ(str, "201326592");
}