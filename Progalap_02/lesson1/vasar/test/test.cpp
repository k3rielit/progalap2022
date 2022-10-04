#include <gtest/gtest.h>

#define main main_0
#include "../src/vasar.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[2000];
    IO("1", main_0(), str);
    ASSERT_STREQ(str, "Mennyi szenat tegyek a bagyujaba? Betettem\n");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[2000];
    IO("5", main_0(), str);
    ASSERT_STREQ(str, "Mennyi szenat tegyek a bagyujaba? Betettem\nBetettem\nBetettem\nBetettem\nBetettem\n");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[2000];
    IO("11", main_0(), str);
    ASSERT_STREQ(str, "Mennyi szenat tegyek a bagyujaba? Betettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\n");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[2000];
    IO("25", main_0(), str);
    ASSERT_STREQ(str, "Mennyi szenat tegyek a bagyujaba? Betettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\n");
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[2000];
    IO("0", main_0(), str);
    ASSERT_STREQ(str, "Mennyi szenat tegyek a bagyujaba? ");
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[2000];
    IO("87", main_0(), str);
    ASSERT_STREQ(str, "Mennyi szenat tegyek a bagyujaba? Betettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\nBetettem\n");
}