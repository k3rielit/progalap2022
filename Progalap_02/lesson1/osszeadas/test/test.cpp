#include <gtest/gtest.h>

#include "../../tools.cpp"

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    std::vector<string> errors {
        "error: lvalue required as left operand of assignment",
        "error: expected ';'",
        "error: 'osszeg' undeclared",
        "error: expected '=', ',', ';', 'asm' or '__attribute__'",
        "warning: format '%f' expects argument of type 'float *', but argument 2 has type 'int *'",
    };

    CHECK_COMPILER_ERROR_LIMIT("osszeadas", "osszeadas.c", errors, 3, 1)
}