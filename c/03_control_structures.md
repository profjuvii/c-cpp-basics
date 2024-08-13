# Control Flow and Loops

## Overview
This section explores fundamental control flow structures and loops in C programming. It includes examples of conditional statements (`if-else`, ternary operator), branching with the `switch` statement, and iterative constructs (`for`, `while`, `do-while` loops). Understanding these constructs is essential for controlling the flow of execution and performing repetitive tasks in a program.

## Conditional Statements and Switch
```c
#include <stdio.h>

int main() {
    // If-else statements
    int x = 10;

    if (x == 5) {
        printf("x = 5\n");
    } else if (x > 5) {
        printf("x > 5\n");
    } else {
        printf("x < 5\n");
    }

    // Ternary operator
    x = 10;
    int y = (x > 5) ? 1 : 0; // type name = condition ? value1 : value2;
    printf("y = %d\n", y);

    // Switch statement
    char operator = '+';
    int num1 = 10, num2 = 5;
    int result = 0;

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Error: Unknown operator.\n");
            return 1;
    }
    printf("Result: %d\n", result);

    return 0;
}
```

### Description
**1. If-Else Statements:**
   - Demonstrates conditional branching using `if-else` statements. The program checks if `x` is equal to 5, greater than 5, or less than 5, and prints the corresponding message.

**2. Ternary Operator:**
   - Shows the use of the ternary operator for concise conditional assignment. The expression `(x > 5) ? 1 : 0` assigns `1` to `y` if `x` is greater than 5, otherwise assigns `0`.

**3. Switch Statement:**
   - Illustrates the `switch` statement for branching based on the value of a variable (`operator`). The program performs arithmetic operations based on the `operator` character and prints the result. If the operator is unknown, it prints an error message.

## Loops
```c
#include <stdio.h>

int main() {
    int size = 5;
    int result = 0;

    // For loop (from 0 to (size - 1)
    for (int i = 0; i < size; ++i) {
        result += i * i;
        printf("Iteration %d\tResult: %d\n", i, result);
    }
    printf("\n");

    // While loop (i is greater than or equal to 0)
    int i = 8;
    while (i >= 0) {
        printf("Index: %d\n", i);
        i--;
    }
    printf("\n");

    // Do-while loop (from 2 to size - 1)
    i = 2;
    do {
        printf("Index: %d\n", i);
        i++;
    } while (i < size);

    return 0;
}
```

### Description

**1. For Loop:**
   - Demonstrates the `for` loop for iterating from `0` to `size - 1`. It calculates the sum of squares of indices and prints the result for each iteration.

**2. While Loop:**
   - Shows the `while` loop, which continues executing as long as the condition (`i >= 0`) is true. It prints the index value and decrements `i` until it is less than 0.

**3. Do-While Loop:**
   - Illustrates the `do-while` loop, which ensures that the loop body is executed at least once before checking the condition (`i < size`). It prints the index values starting from `2` up to `size - 1`.
