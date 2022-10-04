#include <gtest/gtest.h>

#define main main_0
#include "../src/bonyolult.c"
#undef main

#include "../../tools.cpp"

void egyszerusit(int szamlalo, int nevezo);

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", egyszerusit(10, 20), str)
    ASSERT_STREQ(str, "1/2");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", egyszerusit(11, 20), str)
    ASSERT_STREQ(str, "11/20");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", egyszerusit(4, 5), str)
    ASSERT_STREQ(str, "4/5");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", egyszerusit(4, 4), str)
    ASSERT_STREQ(str, "1");
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", egyszerusit(4, 2), str)
    ASSERT_STREQ(str, "2");
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", egyszerusit(7, 4388041), str)
    ASSERT_STREQ(str, "1/626863");
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", egyszerusit(8, 44), str)
    ASSERT_STREQ(str, "2/11");
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", egyszerusit(21415455, 5233215), str)
    ASSERT_STREQ(str, "1427697/348881");
}