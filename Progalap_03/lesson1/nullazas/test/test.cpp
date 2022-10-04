#include <gtest/gtest.h>

#define main main_0
#include "../src/nullazas.c"
#undef main

#include "../../tools.cpp"

void nullazo(int tomb[], int db);

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {-1, 3000, 2013, 0, 313, 4242, 5000};
    int res[] = {0, 0, 0, 0, 0, 0, 5000};
    int db = 6;
    nullazo(t, db);
    ASSERT_ARRAY_EQ(t, res, db+1)
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {-1, 3000, 2013, 0, 313, 4242};
    int res[] = {0, 3000, 2013, 0, 313, 4242};
    int db = 1;
    nullazo(t, db);
    ASSERT_ARRAY_EQ(t, res, db+3)
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {0, 0, 0, 0, 1};
    int res[] = {0, 0, 0, 0, 1, 0};
    int db = 4;
    nullazo(t, db);
    ASSERT_ARRAY_EQ(t, res, db+1)
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {5, 5, 3, 4, 4, 6, 4, 4, 3, 2, 1, 30};
    int res[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30};
    int db = 11;
    nullazo(t, db);
    ASSERT_ARRAY_EQ(t, res, db+1)
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {-1, 3000, 2013, 0, 313, 4242};
    int res[] = {-1, 3000, 2013, 0, 313, 4242};
    int db = 0;
    nullazo(t, db);
    ASSERT_ARRAY_EQ(t, res, db+4)
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int t[] = {50, 300, 200};
    int res[] = {0, 0, 200};
    int db = 2;
    nullazo(t, db);
    ASSERT_ARRAY_EQ(t, res, db+1)
}
