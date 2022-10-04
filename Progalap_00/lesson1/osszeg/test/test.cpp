#include <gtest/gtest.h>

#define main main_0
#include "../src/osszeg.c"
#undef main

#include "../../tools.cpp"

TEST(Eredmeny, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("7 4", main_0(), str);
    ASSERT_STREQ(str, "11");
}

TEST(Eredmeny, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("241 4", main_0(), str);
    ASSERT_STREQ(str, "245");
}

TEST(Eredmeny, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("-3 -4", main_0(), str);
    ASSERT_STREQ(str, "-7");
}

TEST(VisszateresiErtek, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("1 1", int res = main_0(), str);
    ASSERT_EQ(res, 0);
}