#include <gtest/gtest.h>

#define main main_0
#include "../src/karaktervalasztas.c"
#undef main

#include "../../tools.cpp"

TEST(Kiirt_ertek, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[150];
    IO("1", fajvalasztas(), str)
    ASSERT_STREQ(str, "Melyik fajt szeretned valasztani?\n  1: elf\n  2: torpe\n  3: ember\nEzt a fajt valasztottad: elf\n");
}

TEST(Kiirt_ertek, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[150];
    IO("2", fajvalasztas(), str)
    ASSERT_STREQ(str, "Melyik fajt szeretned valasztani?\n  1: elf\n  2: torpe\n  3: ember\nEzt a fajt valasztottad: torpe\n");
}

TEST(Kiirt_ertek, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[150];
    IO("3", fajvalasztas(), str)
    ASSERT_STREQ(str, "Melyik fajt szeretned valasztani?\n  1: elf\n  2: torpe\n  3: ember\nEzt a fajt valasztottad: ember\n");
}

TEST(Kiirt_ertek, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[150];
    IO("4 2", fajvalasztas(), str)
    ASSERT_STREQ(str, "Melyik fajt szeretned valasztani?\n  1: elf\n  2: torpe\n  3: ember\nEzt a fajt valasztottad: torpe\n");
}

TEST(Kiirt_ertek, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[150];
    IO("-1 -3 0 5 4 4 7 13131121 -22 1", fajvalasztas(), str)
    ASSERT_STREQ(str, "Melyik fajt szeretned valasztani?\n  1: elf\n  2: torpe\n  3: ember\nEzt a fajt valasztottad: elf\n");
}

TEST(Visszateresi_ertek, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[150];
    IO("1", int res = fajvalasztas(), str)
    ASSERT_EQ(res, 1);
}

TEST(Visszateresi_ertek, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[150];
    IO("2", int res = fajvalasztas(), str)
    ASSERT_EQ(res, 2);
}

TEST(Visszateresi_ertek, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[150];
    IO("3", int res = fajvalasztas(), str)
    ASSERT_EQ(res, 3);
}

TEST(Visszateresi_ertek, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[150];
    IO("4 2", int res = fajvalasztas(), str)
    ASSERT_EQ(res, 2);
}

TEST(Visszateresi_ertek, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char str[150];
    IO("-1 -3 0 5 4 4 7 13131121 -22 1", int res = fajvalasztas(), str)
    ASSERT_EQ(res, 1);
}