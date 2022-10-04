#include <gtest/gtest.h>

#define main main_0
#include "../src/macska.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, kiiratas) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    KIIR(main_0())

    char result[100];
    fscanf(file, "%s", result);

    ASSERT_STREQ("MACSKA", result);
}

TEST(Teszt, visszateresi_ertek) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(main_0(), 0);
}
