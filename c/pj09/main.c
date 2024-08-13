#include <stdio.h>

#include "discriminant.h"


int main(){
    struct quadratic_equation equation = { .a = 4, .b = 6, .c = 0 };
    struct discriminant result = find_roots(equation);
    printf("x1 = %.2f\tx2 = %.2f\n", result.root1, result.root2);

    return 0;
}
