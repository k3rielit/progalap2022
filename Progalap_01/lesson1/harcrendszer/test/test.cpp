#include <gtest/gtest.h>

#define main main_0
#include "../src/harcrendszer.c"
#undef main

TEST(EgyszeruEset, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(harcIdo(100, 20), 5);
}

TEST(EgyszeruEset, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(harcIdo(120, 20), 6);
}

TEST(EgyszeruEset, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(harcIdo(24, 4), 6);
}

TEST(BonyolultEset, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(harcIdo(101, 20), 6);
}

TEST(BonyolultEset, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(harcIdo(5, 4), 2);
}

TEST(BonyolultEset, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(harcIdo(4, 5), 1);
}

TEST(SpecialisEset, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(harcIdo(0, 20), 0);
}

TEST(SpecialisEset, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(harcIdo(20, 0), -1);
}

TEST(SpecialisEset, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(harcIdo(0, 1000), 0);
}

TEST(SpecialisEset, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(harcIdo(1, 0), -1);
}

TEST(SpecialisEset, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    ASSERT_EQ(harcIdo(0, 0), 0);
}