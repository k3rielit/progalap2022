#include <gtest/gtest.h>

#define main main_0
#include "../src/kobszamok.c"
#undef main

#include "../../tools.cpp"

TEST(Eredmeny, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("", kob(27, 64), str)
    ASSERT_STREQ("27\n64\n", str);
}

TEST(Eredmeny, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("", kob(10, 30), str)
    ASSERT_STREQ("27\n", str);
}

TEST(Eredmeny, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("", kob(28, 63), str)
    ASSERT_STREQ("", str);
}

TEST(Eredmeny, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("", kob(1, 1001), str)
    ASSERT_STREQ("1\n8\n27\n64\n125\n216\n343\n512\n729\n1000\n", str);
}

TEST(VisszateresiErtek, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("", int res = kob(27, 64), str)
    ASSERT_EQ(91, res);
}

TEST(VisszateresiErtek, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("", int res = kob(10, 30), str)
    ASSERT_EQ(27, res);
}

TEST(VisszateresiErtek, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("", int res = kob(28, 63), str)
    ASSERT_EQ(0, res);
}

TEST(VisszateresiErtek, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[1000];
    IO("", int res = kob(1, 1001), str)
    ASSERT_EQ(3025, res);
}