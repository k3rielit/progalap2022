#include <gtest/gtest.h>

#define main main_0
#include "../src/betu.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(kedvencBetu, 'C');
}