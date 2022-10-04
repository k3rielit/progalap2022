#include <gtest/gtest.h>

#include "../src/oszthatosag.c"

#include "../../tools.cpp"

TEST(Eredmeny, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int szamok[] = {1, 2, 3};
    int meret = 3;
    int eredmeny = 1;

    int res = oszthatosag(szamok, meret);
    ASSERT_EQ(res, eredmeny);
}

TEST(Eredmeny, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int szamok[] = {4, 4, 2, 10, 16, -2, 6, 4, 0};
    int meret = 9;
    int eredmeny = 9;

    int res = oszthatosag(szamok, meret);
    ASSERT_EQ(res, eredmeny);
}

TEST(Eredmeny, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int szamok[] = {5, 2, 7, 4, 40, 5623, 643, 21, 312};
    int meret = 9;
    int eredmeny = 4;

    int res = oszthatosag(szamok, meret);
    ASSERT_EQ(res, eredmeny);
}

TEST(Eredmeny, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int szamok[] = {-1, -1, -1, -1, -1, -1};
    int meret = 6;
    int eredmeny = 0;

    int res = oszthatosag(szamok, meret);
    ASSERT_EQ(res, eredmeny);
}

TEST(Eredmeny, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int szamok[] = {412, 512, 512, 310, 335, 85683, 85, 352, 7547, -153, -7347, -634};
    int meret = 12;
    int eredmeny = 6;

    int res = oszthatosag(szamok, meret);
    ASSERT_EQ(res, eredmeny);
}

TEST(Eredmeny, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int szamok[] = {3, 3, 3};
    int meret = 3;
    int eredmeny = 0;

    int res = oszthatosag(szamok, meret);
    ASSERT_EQ(res, eredmeny);
}

TEST(Eredmeny, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int szamok[] = {8};
    int meret = 1;
    int eredmeny = 1;

    int res = oszthatosag(szamok, meret);
    ASSERT_EQ(res, eredmeny);
}

TEST(Eredmeny, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int szamok[] = {3};
    int meret = 1;
    int eredmeny = 0;

    int res = oszthatosag(szamok, meret);
    ASSERT_EQ(res, eredmeny);
}

TEST(Meret, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    checkFileSize("oszthatosag", "oszthatosag.c", 83);
}