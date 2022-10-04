#include <gtest/gtest.h>

#define main main_0
#include "../src/kalkulus.c"
#undef main

#include <cmath>

double integral(double (*fuggveny)(double), int min, int max, int beosztasokSzama);

double fgv1(double pos) {
    return pos;
}

double fgv2(double pos) {
    return (pos >= 0 ? pos : -pos);
}

double fgv3(double pos) {
    return pos * pos;
}

double fgv4(double pos) {
    return sqrt(pos);
}

int ok(double result, double excepted) {
    if (result - excepted < 0.001 && result - excepted > -0.001) {
        return 1;
    }

    return 0;
}

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ok(integral(fgv1, 0, 10, 10), 50), 1);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ok(integral(fgv1, 0, 10, 2), 50), 1);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ok(integral(fgv1, 5, 10, 10), 37.5), 1);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ok(integral(fgv1, -10, 10, 3), 0), 1);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ok(integral(fgv2, 0, 10, 10), 50), 1);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ok(integral(fgv2, 0, 10, 2), 50), 1);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ok(integral(fgv2, 5, 10, 10), 37.5), 1);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ok(integral(fgv2, -10, 10, 2), 100), 1);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ok(integral(fgv2, -10, 10, 3), 111.111111), 1);
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ok(integral(fgv3, 0, 10, 2), 375), 1);
}

TEST(Teszt, 11) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ok(integral(fgv3, 0, 10, 8), 335.9375), 1);
}

TEST(Teszt, 12) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ok(integral(fgv3, -4, 10, 14), 357), 1);
}

TEST(Teszt, 13) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ok(integral(fgv3, -4, 10, 9), 360.312757201646), 1);
}

TEST(Teszt, 14) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ok(integral(fgv3, -4, -2, 3), 18.8148148148148), 1);
}

TEST(Teszt, 15) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ok(integral(fgv4, 0, 10, 10), 20.8871393561199), 1);
}

TEST(Teszt, 16) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ok(integral(fgv4, 0, 10, 1), 15.8113883008419), 1);
}

TEST(Teszt, 17) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ok(integral(fgv4, 10, 412, 13), 5544.17577901684), 1);
}

TEST(Teszt, 18) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(ok(integral(fgv4, 10, 412, 2), 5277.42975774358), 1);
}
