#include <gtest/gtest.h>

#define main main_0
#include "../src/bevetel.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {10, 20, 50, 0};
    int res = 80;
    ASSERT_EQ(osszesites(t), res);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {1, 1, 1, 4, 0};
    int res = 7;
    ASSERT_EQ(osszesites(t), res);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {0};
    int res = 0;
    ASSERT_EQ(osszesites(t), res);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {500, 0};
    int res = 500;
    ASSERT_EQ(osszesites(t), res);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {-5, -2, -1, -8, 0};
    int res = 0;
    ASSERT_EQ(osszesites(t), res);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {4, 5, -4, -2, 3, 0};
    int res = 12;
    ASSERT_EQ(osszesites(t), res);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {1, -1, 1, -1, 1, -1, 0, 1000, -1000};
    int res = 3;
    ASSERT_EQ(osszesites(t), res);
}