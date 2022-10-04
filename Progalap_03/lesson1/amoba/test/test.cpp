#include <gtest/gtest.h>

#define main main_0
#include "../src/amoba.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "XXXOXOBOB";
    ASSERT_EQ(tictactoe(str), 1);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "OXOBBBOOO";
    ASSERT_EQ(tictactoe(str), 2);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "XOOXOXXBB";
    ASSERT_EQ(tictactoe(str), 1);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "BOXBOBXOX";
    ASSERT_EQ(tictactoe(str), 2);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "XXOOXXXOO";
    ASSERT_EQ(tictactoe(str), 0);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "OOBXXXOBB";
    ASSERT_EQ(tictactoe(str), 1);
}

TEST(Teszt, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "XXBOOOXBB";
    ASSERT_EQ(tictactoe(str), 2);
}

TEST(Teszt, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "XOOOXBOBX";
    ASSERT_EQ(tictactoe(str), 1);
}

TEST(Teszt, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "OBOOXOXXO";
    ASSERT_EQ(tictactoe(str), 2);
}

TEST(Teszt, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "XOOOXXOXO";
    ASSERT_EQ(tictactoe(str), 0);
}

TEST(Teszt, 11) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "XOOBOXOXX";
    ASSERT_EQ(tictactoe(str), 2);
}

TEST(Teszt, 12) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "OXOOXOXOX";
    ASSERT_EQ(tictactoe(str), 0);
}

TEST(Teszt, 13) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[] = "XXXOOBBBB";
    ASSERT_EQ(tictactoe(str), 1);
}