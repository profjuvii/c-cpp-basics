#ifndef _DISCRIMINANT_H
#define _DISCRIMINANT_H

// Structure definition for representing a quadratic equation
struct quadratic_equation{
    float a;        // Coefficient of x^2
    float b;        // Coefficient of x
    float c;        // Constant term
};


// Structure definition for storing roots of a quadratic equation
struct discriminant{
    float root1;    // First root
    float root2;    // Second root
};


/**
 * Function declaration to find the roots of a quadratic equation
 * @param equation: a quadratic equation represented by the quadratic_equation structure
 * @return discriminant: a structure containing the roots of the quadratic equation
 */
struct discriminant find_roots(struct quadratic_equation equation);

#endif
