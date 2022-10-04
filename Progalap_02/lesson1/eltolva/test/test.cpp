#include <gtest/gtest.h>

#define main main_0
#include "../src/eltolva.c"
#undef main

TEST(Egyszeru, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(eltolas('a', 2), 'c');
}

TEST(Egyszeru, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(eltolas('a', 20), 'u');
}

TEST(Egyszeru, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(eltolas('s', 3), 'v');
}

TEST(Egyszeru, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(eltolas('t', 0), 't');
}

TEST(Egyszeru, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(eltolas('w', 3), 'z');
}

TEST(Osszetett, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(eltolas('a', 26), 'a');
}

TEST(Osszetett, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(eltolas('k', 26), 'k');
}

TEST(Osszetett, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(eltolas('z', 1), 'a');
}

TEST(Osszetett, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(eltolas('s', 183), 't');
}

TEST(Osszetett, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(eltolas('k', 1862885749), 'h');
}