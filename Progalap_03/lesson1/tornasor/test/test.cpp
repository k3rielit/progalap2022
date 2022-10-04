#include <gtest/gtest.h>

#define main main_0
#include "../src/tornasor.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int emberek[] = {100, 150, 140, 155, 160};
    int db = 5;
    int eredmeny = 150;

    ASSERT_EQ(torna(emberek, db), eredmeny);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int emberek[] = {155, 156, 157, 154, 153, 158, 158};
    int db = 7;
    int eredmeny = 156;

    ASSERT_EQ(torna(emberek, db), eredmeny);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int emberek[] = {100, 101, 105, 103};
    int db = 4;
    int eredmeny = 102;

    ASSERT_EQ(torna(emberek, db), eredmeny);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int emberek[] = {157, 150, 166, 170};
    int db = 4;
    int eredmeny = 161;

    ASSERT_EQ(torna(emberek, db), eredmeny);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int emberek[] = {100, 202};
    int db = 2;
    int eredmeny = 151;

    ASSERT_EQ(torna(emberek, db), eredmeny);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int emberek[] = {135};
    int db = 1;
    int eredmeny = 135;

    ASSERT_EQ(torna(emberek, db), eredmeny);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int emberek[] = {101, 105, 103, 104, 103, 103, 105};
    int db = 7;
    int eredmeny = 103;

    ASSERT_EQ(torna(emberek, db), eredmeny);
}
