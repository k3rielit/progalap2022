#include <gtest/gtest.h>

#define main main_0
#include "../src/tisza.c"
#undef main

#include "../../tools.cpp"


TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("5 x---- x--x- xx--- -xx-x _____", main_0(), str)
    ASSERT_STREQ(str, "vigyazat!\nok!\nvigyazat!\nvigyazat!\n");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("2 x- -x -x -- -- -- x- __", main_0(), str)
    ASSERT_STREQ(str, "vigyazat!\nvigyazat!\nok!\nok!\nok!\nok!\nvigyazat!\n");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("3 x-- x-x x-- --- --x xx- x-x -x- x-- ___", main_0(), str)
    ASSERT_STREQ(str, "vigyazat!\nok!\nok!\nok!\nok!\nvigyazat!\nvigyazat!\nvigyazat!\nvigyazat!\n");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("4 ---x -xxx xx-- x-x- x-x- xxx- ---- x-xx ____", main_0(), str)
    ASSERT_STREQ(str, "ok!\nok!\nvigyazat!\nvigyazat!\nok!\nvigyazat!\nok!\nvigyazat!\n");
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("6 x----- xxx-xx -xxxx- -x-xxx -xxx-- -xxxxx ______", main_0(), str)
    ASSERT_STREQ(str, "vigyazat!\nvigyazat!\nvigyazat!\nvigyazat!\nvigyazat!\nok!\n");
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("12 xxx--x-x-xxx -xxxxx-xxxxx -xxxxxxxxxxx xxxxx-xxxxxx x-x-xxxx-xxx xxx-xxxxxxxx xxx-xxxxxxxx ____________", main_0(), str)
    ASSERT_STREQ(str, "vigyazat!\nvigyazat!\nok!\nvigyazat!\nvigyazat!\nok!\nok!\n");
}

TEST(Visszateresi_ertek, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("12 xxx--x-x-xxx -xxxxx-xxxxx -xxxxxxxxxxx xxxxx-xxxxxx x-x-xxxx-xxx xxx-xxxxxxxx xxx-xxxxxxxx ____________", int res = main_0(), str)
    ASSERT_EQ(res, 0);
}