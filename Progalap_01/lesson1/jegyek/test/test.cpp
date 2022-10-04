#include <gtest/gtest.h>

#define main main_0
#include "../src/jegyek.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("4.04", main_0(), str);
    ASSERT_STREQ(str, "4.04");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("4.1", main_0(), str);
    ASSERT_STREQ(str, "4.10");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("2", main_0(), str);
    ASSERT_STREQ(str, "2.00");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("3.972", main_0(), str);
    ASSERT_STREQ(str, "3.97");
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("3.976", main_0(), str);
    ASSERT_STREQ(str, "3.98");
}