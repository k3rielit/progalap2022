#include <gtest/gtest.h>

#define main main_0
#include "../src/alma.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    almaAr = 5;
    ASSERT_EQ(almaAr, 5);

    almaAr = 7;
    ASSERT_EQ(almaAr, 7);
}