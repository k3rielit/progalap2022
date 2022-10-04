#include <gtest/gtest.h>

#define main main_0
#include "../src/meggyszedes.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("5 7 5 1 3 4 -1", int res = meggyszedes(), str)
    ASSERT_EQ(res, 11);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 -1", int res = meggyszedes(), str)
    ASSERT_EQ(res, 0);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("7 -1", int res = meggyszedes(), str)
    ASSERT_EQ(res, 0);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("8 45 33 2 55 3 2 11 2 2 2 2 4 2 1 2 0", int res = meggyszedes(), str)
    ASSERT_EQ(res, 210);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("7 2 1 1 100 1 -14221131", int res = meggyszedes(), str)
    ASSERT_EQ(res, 204);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("10000000 10000001 10000000 10000001 10000000 10000001 -420", int res = meggyszedes(), str)
    ASSERT_EQ(res, 5);
}