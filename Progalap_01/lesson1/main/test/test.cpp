#include <gtest/gtest.h>

#define main main_0
#include "../src/main.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(main_0(), 0);
}