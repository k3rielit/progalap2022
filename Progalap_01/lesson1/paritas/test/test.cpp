#include <gtest/gtest.h>

#define main main_0
#include "../src/paritas.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[100];
    IO("2", main_0(), res)
    ASSERT_STREQ("Milyen szamot dobtal?\nNyertel!", res);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[100];
    IO("23312", main_0(), res)
    ASSERT_STREQ("Milyen szamot dobtal?\nNyertel!", res);
}

TEST(Test, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[100];
    IO("1", main_0(), res)
    ASSERT_STREQ("Milyen szamot dobtal?\nVesztettel!", res);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[100];
    IO("41", main_0(), res)
    ASSERT_STREQ("Milyen szamot dobtal?\nVesztettel!", res);
}