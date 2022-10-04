#include <gtest/gtest.h>

#define main main_0
#include "../src/betustatisztika.c"
#undef main

#include "../../tools.cpp"

void statisztika(char szoveg[], int gyakorisagok[]);

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char input[] = "macska";
    int res[] = {
            2, // a
            0, // b
            1, // c
            0, // d
            0, // e
            0, // f
            0, // g
            0, // h
            0, // i
            0, // j
            1, // k
            0, // l
            1, // m
            0, // n
            0, // o
            0, // p
            0, // q
            0, // r
            1, // s
            0, // t
            0, // u
            0, // v
            0, // w
            0, // x
            0, // y
            0, // z
    };

    int mo[] = {10, 30, 40, 0, 0, 0, 0, 0, 0, -1, -1, -1, 5, 3, 8, 4, 3, 2, 3, 4, 6, 7, 7, 5, 4, 2, 4, 5, 3, 10000};
    statisztika(input, mo);
    ASSERT_ARRAY_EQ(res, mo, 26);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char input[] = "MACSKA";
    int res[] = {
            2, // a
            0, // b
            1, // c
            0, // d
            0, // e
            0, // f
            0, // g
            0, // h
            0, // i
            0, // j
            1, // k
            0, // l
            1, // m
            0, // n
            0, // o
            0, // p
            0, // q
            0, // r
            1, // s
            0, // t
            0, // u
            0, // v
            0, // w
            0, // x
            0, // y
            0, // z
    };

    int mo[] = {10, 30, 40, 0, 0, 0, 0, 0, 0, -1, -1, -1, 5, 3, 8, 4, 3, 2, 3, 4, 6, 7, 7, 5, 4, 2, 4, 5, 3, 10000};
    statisztika(input, mo);
    ASSERT_ARRAY_EQ(res, mo, 26);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char input[] = "MaCsKamAcSkA";
    int res[] = {
            4, // a
            0, // b
            2, // c
            0, // d
            0, // e
            0, // f
            0, // g
            0, // h
            0, // i
            0, // j
            2, // k
            0, // l
            2, // m
            0, // n
            0, // o
            0, // p
            0, // q
            0, // r
            2, // s
            0, // t
            0, // u
            0, // v
            0, // w
            0, // x
            0, // y
            0, // z
    };

    int mo[] = {-1, 30, 40, 0, 0, 0, 0, 0, 0, -1, -1, -1, 5, 3, 8, 4, 3, 2, 3, 4, 6, 7, 7, 5, 4, 2, 4, 5, 3, 10000};
    statisztika(input, mo);
    ASSERT_ARRAY_EQ(res, mo, 26);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char input[] = "Leszallt a repulo";
    int res[] = {
            2, // a
            0, // b
            0, // c
            0, // d
            2, // e
            0, // f
            0, // g
            0, // h
            0, // i
            0, // j
            0, // k
            4, // l
            0, // m
            0, // n
            1, // o
            1, // p
            0, // q
            1, // r
            1, // s
            1, // t
            1, // u
            0, // v
            0, // w
            0, // x
            0, // y
            1, // z
    };

    int mo[] = {1, 30, 40, 0, 0, 0, 0, 0, 0, -1, -1, -1, 5, 3, 8, 4, 3, 2, 3, 4, 6, 7, 7, 5, 4, 2, 4, 5, 3, 10000};
    statisztika(input, mo);
    ASSERT_ARRAY_EQ(res, mo, 26);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char input[] = "xyzXYZBBDEjkkkkkj";
    int res[] = {
            0, // a
            2, // b
            0, // c
            1, // d
            1, // e
            0, // f
            0, // g
            0, // h
            0, // i
            2, // j
            5, // k
            0, // l
            0, // m
            0, // n
            0, // o
            0, // p
            0, // q
            0, // r
            0, // s
            0, // t
            0, // u
            0, // v
            0, // w
            2, // x
            2, // y
            2, // z
    };

    int mo[] = {2, 30, 40, 0, 0, 0, 0, 0, 0, -1, -1, -1, 5, 3, 8, 4, 3, 2, 3, 4, 6, 7, 7, 5, 4, 2, 4, 5, 3, 10000};
    statisztika(input, mo);
    ASSERT_ARRAY_EQ(res, mo, 26);
}

TEST(Teszt, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char input[] = "wow uwu 123 +++ @@ owo pog H8G L0L defdef??? iiiii111iii! iji. vts -     # rawrcica ()(){}{} ___n? aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaavaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaavaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int res[] = {
            103, // a
            0, // b
            2, // c
            2, // d
            2, // e
            2, // f
            2, // g
            1, // h
            11, // i
            1, // j
            0, // k
            2, // l
            0, // m
            1, // n
            4, // o
            1, // p
            0, // q
            2, // r
            1, // s
            1, // t
            2, // u
            3, // v
            5, // w
            0, // x
            0, // y
            0, // z
    };

    int mo[] = {0, 1, 40, 0, 0, 0, 0, 0, 0, -1, -1, -1, 5, 3, 8, 4, 3, 2, 3, 4, 6, 7, 7, 5, 4, 2, 4, 5, 3, 10000};
    statisztika(input, mo);
    ASSERT_ARRAY_EQ(res, mo, 26);
}