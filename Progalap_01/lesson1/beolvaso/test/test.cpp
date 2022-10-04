#include <gtest/gtest.h>

#define main main_0
#include "../src/beolvaso.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    BEOLVAS("8", int res = olvasas())
    ASSERT_EQ(8, res);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    BEOLVAS("414", int res = olvasas())
    ASSERT_EQ(414, res);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    BEOLVAS("-62", int res = olvasas())
    ASSERT_EQ(-62, res);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    BEOLVAS("0", int res = olvasas())
    ASSERT_EQ(0, res);
}