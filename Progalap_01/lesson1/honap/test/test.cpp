#include <gtest/gtest.h>

#define main main_0
#include "../src/honap.c"
#undef main

#include "../../tools.cpp"

TEST(HelyesHonap, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char honap[100];
    KIIR(melyikHonap(6))
    ASSERT_STREQ("junius", readstring(file, honap));
}

TEST(HelyesHonap, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char honap[100];
    KIIR(melyikHonap(1))
    ASSERT_STREQ("januar", readstring(file, honap));
}

TEST(HelyesHonap, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char honap[100];
    KIIR(melyikHonap(5))
    ASSERT_STREQ("majus", readstring(file, honap));
}

TEST(HelyesHonap, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char honap[100];
    KIIR(melyikHonap(2))
    ASSERT_STREQ("februar", readstring(file, honap));
}

TEST(HelyesHonap, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char honap[100];
    KIIR(melyikHonap(4))
    ASSERT_STREQ("aprilis", readstring(file, honap));
}

TEST(HelyesHonap, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char honap[100];
    KIIR(melyikHonap(3))
    ASSERT_STREQ("marcius", readstring(file, honap));
}

TEST(HelyesHonap, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char honap[100];
    KIIR(melyikHonap(11))
    ASSERT_STREQ("november", readstring(file, honap));
}

TEST(HelyesHonap, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char honap[100];
    KIIR(melyikHonap(12))
    ASSERT_STREQ("december", readstring(file, honap));
}

TEST(HelyesHonap, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char honap[100];
    KIIR(melyikHonap(9))
    ASSERT_STREQ("szeptember", readstring(file, honap));
}

TEST(HelyesHonap, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char honap[100];
    KIIR(melyikHonap(7))
    ASSERT_STREQ("julius", readstring(file, honap));
}

TEST(HelyesHonap, 11) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char honap[100];
    KIIR(melyikHonap(10))
    ASSERT_STREQ("oktober", readstring(file, honap));
}

TEST(HelyesHonap, 12) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char honap[100];
    KIIR(melyikHonap(8))
    ASSERT_STREQ("augusztus", readstring(file, honap));
}

TEST(HelytelenHonap, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char honap[100];
    KIIR(melyikHonap(0))
    ASSERT_STREQ("nincs ilyen honap", readstring(file, honap));
}

TEST(HelytelenHonap, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char honap[100];
    KIIR(melyikHonap(-5))
    ASSERT_STREQ("nincs ilyen honap", readstring(file, honap));
}

TEST(HelytelenHonap, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char honap[100];
    KIIR(melyikHonap(1521))
    ASSERT_STREQ("nincs ilyen honap", readstring(file, honap));
}
