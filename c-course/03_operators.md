# Operators
This C code demonstrates various fundamental operations such as arithmetic calculations, assignment, increment/decrement, comparison, and logical operations. These operations are the building blocks of many C programs.

## Code
```c
#include <stdio.h>  // Include standard I/O library for printf()

int main(){
    int a = 10;     // First value
    int b = 5;      // Second value
    
    // Arithmetic operators
    int sum = a + b;            // Calculate the sum of 'a' and 'b'
    int difference = a - b;     // Calculate the difference between 'a' and 'b'
    int product = a * b;        // Calculate the product of 'a' and 'b'
    int quotient = a / b;       // Calculate the quotient of 'a' divided by 'b'
    int remainder = a % b;      // Calculate the remainder of 'a' divided by 'b'

    // Print results of arithmetic operations
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n\n", remainder);

    // Assignment operator
    int x = a;  // Assign the value of 'a' to 'x'
    int y = -b; // Assign the negative value of 'b' to 'y'
    printf("x = %d\n", x);
    printf("y = %d\n\n", y);

    // Increment and decrement operators
    a = x = 2;  // Set 'a' and 'x' to 2
    b = y = -2; // Set 'b' and 'y' to -2

    // Print results of increment and decrement operations
    printf("a = %d\n", ++a);    // Prefix increment: increment 'a' before printing
    printf("x = %d\n", x++);    // Postfix increment: print 'x' then increment it
    printf("x = %d\n", x);      // Print the updated value of 'x'
    printf("b = %d\n", --b);    // Prefix decrement: decrement 'b' before printing
    printf("y = %d\n", y--);    // Postfix decrement: print 'y' then decrement it
    printf("y = %d\n\n", y);    // Print the updated value of 'y'

    // Comparison operators
    printf("x == y: %d\n", x == y); // Check if 'x' is equal to 'y'
    printf("x != y: %d\n", x != y); // Check if 'x' is not equal to 'y'
    printf("x > y: %d\n", x > y);   // Check if 'x' is greater than 'y'
    printf("x < y: %d\n", x < y);   // Check if 'x' is less than 'y'
    printf("x >= y: %d\n", x >= y); // Check if 'x' is greater than or equal to 'y'
    printf("x <= y: %d\n\n", x <= y); // Check if 'x' is less than or equal to 'y'

    // Logical operators
    int result1 = (a > 0) && (b < 20);  // Logical AND: true if both conditions are true
    int result2 = (a > 0) || (b > 20);  // Logical OR: true if at least one condition is true
    int result3 = a != b;               // Logical NOT: true if 'a' is not equal to 'b'

    // Print results of logical operations
    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);
    printf("Result 3: %d\n", result3);

    return 0; // Return 0 to indicate successful completion
}
```

## Description
1. **`#include <stdio.h>`** – This directive includes the Standard Input/Output library, allowing the use of `printf()` to display results.

2. **Variables `a` and `b`** – The code starts by declaring two integer variables, `a` and `b`, and initializes them with values `10` and `5`, respectively. These values will be used in the subsequent operations.

3. **Arithmetic Operations:**
   - **`sum = a + b;`** – Adds `a` and `b` (10 + 5) and stores the result in `sum`.
   - **`difference = a - b;`** – Subtracts `b` from `a` (10 - 5) and stores the result in `difference`.
   - **`product = a * b;`** – Multiplies `a` by `b` (10 * 5) and stores the result in `product`.
   - **`quotient = a / b;`** – Divides `a` by `b` (10 / 5) and stores the result in `quotient`.
   - **`remainder = a % b;`** – Calculates the remainder of `a` divided by `b` (10 % 5) and stores the result in `remainder`.

   These operations illustrate basic arithmetic in C, and their results are printed using `printf()`.

4. **Assignment Operations:**
   - **`x = a;`** – Assigns the value of `a` (which is 10) to the variable `x`.
   - **`y = -b;`** – Assigns the negative value of `b` (-5) to the variable `y`.

   These demonstrate how values can be assigned to variables.

5. **Increment/Decrement Operations:**
   - **Prefix Increment `++a`** – Increases `a` by 1 before using its value.
   - **Postfix Increment `x++`** – Uses the value of `x` first, then increments it.
   - **Prefix Decrement `--b`** – Decreases `b` by 1 before using its value.
   - **Postfix Decrement `y--`** – Uses the value of `y` first, then decrements it.

   These are commonly used shortcuts in loops and conditional operations.

6. **Comparison Operations:**
   - **`x == y`** – Checks if `x` is equal to `y`.
   - **`x != y`** – Checks if `x` is not equal to `y`.
   - **`x > y`** – Checks if `x` is greater than `y`.
   - **`x < y`** – Checks if `x` is less than `y`.
   - **`x >= y`** – Checks if `x` is greater than or equal to `y`.
   - **`x <= y`** – Checks if `x` is less than or equal to `y`.

   These are used to compare two values and return `1` (true) or `0` (false).

7. **Logical Operations:**
   - **`(a > 0) && (b < 20)`** – Logical AND: true if both `a > 0` and `b < 20` are true.
   - **`(a > 0) || (b > 20)`** – Logical OR: true if either `a > 0` or `b > 20` is true.
   - **`a != b`** – Logical NOT: true if `a` is not equal to `b`.

   These logical operators are used to evaluate multiple conditions simultaneously.
