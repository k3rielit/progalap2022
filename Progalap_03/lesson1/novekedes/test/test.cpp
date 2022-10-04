#include <gtest/gtest.h>

#define main main_0
#include "../src/novekedes.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ('A', megnovel('a'));
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ('S', megnovel('s'));
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ('Q', megnovel('q'));
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ('7', megnovel('7'));
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ('@', megnovel('@'));
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ('K', megnovel('K'));
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ('.', megnovel('.'));
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ('!', megnovel('!'));
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ('Z', megnovel('Z'));
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ('`', megnovel('`'));
}

TEST(Teszt, 11) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ('{', megnovel('{'));
}

TEST(Teszt, 12) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(' ', megnovel(' '));
}

TEST(Teszt, 13) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ('L', megnovel('l'));
}

TEST(Teszt, 14) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ('[', megnovel('['));
}

TEST(Teszt, 15) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ('Y', megnovel('y'));
}
