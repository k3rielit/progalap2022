#include <gtest/gtest.h>

#define main main_0
#include "../src/szamolas.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "macska";
    char betu = 'a';
    int res = 2;

    ASSERT_EQ(betuszamitas(str, betu), res);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "zzzzzzzzzzz";
    char betu = 'z';
    int res = 11;

    ASSERT_EQ(betuszamitas(str, betu), res);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "alma";
    char betu = 'l';
    int res = 1;

    ASSERT_EQ(betuszamitas(str, betu), res);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "macska";
    char betu = 'z';
    int res = 0;

    ASSERT_EQ(betuszamitas(str, betu), res);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "";
    char betu = 's';
    int res = 0;

    ASSERT_EQ(betuszamitas(str, betu), res);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "AAAAAAA";
    char betu = 'a';
    int res = 7;

    ASSERT_EQ(betuszamitas(str, betu), res);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "AAAAAbbbBAAa";
    char betu = 'a';
    int res = 8;

    ASSERT_EQ(betuszamitas(str, betu), res);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "A macska felmaszott a fara. Famacska lett.";
    char betu = 'f';
    int res = 3;

    ASSERT_EQ(betuszamitas(str, betu), res);
}