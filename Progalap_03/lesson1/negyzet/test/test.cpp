#include <gtest/gtest.h>

#define main main_0
#include "../src/negyzet.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {3, 5, 2};
    int res[] = {9, 25, 4};
    int len = 3;

    negyzetesit(t, len);
    ASSERT_ARRAY_EQ(t, res, len);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {10, 44, 21, 0, -3, 44, -1};
    int res[] = {100, 1936, 441, 0, 9, 1936, 1};
    int len = 7;

    negyzetesit(t, len);
    ASSERT_ARRAY_EQ(t, res, len);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {0};
    int res[] = {0};
    int len = 1;

    negyzetesit(t, len);
    ASSERT_ARRAY_EQ(t, res, len);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {-2, -2, -5, -8, -11, 0, -2, 4};
    int res[] = {4, 4, 25, 64, 121, 0, 4, 16};
    int len = 8;

    negyzetesit(t, len);
    ASSERT_ARRAY_EQ(t, res, len);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, -1, 4};
    int res[] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, 196, 225, 256, 289, 324, 361, 400, 1, 16};
    int len = 22;

    negyzetesit(t, len);
    ASSERT_ARRAY_EQ(t, res, len);
}
