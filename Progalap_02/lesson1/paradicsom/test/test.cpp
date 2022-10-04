#include <gtest/gtest.h>

#define main main_0
#include "../src/paradicsom.c"
#undef main

#include "../../tools.cpp"

TEST(Eredmeny, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("p", main_0(), str)
    ASSERT_STREQ(str, "Milyen szinu a paradicsom? (p / s)\nEl kell hagyni Jozsit!\n");
}

TEST(Eredmeny, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("s", main_0(), str)
    ASSERT_STREQ(str, "Milyen szinu a paradicsom? (p / s)\n");
}

TEST(Eredmeny, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("e", main_0(), str)
    ASSERT_STREQ(str, "Milyen szinu a paradicsom? (p / s)\n");
}

TEST(Visszateresi_ertek, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("p", int res = main_0(), str)
    ASSERT_EQ(res, 0);
}

TEST(Visszateresi_ertek, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("s", int res = main_0(), str)
    ASSERT_EQ(res, 0);
}

TEST(Visszateresi_ertek, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("z", int res = main_0(), str)
    ASSERT_EQ(res, 0);
}