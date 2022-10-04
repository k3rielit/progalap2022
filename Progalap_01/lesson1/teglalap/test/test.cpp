#include <gtest/gtest.h>

#define main main_0
#include "../src/teglalap.c"
#undef main

#include "../../tools.cpp"

double oldaltBeolvas();
double kerulet(double a, double b);
double terulet(double a, double b);
void kiiras(double ker, double ter);
int main();

TEST(OldaltBeolvas, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    BEOLVAS("5", double res = oldaltBeolvas())
    ASSERT_NEAR(res, 5, 0.00001f);
}

TEST(OldaltBeolvas, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    BEOLVAS("53.2113", double res = oldaltBeolvas())
    ASSERT_NEAR(res, 53.2113, 0.00001f);
}

TEST(OldaltBeolvas, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    BEOLVAS("5.52", double res = oldaltBeolvas())
    ASSERT_NEAR(res, 5.52, 0.00001f);
}

TEST(Kerulet, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(kerulet(3, 5), 16, 0.00001f);
}

TEST(Kerulet, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(kerulet(4.4, 7.4), 23.6, 0.00001f);
}

TEST(Kerulet, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(kerulet(2, 0.53), 5.06, 0.00001f);
}

TEST(Terulet, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(terulet(3, 5), 15, 0.00001f);
}

TEST(Terulet, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(terulet(24.4, 7.4), 180.56, 0.00001f);
}

TEST(Terulet, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_NEAR(terulet(3, 0.33), 0.99, 0.00001f);
}

TEST(Kiiras, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(kiiras(5.5, 2.2))
    ASSERT_STREQ(readstring(file, str), "A teglalap kerulete: 5.50\nA teglalap terulete: 2.20\n");
}

TEST(Kiiras, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(kiiras(5, 2.1211))
    ASSERT_STREQ(readstring(file, str), "A teglalap kerulete: 5.00\nA teglalap terulete: 2.12\n");
}

TEST(Kiiras, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    KIIR(kiiras(7.454, 7.455))
    ASSERT_STREQ(readstring(file, str), "A teglalap kerulete: 7.45\nA teglalap terulete: 7.46\n");
}

TEST(main, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("3 4", main_0(), str)
    ASSERT_STREQ(str, "A teglalap kerulete: 14.00\nA teglalap terulete: 12.00\n");
}

TEST(main, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("2.5 2.22", main_0(), str)
    ASSERT_STREQ(str, "A teglalap kerulete: 9.44\nA teglalap terulete: 5.55\n");
}

TEST(main, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("4.211 64.23238", main_0(), str)
    ASSERT_STREQ(str, "A teglalap kerulete: 136.89\nA teglalap terulete: 270.48\n");
}

TEST(main, visszateresi_ertek) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[100];
    IO("1 1", int res = main_0(), str)
    ASSERT_EQ(res, 0);
}