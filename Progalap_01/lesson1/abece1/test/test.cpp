#include <gtest/gtest.h>

#define main main_0
#include "../src/abece1.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, visszateresi_ertek) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("4 1", int res = main_0(), str)
    ASSERT_EQ(res, 0);
    scanf("%*c");
}

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("a 1", main_0(), str)
    ASSERT_STREQ("Az eltolt betu: b\n", str);
    scanf("%*c");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[100];
    IO("a 5", main_0(), res)
    ASSERT_STREQ("Az eltolt betu: f\n", res);
    scanf("%*c");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[100];
    IO("q 6", main_0(), res)
    ASSERT_STREQ("Az eltolt betu: w\n", res);
    scanf("%*c");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[100];
    IO("s 5", main_0(), res)
    ASSERT_STREQ("Az eltolt betu: x\n", res);
    scanf("%*c");
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[100];
    IO("4 1", main_0(), res)
    ASSERT_STREQ("Az eltolt betu: 5\n", res);
    scanf("%*c");
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[100];
    IO("t 0", main_0(), res)
    ASSERT_STREQ("Az eltolt betu: t\n", res);
    scanf("%*c");
}
