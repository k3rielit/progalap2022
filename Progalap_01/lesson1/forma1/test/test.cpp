#include <gtest/gtest.h>

#define main main_0
#include "../src/forma1.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(futamhossz(67.44f, 73, 17.4f, 2), 82.632f, 0.00001f);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(futamhossz(94, 49, 23.3f, 1), 77.155f, 0.00001f);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(futamhossz(83.1224f, 56, 19.354f, 1), 233.71042f/3, 0.00001f);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(futamhossz(110.54f, 47, 28.5f, 0), 259.769f/3, 0.00001f);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(futamhossz(78.11f, 78, 14.31f, 4), 102.497f, 0.00001f);
}
