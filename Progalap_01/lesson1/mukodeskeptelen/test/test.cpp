#include <gtest/gtest.h>

#define main main_0
#include "../src/mukodeskeptelen.c"
#undef main

#include "../../tools.cpp"

char* makestring(int korszam, int a, int b, int c, int d) {
    char* res = (char*) malloc(sizeof(char) * 30);
    sprintf(res, "%d. kor\nTalalatok: %c %c %c %c", korszam, a ? 'I' : 'N', b ? 'I' : 'N', c ? 'I' : 'N', d ? 'I' : 'N');
    return res;
}

TEST(ForditasiHiba, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    // success
}

TEST(Mukodes, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[250];
    IO("k s s p k s s p k s s p k s s p k s s p", main_0(), res)

    char* s1 = makestring(1, 0, 0, 0, 0);
    char* s2 = makestring(2, 0, 0, 0, 0);
    char* s3 = makestring(3, 0, 0, 0, 0);
    char* s4 = makestring(4, 0, 0, 0, 0);
    char* s5 = makestring(5, 0, 0, 0, 0);

    char elvart[250]; elvart[0] = 0;
    sprintf(elvart, "Szia, kezdheted a jatekot!\n%s\n%s\n%s\n%s\n%s\n%s\n", s1, s2, s3, s4, s5, "Sajnos vesztettel!");

    free(s1); free(s2); free(s3); free(s4); free(s5);

    ASSERT_STREQ(elvart, res);
}

TEST(Mukodes, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[250];
    IO("s s s p k s s p k s s p k s s p s s s p", main_0(), res)

    char* s1 = makestring(1, 1, 0, 0, 0);
    char* s2 = makestring(2, 0, 0, 0, 0);
    char* s3 = makestring(3, 0, 0, 0, 0);
    char* s4 = makestring(4, 0, 0, 0, 0);
    char* s5 = makestring(5, 1, 0, 0, 0);

    char elvart[250]; elvart[0] = 0;
    sprintf(elvart, "Szia, kezdheted a jatekot!\n%s\n%s\n%s\n%s\n%s\n%s\n", s1, s2, s3, s4, s5, "Sajnos vesztettel!");

    free(s1); free(s2); free(s3); free(s4); free(s5);

    ASSERT_STREQ(elvart, res);
}

TEST(Mukodes, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[250];
    IO("s s s p s p s s s p k k s p s p s p s p", main_0(), res)

    char* s1 = makestring(1, 1, 0, 0, 0);
    char* s2 = makestring(2, 1, 1, 0, 0);
    char* s3 = makestring(3, 1, 1, 0, 1);
    char* s4 = makestring(4, 1, 1, 0, 0);
    char* s5 = makestring(5, 1, 1, 0, 0);

    char elvart[250]; elvart[0] = 0;
    sprintf(elvart, "Szia, kezdheted a jatekot!\n%s\n%s\n%s\n%s\n%s\n%s\n",
            s1, s2, s3, s4, s5,
            "Sajnos vesztettel!");

    free(s1); free(s2); free(s3); free(s4); free(s5);

    ASSERT_STREQ(elvart, res);
}

TEST(Mukodes, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[250];
    IO("s s s p k s s p k s s p s p z z s p z k", main_0(), res)

    char* s1 = makestring(1, 1, 0, 0, 0);
    char* s2 = makestring(2, 0, 0, 0, 0);
    char* s3 = makestring(3, 0, 0, 0, 0);
    char* s4 = makestring(4, 1, 1, 1, 0);
    char* s5 = makestring(5, 1, 1, 1, 1);

    char elvart[250]; elvart[0] = 0;
    sprintf(elvart, "Szia, kezdheted a jatekot!\n%s\n%s\n%s\n%s\n%s\n%s\n", s1, s2, s3, s4, s5, "Gratulalok, nyertel!");

    free(s1); free(s2); free(s3); free(s4); free(s5);

    ASSERT_STREQ(elvart, res);
}

TEST(Mukodes, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[250];
    IO("k s s p k s s p k s s p k k s s s p z k", main_0(), res)

    char* s1 = makestring(1, 0, 0, 0, 0);
    char* s2 = makestring(2, 0, 0, 0, 0);
    char* s3 = makestring(3, 0, 0, 0, 0);
    char* s4 = makestring(4, 0, 0, 0, 0);
    char* s5 = makestring(5, 1, 1, 1, 1);

    char elvart[250]; elvart[0] = 0;
    sprintf(elvart, "Szia, kezdheted a jatekot!\n%s\n%s\n%s\n%s\n%s\n%s\n", s1, s2, s3, s4, s5, "Gratulalok, nyertel!");

    free(s1); free(s2); free(s3); free(s4); free(s5);

    ASSERT_STREQ(elvart, res);
}

TEST(Mukodes, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[250];
    IO("s p k z s p z k", main_0(), res)

    char* s1 = makestring(1, 1, 1, 0, 0);
    char* s2 = makestring(2, 1, 1, 1, 1);

    char elvart[250]; elvart[0] = 0;
    sprintf(elvart, "Szia, kezdheted a jatekot!\n%s\n%s\n%s\n",
            s1, s2,
            "Gratulalok, nyertel!");

    free(s1); free(s2);

    ASSERT_STREQ(elvart, res);
}

TEST(Mukodes, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[250];
    IO("s p z k", main_0(), res)

    char* s1 = makestring(1, 1, 1, 1, 1);

    char elvart[250]; elvart[0] = 0;
    sprintf(elvart, "Szia, kezdheted a jatekot!\n%s\n%s\n", s1, "Gratulalok, nyertel!");

    free(s1);

    ASSERT_STREQ(elvart, res);
}

TEST(main, visszateresiErtek) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char re[250];
    IO("l l l l l l l l l l l l l l l l l l l l", int res = main_0(), re);
    ASSERT_EQ(res, 0);
}

TEST(GyozelemFuggveny, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[250];
    KIIR(gyozelem())
    readstring(file, res);
    ASSERT_STREQ("Gratulalok, nyertel!\n", res);
}

TEST(VeresegFuggveny, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[250];
    KIIR(vereseg())
    readstring(file, res);
    ASSERT_STREQ("Sajnos vesztettel!\n", res);
}

TEST(KorFuggveny, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[250];
    IO("s p z k", kor(1), res)
    ASSERT_STREQ(res, "1. kor\nTalalatok: I I I I\n");
}

TEST(KorFuggveny, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[250];
    IO("z p z k", kor(5), res)
    ASSERT_STREQ(res, "5. kor\nTalalatok: N I I I\n");
}

TEST(KorFuggveny, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    char res[250];
    IO("S P Z K", kor(421), res)
    ASSERT_STREQ(res, "421. kor\nTalalatok: N N N N\n");
}