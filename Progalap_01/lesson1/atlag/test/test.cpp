#include <gtest/gtest.h>

#define main main_0
#include "../src/atlag.c"
#undef main

int atlag(int elso, int masodik, int harmadik);

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(atlag(3, 4, 5), 4);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(atlag(3, 5, 5), 4);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(atlag(5, 4, 5), 4);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(atlag(5, 5, 5), 5);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(atlag(1, 1, 3), 1);
}
