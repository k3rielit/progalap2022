#include <gtest/gtest.h>

#define main main_0
#include "../src/statisztika.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("4 7 3 0", main_0(), str)
    ASSERT_STREQ(str, "A minimum: 3\nA maximum: 7\n");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("7 7 7 7 0", main_0(), str)
    ASSERT_STREQ(str, "A minimum: 7\nA maximum: 7\n");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("55 0", main_0(), str)
    ASSERT_STREQ(str, "A minimum: 55\nA maximum: 55\n");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("1 2 3 4 5 6 7 8 0", main_0(), str)
    ASSERT_STREQ(str, "A minimum: 1\nA maximum: 8\n");
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("4 6 4 5 42000000 0", main_0(), str)
    ASSERT_STREQ(str, "A minimum: 4\nA maximum: 42000000\n");
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("2147483646 2147483643 2147483644 0", main_0(), str)
    ASSERT_STREQ(str, "A minimum: 2147483643\nA maximum: 2147483646\n");
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("7 4 3 2 0", main_0(), str)
    ASSERT_STREQ(str, "A minimum: 2\nA maximum: 7\n");
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("7 4 3 2 5 0", main_0(), str)
    ASSERT_STREQ(str, "A minimum: 2\nA maximum: 7\n");
}

TEST(Visszateresi_ertek, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("7 4 3 2 0", int res = main_0(), str)
    ASSERT_EQ(res, 0);
}