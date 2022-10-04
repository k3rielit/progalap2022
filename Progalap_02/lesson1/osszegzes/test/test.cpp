#include <gtest/gtest.h>

#define main main_0
#include "../src/osszegzes.c"
#undef main

TEST(Nullatol, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(osszeg(0, 10), 55);
}

TEST(Nullatol, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(osszeg(0, 35), 630);
}

TEST(Nullatol, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(osszeg(0, 643), 207046);
}

TEST(Nullatol, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(osszeg(0, 59542), 1772654653);
}


TEST(Pozitiv, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(osszeg(7, 10), 34);
}

TEST(Pozitiv, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(osszeg(22, 35), 399);
}

TEST(Pozitiv, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(osszeg(555, 643), 53311);
}

TEST(Pozitiv, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(osszeg(59542, 59542), 59542);
}

TEST(Vegyes, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(osszeg(-2, 10), 52);
}

TEST(Vegyes, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(osszeg(-35, 35), 0);
}

TEST(Vegyes, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(osszeg(-42412, 4241), -890414917);
}

TEST(Vegyes, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(osszeg(-52132, 81214), 1938998727);
}