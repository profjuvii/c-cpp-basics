# Control Flow Statements and Loops
In this section, we explore two fundamental aspects of C programming: **Control Flow Statements** and **Loops**.

## Control Flow Statements
This C code demonstrates the use of control flow statements such as `if-else`, the ternary operator, and the `switch` statement. These constructs allow you to make decisions within your programs based on conditions.

### Code
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
    int y = (x > 5) ? 1 : 0;
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
1. **`if-else` Block:**
   - The program first declares an integer variable `x` and initializes it to 10.
   - **`if (x == 5)`** – Checks if `x` is equal to 5. If true, the program prints `"x = 5"`.
   - **`else if (x > 5)`** – If the first condition is false, this checks if `x` is greater than 5. If true, it prints `"x > 5"`.
   - **`else`** – If neither of the above conditions is true, the program executes this block and prints `"x < 5"`.

   This structure allows the program to take different actions depending on the value of `x`.

2. **Ternary Operator:**
   - The ternary operator is a shorthand way to write simple `if-else` statements.
   - **`y = (x > 5) ? 1 : 0;`** – This line checks if `x` is greater than 5. If true, `y` is assigned the value `1`; if false, `y` is assigned the value `0`.
   - The result is printed using `printf()`.

   The ternary operator is a concise way to perform conditional assignments.

3. **Switch Statement:**
   - The `switch` statement is used to execute one block of code from multiple choices, depending on the value of a variable.
   - The variable `operator` is set to `'+'`, and the program will execute the corresponding `case` block:
     - **`case '+':`** – Adds `num1` and `num2` if `operator` is `'+'`.
     - **`case '-':`** – Subtracts `num2` from `num1` if `operator` is `'-'`.
     - **`case '*':`** – Multiplies `num1` by `num2` if `operator` is `'*'`.
     - **`case '/':`** – Divides `num1` by `num2` if `operator` is `'/'`.
     - **`default:`** – This block is executed if none of the `case` values match `operator`. Here, it prints an error message and returns `1` to indicate an issue.

## Loops
This C code demonstrates the use of different loop constructs (`for`, `while`, and `do-while` loops) to iterate through a set of operations. Loops are essential for repeating tasks efficiently in a program.

### Code
```c
#include <stdio.h>

int main() {
    int size = 5;
    int result = 0;

    // For loop (from 0 to size - 1)
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
1. **For Loop (from 0 to size - 1):**
   - **`for (int i = 0; i < size; ++i)`** – This loop starts with `i = 0` and increments `i` by 1 after each iteration until `i` is no longer less than `size` (which is 5).
   - **`result += i * i;`** – Within each iteration, the square of `i` (`i * i`) is added to the `result` variable.
   - **`printf("Iteration %d\tResult: %d\n", i, result);`** – The iteration number and the current `result` are printed.
   - This loop calculates the sum of the squares of the numbers from `0` to `4` and displays the intermediate results.

2. **While Loop (i is greater than or equal to 0):**
   - **`int i = 8;`** – The variable `i` is initialized to `8`.
   - **`while (i >= 0)`** – This loop continues as long as `i` is greater than or equal to `0`.
   - **`printf("Index: %d\n", i);`** – The current value of `i` is printed.
   - **`i--;`** – The value of `i` is decremented by 1 after each iteration.
   - The loop will print the numbers from `8` down to `0`.

3. **Do-While Loop (from 2 to size - 1):**
   - **`i = 2;`** – The variable `i` is initialized to `2`.
   - **`do { ... } while (i < size);`** – This loop first executes the block of code, then checks the condition (`i < size`). The loop continues as long as the condition is true.
   - **`printf("Index: %d\n", i);`** – The current value of `i` is printed.
   - **`i++;`** – The value of `i` is incremented by 1 after each iteration.
   - The loop will print the values of `i` starting from `2` and continuing until `i` is no longer less than `5`.
