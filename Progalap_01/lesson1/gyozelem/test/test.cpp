#include <gtest/gtest.h>

#define main main_0
#include "../src/gyozelem.c"
#undef main

#include "../../tools.cpp"

TEST(Teszt, visszateresi_ertek) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(main_0(), 0);
}

TEST(Teszt, sorvege_jel) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    KIIR(main_0())
    char megoldas[100];
    int index = 0;
    do {
        fscanf(file, "%c", &megoldas[index]);
        index++;
    } while (!feof(file));

    megoldas[index-1] = 0;

    ASSERT_STREQ("Gratulalok, gyoztel!\n", megoldas);
}