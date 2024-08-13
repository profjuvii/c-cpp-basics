# Variables and Operations
This section covers fundamental concepts in C programming related to variables, their types, and basic operations. It provides insights into how to declare and initialize variables, perform arithmetic and logical operations, and use operators for various programming tasks.

## Variable Types and Output
```c
#include <stdio.h>      // Header file for input/output functions like printf()
#include <stdbool.h>    // Header file for Boolean type

int main() {
    // Variable declarations and initializations
    int num = 10;               // Integer variable (size depends on the system: 2 bytes on 16-bit, 4 bytes on 32-bit or 64-bit)
    float f_num = 23.2;         // Floating-point variable (4 bytes)
    double lf_num = 100.1;      // Double precision floating-point variable (8 bytes)
    char letter = 'A';          // Character variable (1 byte)
    bool valid = true;          // Boolean variable (1 byte)

    // Output variables using printf()
    printf("%d\n", num);        // Output integer variable
    printf("%f\n", f_num);      // Output float variable
    printf("%lf\n", lf_num);    // Output double variable
    printf("%c\n", letter);     // Output character variable
    printf("%d\n", valid);      // Output boolean variable (true/false as 1/0)

    // Output the ASCII value of the character in different formats
    printf("Decimal format: %d\n", (int)letter);    // Decimal format of ASCII value
    printf("Hexadecimal format: %x\n", letter);     // Hexadecimal format of ASCII value
    printf("Octal format: %o\n", letter);           // Octal format of ASCII value

    return 0;  // Return statement indicating successful completion
}
```

### Description
**1. Includes and Declarations:**
   - Includes the standard libraries for I/O operations (`stdio.h`) and Boolean types (`stdbool.h`).

**2. Variable Initialization:**
   - Defines and initializes variables of different types: `int`, `float`, `double`, `char`, and `bool`.

**3. Output:**
   - Uses `printf()` to display the values of variables in various formats.
   - Demonstrates how to display the ASCII value of a character in decimal, hexadecimal, and octal formats.

**4. Return Statement:**
   - Ends the `main()` function with a return value of `0`, indicating successful execution.

## Operators and Output
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

### Description
**1. Includes and Declarations:**
   - Includes the standard library for I/O operations (`stdio.h`).

**2. Arithmetic Operations:**
   - Performs basic arithmetic operations including addition, subtraction, multiplication, division, and modulus. Prints the results of these operations.

**3. Assignment Operator:**
   - Demonstrates variable assignment and prints the values of assigned variables.

**4. Increment/Decrement Operators:**
   - Illustrates the use of prefix and postfix increment/decrement operators and displays the results.

**5. Comparison Operators:**
   - Compares variables using equality, inequality, greater than, less than, and their combinations. Prints the comparison results.

**6. Logical Operators:**
   - Evaluates logical expressions using AND (`&&`), OR (`||`), and NOT (`!`) operators and prints the results.
