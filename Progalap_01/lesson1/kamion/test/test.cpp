#include <gtest/gtest.h>

#define main main_0
#include "../src/kamion.c"
#undef main

TEST(Teszt, kisKamion) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(kisKamion(), 3);
}

TEST(Teszt, kozepesKamion) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(kozepesKamion(), 7);
}

TEST(Teszt, nagyKamion) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(nagyKamion(), 10);
}