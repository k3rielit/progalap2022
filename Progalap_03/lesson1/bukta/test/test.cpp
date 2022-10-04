#include <gtest/gtest.h>

#define main main_0
#include "../src/bukta.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {39, 39, 35, 0, 30, -1};
    int res = 5;
    ASSERT_EQ(eredmenyek(t), res);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {52, 57, 90, 100, -1};
    int res = 0;
    ASSERT_EQ(eredmenyek(t), res);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {45, 49, 41, 40, 39, -1};
    int res = 1;
    ASSERT_EQ(eredmenyek(t), res);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {100, 100, 100, 100, 0, 0, 0, 1, 5, 40, -1};
    int res = 5;
    ASSERT_EQ(eredmenyek(t), res);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 100, 1, -1};
    int res = 21;
    ASSERT_EQ(eredmenyek(t), res);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {40, 40, 40, 40, 40, 40, 40, 40, -1};
    int res = 0;
    ASSERT_EQ(eredmenyek(t), res);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {-1};
    int res = 0;
    ASSERT_EQ(eredmenyek(t), res);
}
