#include <gtest/gtest.h>

#define main main_0
#include "../src/szen.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("5 4 6 2", main_0(), str)
    ASSERT_STREQ(str, "vege a munkanak, kitermelt szen: 17.00 tonna!\n");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("5.5 4.4 0.2 6", main_0(), str)
    ASSERT_STREQ(str, "vege a munkanak, kitermelt szen: 16.10 tonna!\n");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("1.1 5.31 1.7 4.8 3.2", main_0(), str)
    ASSERT_STREQ(str, "vege a munkanak, kitermelt szen: 16.11 tonna!\n");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("30", main_0(), str)
    ASSERT_STREQ(str, "vege a munkanak, kitermelt szen: 30.00 tonna!\n");
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("15.9 0.05 0.051", main_0(), str)
    ASSERT_STREQ(str, "vege a munkanak, kitermelt szen: 16.00 tonna!\n");
}