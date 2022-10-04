#include <gtest/gtest.h>

#define main main_0
#include "../src/hegy.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", ebreszto(60), str)
    ASSERT_STREQ(str, "Janosnak 15 ora 0 percre kell az ebresztot beallitania.\n");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", ebreszto(120), str)
    ASSERT_STREQ(str, "Janosnak 14 ora 0 percre kell az ebresztot beallitania.\n");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", ebreszto(240), str)
    ASSERT_STREQ(str, "Janosnak 12 ora 0 percre kell az ebresztot beallitania.\n");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", ebreszto(360), str)
    ASSERT_STREQ(str, "Janosnak 10 ora 0 percre kell az ebresztot beallitania.\n");
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", ebreszto(30), str)
    ASSERT_STREQ(str, "Janosnak 15 ora 30 percre kell az ebresztot beallitania.\n");
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", ebreszto(1), str)
    ASSERT_STREQ(str, "Janosnak 15 ora 59 percre kell az ebresztot beallitania.\n");
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", ebreszto(412), str)
    ASSERT_STREQ(str, "Janosnak 9 ora 8 percre kell az ebresztot beallitania.\n");
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", ebreszto(124), str)
    ASSERT_STREQ(str, "Janosnak 13 ora 56 percre kell az ebresztot beallitania.\n");
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", ebreszto(611), str)
    ASSERT_STREQ(str, "Janosnak 5 ora 49 percre kell az ebresztot beallitania.\n");
}

TEST(HosszuUt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", ebreszto(1111), str)
    ASSERT_STREQ(str, "Janosnak 21 ora 29 percre kell az ebresztot beallitania.\n");
}

TEST(HosszuUt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", ebreszto(2100000014), str)
    ASSERT_STREQ(str, "Janosnak 7 ora 46 percre kell az ebresztot beallitania.\n");
}