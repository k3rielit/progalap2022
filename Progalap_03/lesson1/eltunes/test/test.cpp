#include <gtest/gtest.h>

#define main main_0
#include "../src/eltunes.c"
#undef main

void maganhangzotlanito(char szoveg[]);

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "macska";
    char res[] = "mcsk";
    maganhangzotlanito(szoveg);
    ASSERT_STREQ(szoveg, res);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "elefantok utaznak a vizen";
    char res[] = "lfntk tznk  vzn";
    maganhangzotlanito(szoveg);
    ASSERT_STREQ(szoveg, res);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "itt ez a konyv, nem is dobtam ki";
    char res[] = "tt z  knyv, nm s dbtm k";
    maganhangzotlanito(szoveg);
    ASSERT_STREQ(szoveg, res);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "@#?vagy nem?#&#&#424aaa???.:";
    char res[] = "@#?vgy nm?#&#&#424???.:";
    maganhangzotlanito(szoveg);
    ASSERT_STREQ(szoveg, res);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "klknlnvbjkc";
    char res[] = "klknlnvbjkc";
    maganhangzotlanito(szoveg);
    ASSERT_STREQ(szoveg, res);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "aaeououueioiuuuauuueoiaueoiaoeuu";
    char res[] = "";
    maganhangzotlanito(szoveg);
    ASSERT_STREQ(szoveg, res);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char szoveg[] = "aoi ouooiuea aoueaoueioae ouiaeuo iou aeoiou aeiouo aeiou";
    char res[] = "       ";
    maganhangzotlanito(szoveg);
    ASSERT_STREQ(szoveg, res);
}