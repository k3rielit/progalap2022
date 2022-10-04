#include <gtest/gtest.h>

#define main main_0
#include "../src/csere.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "macska";
    csere(szoveg, 'm', 'a');
    ASSERT_STREQ(szoveg, "amcskm");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "macska";
    csere(szoveg, 'a', 'm');
    ASSERT_STREQ(szoveg, "amcskm");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "macska";
    csere(szoveg, 'b', 'd');
    ASSERT_STREQ(szoveg, "macska");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "aaaaaaaaaa";
    csere(szoveg, 'a', 'b');
    ASSERT_STREQ(szoveg, "bbbbbbbbbb");
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "egy ketto harom";
    csere(szoveg, ' ', '_');
    ASSERT_STREQ(szoveg, "egy_ketto_harom");
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "15 kiscica az udvaron setal";
    csere(szoveg, '1', '5');
    ASSERT_STREQ(szoveg, "51 kiscica az udvaron setal");
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "NO!";
    csere(szoveg, 'N', 'O');
    ASSERT_STREQ(szoveg, "ON!");
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "NO!";
    csere(szoveg, 'n', 'o');
    ASSERT_STREQ(szoveg, "NO!");
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "aabbaabbaabbbbaa";
    csere(szoveg, 'a', 'b');
    ASSERT_STREQ(szoveg, "bbaabbaabbaaaabb");
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "abababcabab";
    csere(szoveg, 'b', 'd');
    ASSERT_STREQ(szoveg, "adadadcadad");
}
