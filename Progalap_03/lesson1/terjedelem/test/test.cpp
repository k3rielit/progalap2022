#include <gtest/gtest.h>

#define main main_0
#include "../src/terjedelem.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {120, 125, 130, 135};
    int db = 4;
    int res = 15;

    ASSERT_EQ(kulonbseg(t, db), res);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {150, 149, 151, 148, 151, 151, 151};
    int db = 7;
    int res = 3;

    ASSERT_EQ(kulonbseg(t, db), res);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {170};
    int db = 1;
    int res = 0;

    ASSERT_EQ(kulonbseg(t, db), res);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {120, 155};
    int db = 2;
    int res = 35;

    ASSERT_EQ(kulonbseg(t, db), res);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {99, 105, 101, 140, 122, 125, 102, 151, 121, 111, 116, 116, 114, 117};
    int db = 14;
    int res = 52;

    ASSERT_EQ(kulonbseg(t, db), res);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {155, 155, 155, 155, 155, 155, 155, 155, 155, 155, 155, 100, 200};
    int db = 11;
    int res = 0;

    ASSERT_EQ(kulonbseg(t, db), res);
}
