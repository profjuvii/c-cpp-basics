#include <stdio.h>
#include <math.h>

#include "discriminant.h"


struct discriminant find_roots(struct quadratic_equation equation){
    struct discriminant result = { .root1 = NAN, .root2 = NAN };

    if(equation.a == 0 || equation.b == 0){
        printf("It is not a quadratic equation.\n");
        return result;
    }
    
    float d = pow(equation.b, 2) - (4 * equation.a * equation.c);

    if(d > 0){
        printf("D > 0, the equation has two distinct real roots.\n");
        result.root1 = (-equation.b + sqrt(d)) / (2 * equation.a);
        result.root2 = (-equation.b - sqrt(d)) / (2 * equation.a);
        
    } else if(d == 0){
        printf("D = 0, the equation has one real root.\n");
        result.root1 = -equation.b / (2 * equation.a);
        result.root2 = NAN;
    } else{
        printf("D < 0, the equation has no real roots.\n");
    }
    
    return result;
}
