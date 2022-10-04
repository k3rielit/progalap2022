#include <gtest/gtest.h>

#define main main_0
#include "../src/abece.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", abc('m', 3), str)
    ASSERT_STREQ(str, "mpsvy");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", abc('a', 10), str)
    ASSERT_STREQ(str, "aku");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", abc('z', 1), str)
    ASSERT_STREQ(str, "z");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", abc('y', 1), str)
    ASSERT_STREQ(str, "yz");
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", abc('y', 2), str)
    ASSERT_STREQ(str, "y");
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("", abc('c', 2), str)
    ASSERT_STREQ(str, "cegikmoqsuwy");
}