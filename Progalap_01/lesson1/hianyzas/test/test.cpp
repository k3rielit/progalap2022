#include <gtest/gtest.h>

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    vector<string> errors = {
            "error: 'ertek' undeclared",
            "warning: return type of 'main' is not 'int'"};
    CHECK_COMPILER_ERROR_LIMIT("hianyzas", "hianyzas.c", errors, 2, true);
}