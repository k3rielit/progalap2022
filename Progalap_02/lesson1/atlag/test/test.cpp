#include <gtest/gtest.h>

#define main main_0
#include "../src/atlag.c"
#undef main

#include "../../tools.cpp"

TEST(Eredmeny, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("5 5 5 5 5 0", main_0(), str)
    ASSERT_STREQ(str, "5.00");
}

TEST(Eredmeny, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("5 4 3 2 1 3 4 2 1 5 0", main_0(), str)
    ASSERT_STREQ(str, "3.00");
}

TEST(Eredmeny, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("1 1 1 2 0", main_0(), str)
    ASSERT_STREQ(str, "1.25");
}

TEST(Eredmeny, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("4 5 2 2 1 2 2 3 4 0", main_0(), str)
    ASSERT_STREQ(str, "2.78");
}

TEST(Eredmeny, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("5 3 2 2 3 3 3 3 2 2 1 1 4 2 3 2 1 2 4 5 5 5 1 2 5 3 2 1 2 3 3 2 1 2 5 5 5 2 1 2 2 2 5 5 5 4 2 1 2 2 5 3 3 4 4 5 5 3 3 2 2 1 2 3 0", main_0(), str)
    ASSERT_STREQ(str, "2.89");
}

TEST(Eredmeny, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("1 1 1 1 1 1 5 5 5 0", main_0(), str)
    ASSERT_STREQ(str, "2.33");
}

TEST(Eredmeny, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("4 0", main_0(), str)
    ASSERT_STREQ(str, "4.00");
}

TEST(VisszateresiErtek, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("4 4 0", int res = main_0(), str)
    ASSERT_EQ(res, 0);
}