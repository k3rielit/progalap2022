#include <gtest/gtest.h>

#define main main_0
#include "../src/osszegzes.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {4, 5};
   ASSERT_EQ(osszegzes(t, 2), 9);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {100};
    ASSERT_EQ(osszegzes(t, 1), 100);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {1, 5};
    ASSERT_EQ(osszegzes(t, 0), 0);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {1, 1, 1, 1, 1, 1, 1, 1};
    ASSERT_EQ(osszegzes(t, 8), 8);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {7, 100, 442};
    ASSERT_EQ(osszegzes(t, 3), 549);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {5, -5, 3, -3, 1000, -1000, 4000, -4000, 3, -3};
    ASSERT_EQ(osszegzes(t, 10), 0);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1};
    ASSERT_EQ(osszegzes(t, 8), 0);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {4040400, 412241, -41241, 41241, 6433, -64310};
    ASSERT_EQ(osszegzes(t, 6), 4394764);
}