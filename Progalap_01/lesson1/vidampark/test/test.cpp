#include <gtest/gtest.h>

#define main main_0
#include "../src/vidampark.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(hullamvasut(50, 160))
    ASSERT_STREQ(readstring(file, str), "Mehet");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(hullamvasut(17, 151))
    ASSERT_STREQ(readstring(file, str), "Mehet");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(hullamvasut(16, 151))
    ASSERT_STREQ(readstring(file, str), "Mehet");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(hullamvasut(17, 150))
    ASSERT_STREQ(readstring(file, str), "Nem mehet");
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(hullamvasut(30, 147))
    ASSERT_STREQ(readstring(file, str), "Nem mehet");
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(hullamvasut(10, 180))
    ASSERT_STREQ(readstring(file, str), "Nem mehet");
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(hullamvasut(18, 151))
    ASSERT_STREQ(readstring(file, str), "Mehet");
}
