#include <gtest/gtest.h>

#define main main_0
#include "../src/faktorialis.c"
#undef main


TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(faktorialis(1), 1);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(faktorialis(2), 2);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(faktorialis(3), 6);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(faktorialis(5), 120);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(faktorialis(8), 40320);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(faktorialis(11), 39916800);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(faktorialis(12), 479001600);
}

TEST(Teszt, Specialis_eset) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(faktorialis(0), 1);
}
