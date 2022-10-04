#include <gtest/gtest.h>

#define main main_0
#include "../src/szamjegy.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "macska";
    ASSERT_EQ(szamjegyek(szoveg), 0);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "2526";
    ASSERT_EQ(szamjegyek(szoveg), 1);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "100900";
    ASSERT_EQ(szamjegyek(szoveg), 1);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "4122m";
    ASSERT_EQ(szamjegyek(szoveg), 0);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "m1512";
    ASSERT_EQ(szamjegyek(szoveg), 0);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "124 421";
    ASSERT_EQ(szamjegyek(szoveg), 0);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "532.32";
    ASSERT_EQ(szamjegyek(szoveg), 0);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "";
    ASSERT_EQ(szamjegyek(szoveg), 1);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "374373913846871237697823140598429812756095056095690634643534";
    ASSERT_EQ(szamjegyek(szoveg), 1);
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "123523789/346534";
    ASSERT_EQ(szamjegyek(szoveg), 0);
}