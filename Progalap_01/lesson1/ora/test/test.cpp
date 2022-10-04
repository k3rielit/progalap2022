#include <gtest/gtest.h>

#define main main_0
#include "../src/ora.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(ora(120), 2, 0.00001f);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(ora(0), 0, 0.00001f);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(ora(90), 1.5, 0.00001f);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(ora(522), 8.7, 0.00001f);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(ora(53252), 887 + 1.6/3, 0.00001f);
}