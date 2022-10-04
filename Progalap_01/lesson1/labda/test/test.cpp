#include <gtest/gtest.h>

#define main main_0
#include "../src/labda.c"
#undef main

void fail() {
    FAIL();
}

void testEqual(double a, double b) {
    double diff = a > b ? a - b : b - a;

    if (diff > 0.001) {
        fail();
        printf("Expected equality of these values:\n");
        printf("  res\n");
        printf("    Which is: %lf\n", a);
        printf("  %lf\n", b);
    }
}


TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    testEqual(utkozes(10, 20), 1.7213);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    testEqual(utkozes(5, 10), 1.170677);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    testEqual(utkozes(20, 10), 1.7213);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    testEqual(utkozes(10, 5), 1.170677);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    testEqual(utkozes(30, 5), 2.234928);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    testEqual(utkozes(5, 40), 2.767054);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    testEqual(utkozes(10, 80), 3.918704);
}
