#include <gtest/gtest.h>

#define main main_0
#include "../src/macska.c"
#undef main

#include "../../tools.cpp"

TEST(Eredmeny, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", main_0(), str);
    ASSERT_STREQ(str, "MACSKA");
}

TEST(VisszateresiErtek, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int res = main_0();
    ASSERT_EQ(res, 0);
}