#include <gtest/gtest.h>

#define main main_0
#include "../src/cseresznye.c"
#undef main

int cseresznyeVasarlas(int ar, int mennyiseg);

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(cseresznyeVasarlas(5, 7), 35);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(cseresznyeVasarlas(10, 4), 40);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(cseresznyeVasarlas(6000, 7), 42000);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(cseresznyeVasarlas(511, 21), 10731);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(cseresznyeVasarlas(400000000, 0), 0);
}