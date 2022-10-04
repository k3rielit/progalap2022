#include <gtest/gtest.h>

#define main main_0
#include "../src/sorozat.c"
#undef main

#include "../../tools.cpp"

void szamolas(int start, int end, int diff);

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("", szamolas(10, 20, 3), str)
    ASSERT_STREQ("10 13 16 19 ", str);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("", szamolas(-5, 5, 4), str)
    ASSERT_STREQ("-5 -1 3 ", str);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("", szamolas(30, 50, 2), str)
    ASSERT_STREQ("30 32 34 36 38 40 42 44 46 48 50 ", str);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("", szamolas(4, 4, 5), str)
    ASSERT_STREQ("4 ", str);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("", szamolas(5, 14, 10), str)
    ASSERT_STREQ("5 ", str);
}