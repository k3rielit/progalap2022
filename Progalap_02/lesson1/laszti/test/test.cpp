#include <gtest/gtest.h>

#define main main_0
#include "../src/laszti.c"
#undef main

#include "../../tools.cpp"

TEST(Eredmeny, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("iiin", main_0(), str)
    ASSERT_STREQ(str, "Sikerult? Sikerult? Sikerult? Sikerult? Ennyit sikerult dekazni: 3\n");
}

TEST(Eredmeny, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("iin", main_0(), str)
    ASSERT_STREQ(str, "Sikerult? Sikerult? Sikerult? Ennyit sikerult dekazni: 2\n");
}

TEST(Eredmeny, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("iiiiiiiiiiiiiiiiiiiiiiiiiiiin", main_0(), str)
    ASSERT_STREQ(str, "Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Sikerult? Ennyit sikerult dekazni: 28\n");
}

TEST(Eredmeny_rossz_input, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("isvnjsdvbhn", main_0(), str)
    ASSERT_STREQ(str, "Sikerult? Sikerult? Ennyit sikerult dekazni: 1\n");
}

TEST(Eredmeny, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("n", main_0(), str)
    ASSERT_STREQ(str, "Sikerult? Ennyit sikerult dekazni: 0\n");
}

TEST(Visszateresi_ertek, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("n", int res = main_0(), str)
    ASSERT_EQ(res, 0);
}

TEST(Visszateresi_ertek, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("iiin", int res = main_0(), str)
    ASSERT_EQ(res, 0);
}