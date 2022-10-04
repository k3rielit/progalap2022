#include <gtest/gtest.h>

#define main main_0
#include "../src/tavolsagtartas.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(legkozelebbi(2, 3, 5))
    ASSERT_STREQ(readstring(file, str), "Az elso es a masodik van a legkozelebb egymashoz");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(legkozelebbi(10, 20, 13))
    ASSERT_STREQ(readstring(file, str), "Az elso es a harmadik van a legkozelebb egymashoz");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(legkozelebbi(10, 20, 16))
    ASSERT_STREQ(readstring(file, str), "A masodik es a harmadik van a legkozelebb egymashoz");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(legkozelebbi(-5, 0, -11))
    ASSERT_STREQ(readstring(file, str), "Az elso es a masodik van a legkozelebb egymashoz");
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(legkozelebbi(-8, -6, -11))
    ASSERT_STREQ(readstring(file, str), "Az elso es a masodik van a legkozelebb egymashoz");
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(legkozelebbi(-2, 2, 7))
    ASSERT_STREQ(readstring(file, str), "Az elso es a masodik van a legkozelebb egymashoz");
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(legkozelebbi(7, 2, -4))
    ASSERT_STREQ(readstring(file, str), "Az elso es a masodik van a legkozelebb egymashoz");
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(legkozelebbi(7, 2, -2))
    ASSERT_STREQ(readstring(file, str), "A masodik es a harmadik van a legkozelebb egymashoz");
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(legkozelebbi(0, 3, 6))
    ASSERT_STREQ(readstring(file, str), "");
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(legkozelebbi(0, 4, -4))
    ASSERT_STREQ(readstring(file, str), "");
}

TEST(Teszt, 11) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(legkozelebbi(4, 4, 6))
    ASSERT_STREQ(readstring(file, str), "Az elso es a masodik van a legkozelebb egymashoz");
}

TEST(Teszt, 12) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(legkozelebbi(7, 6, 7))
    ASSERT_STREQ(readstring(file, str), "Az elso es a harmadik van a legkozelebb egymashoz");
}

TEST(Teszt, 13) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(legkozelebbi(5, 5, 5))
    ASSERT_STREQ(readstring(file, str), "");
}