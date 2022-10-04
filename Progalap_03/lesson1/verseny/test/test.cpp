#include <gtest/gtest.h>

#define main main_0
#include "../src/verseny.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t1[] = {10, 12};
    int t2[] = {11};
    int db1 = 2;
    int db2 = 1;
    int res = 0;
    ASSERT_EQ(eredmeny(t1, t2, db1, db2), res);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t1[] = {4, 5, 1, 6, 4};
    int t2[] = {7, 4, 3, 2, 7};
    int db1 = 5;
    int db2 = 5;
    int res = 2;
    ASSERT_EQ(eredmeny(t1, t2, db1, db2), res);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t1[] = {10, 13};
    int t2[] = {11};
    int db1 = 2;
    int db2 = 1;
    int res = 1;
    ASSERT_EQ(eredmeny(t1, t2, db1, db2), res);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t1[] = {29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29};
    int t2[] = {30};
    int db1 = 157;
    int db2 = 1;
    int res = 2;
    ASSERT_EQ(eredmeny(t1, t2, db1, db2), res);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t1[] = {5, 6, 3, 6, 4, 3, 2};
    int t2[] = {2, 5, 5};
    int db1 = 7;
    int db2 = 3;
    int res = 1;
    ASSERT_EQ(eredmeny(t1, t2, db1, db2), res);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t1[] = {5, 6, 3, 6, 4, 3, 2};
    int t2[] = {2, 5, 5, 3, 6, 4, 4, 4, 5};
    int db1 = 7;
    int db2 = 9;
    int res = 2;
    ASSERT_EQ(eredmeny(t1, t2, db1, db2), res);
}