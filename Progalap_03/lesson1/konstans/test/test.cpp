#include <gtest/gtest.h>
#include <string>

#define main main_0
#include "../src/konstans.c"
#undef main

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int db = 3;
    int solution = 2;

    char** szov = (char**) malloc(db * sizeof(char*));

    szov[0] = (char*) malloc(100);strcpy(szov[0], "macska");
    szov[1] = (char*) malloc(100);strcpy(szov[1], "llll");
    szov[2] = (char*) malloc(100);strcpy(szov[2], "s");

    int res = szamlalas(szov, db);
    ASSERT_EQ(res, solution);

    for (int i = 0; i < db; i++) {
        free(szov[i]);
    }

    free(szov);
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int db = 4;
    int solution = 2;

    char** szov = (char**) malloc(db * sizeof(char*));

    szov[0] = (char*) malloc(100);strcpy(szov[0], "lvknsv");
    szov[1] = (char*) malloc(100);strcpy(szov[1], "       ");
    szov[2] = (char*) malloc(100);strcpy(szov[2], "mmmm mm");
    szov[3] = (char*) malloc(100);strcpy(szov[3], "?????");

    int res = szamlalas(szov, db);
    ASSERT_EQ(res, solution);

    for (int i = 0; i < db; i++) {
        free(szov[i]);
    }

    free(szov);
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int db = 2;
    int solution = 2;

    char** szov = (char**) malloc(db * sizeof(char*));

    szov[0] = (char*) malloc(100);strcpy(szov[0], "q");
    szov[1] = (char*) malloc(100);strcpy(szov[1], "++");

    int res = szamlalas(szov, db);
    ASSERT_EQ(res, solution);

    for (int i = 0; i < db; i++) {
        free(szov[i]);
    }

    free(szov);
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int db = 4;
    int solution = 0;

    char** szov = (char**) malloc(db * sizeof(char*));

    szov[0] = (char*) malloc(100);strcpy(szov[0], "lvknsv");
    szov[1] = (char*) malloc(100);strcpy(szov[1], "????;");
    szov[2] = (char*) malloc(100);strcpy(szov[2], "ccccc aaaaa bbbbb");
    szov[3] = (char*) malloc(100);strcpy(szov[3], "alma");

    int res = szamlalas(szov, db);
    ASSERT_EQ(res, solution);

    for (int i = 0; i < db; i++) {
        free(szov[i]);
    }

    free(szov);
}

TEST(Teszt, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    int db = 5;
    int solution = 3;

    char** szov = (char**) malloc(db * sizeof(char*));

    szov[0] = (char*) malloc(100);strcpy(szov[0], " ");
    szov[1] = (char*) malloc(100);strcpy(szov[1], "");
    szov[2] = (char*) malloc(100);strcpy(szov[2], "k\0kka");
    szov[3] = (char*) malloc(100);strcpy(szov[3], "cic");
    szov[4] = (char*) malloc(100);strcpy(szov[4], "hihihihihi");

    int res = szamlalas(szov, db);
    ASSERT_EQ(res, solution);

    for (int i = 0; i < db; i++) {
        free(szov[i]);
    }

    free(szov);
}