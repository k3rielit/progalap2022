#include <gtest/gtest.h>

#define main main_0
#include "../src/hossz.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str1[] = "Macska";
    ASSERT_EQ(hossz(str1), 6);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str2[] = "Macska 4";
    ASSERT_EQ(hossz(str2), 8);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str3[] = "a";
    ASSERT_EQ(hossz(str3), 1);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str4[] = "";
    ASSERT_EQ(hossz(str4), 0);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str5[] = "egy ketto harom";
    ASSERT_EQ(hossz(str5), 15);
}