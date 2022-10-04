#include <gtest/gtest.h>

#define main main_0
#include "../src/forditva.c"
#undef main

void kodol(char str[]);
void dekodol(char str[]);

TEST(Kodol, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "itt a macska";
    char eredmeny[] = "tti a akscam";
    kodol(szoveg);
    ASSERT_STREQ(szoveg, eredmeny);
}

TEST(Kodol, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "a kiscica bejott a konyhaba";
    char eredmeny[] = "a acicsik ttojeb a abahynok";
    kodol(szoveg);
    ASSERT_STREQ(szoveg, eredmeny);
}

TEST(Kodol, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "itt a macska okos homloka";
    char eredmeny[] = "tti a akscam soko akolmoh";
    kodol(szoveg);
    ASSERT_STREQ(szoveg, eredmeny);
}

TEST(Kodol, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "tavoktatas";
    char eredmeny[] = "satatkovat";
    kodol(szoveg);
    ASSERT_STREQ(szoveg, eredmeny);
}

TEST(Kodol, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "abc";
    char eredmeny[] = "cba";
    kodol(szoveg);
    ASSERT_STREQ(szoveg, eredmeny);
}

TEST(Dekodol, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "itt a macska";
    char eredmeny[] = "tti a akscam";
    dekodol(eredmeny);
    ASSERT_STREQ(szoveg, eredmeny);
}

TEST(Dekodol, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "a kiscica bejott a konyhaba";
    char eredmeny[] = "a acicsik ttojeb a abahynok";
    dekodol(eredmeny);
    ASSERT_STREQ(szoveg, eredmeny);
}

TEST(Dekodol, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "itt a macska okos homloka";
    char eredmeny[] = "tti a akscam soko akolmoh";
    dekodol(eredmeny);
    ASSERT_STREQ(szoveg, eredmeny);
}

TEST(Dekodol, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "tavoktatas";
    char eredmeny[] = "satatkovat";
    dekodol(eredmeny);
    ASSERT_STREQ(szoveg, eredmeny);
}

TEST(Dekodol, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "abc";
    char eredmeny[] = "cba";
    dekodol(eredmeny);
    ASSERT_STREQ(szoveg, eredmeny);
}