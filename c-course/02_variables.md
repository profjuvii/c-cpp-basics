# Variables and Data Types
This C code demonstrates the declaration, initialization, and output of various data types, as well as how to print different formats using `printf()`.

## Code
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

## Description
1. **`#include <stdio.h>`** – This includes the Standard Input/Output library, which provides functions like `printf()` for printing output to the console.

2. **`#include <stdbool.h>`** – This includes the library for the Boolean data type in C. It allows the use of `true` and `false` as Boolean values.

3. **Variable Declarations and Initializations:**
   - **`int num = 10;`** – Declares an integer variable named `num` and initializes it with the value `10`. The size of an `int` typically depends on the system architecture but is usually 4 bytes on modern systems.
   - **`float f_num = 23.2;`** – Declares a floating-point variable named `f_num` with a value of `23.2`. A `float` typically uses 4 bytes of memory.
   - **`double lf_num = 100.1;`** – Declares a double-precision floating-point variable named `lf_num` with a value of `100.1`. A `double` generally uses 8 bytes of memory, providing more precision than a `float`.
   - **`char letter = 'A';`** – Declares a character variable named `letter` and assigns it the value `'A'`. A `char` typically uses 1 byte of memory and represents a single character.
   - **`bool valid = true;`** – Declares a Boolean variable named `valid` and sets it to `true`. In C, `true` is typically represented as `1`, and `false` as `0`. The `bool` type typically uses 1 byte.

4. **Output Variables Using `printf()`:**
   - **`printf("%d\n", num);`** – Outputs the value of the integer variable `num`.
   - **`printf("%f\n", f_num);`** – Outputs the value of the floating-point variable `f_num`.
   - **`printf("%lf\n", lf_num);`** – Outputs the value of the double-precision floating-point variable `lf_num`.
   - **`printf("%c\n", letter);`** – Outputs the value of the character variable `letter`.
   - **`printf("%d\n", valid);`** – Outputs the value of the Boolean variable `valid` as an integer (1 for `true`, 0 for `false`).

5. **Output the ASCII Value of the Character:**
   - **`printf("Decimal format: %d\n", (int)letter);`** – Outputs the ASCII value of the character `letter` in decimal format by casting `letter` to an `int`.
   - **`printf("Hexadecimal format: %x\n", letter);`** – Outputs the ASCII value of the character `letter` in hexadecimal format.
   - **`printf("Octal format: %o\n", letter);`** – Outputs the ASCII value of the character `letter` in octal format.

6. **`return 0;`** – This statement ends the `main()` function and returns the value `0`, indicating that the program executed successfully.

## Explanation of Concepts
- **Data Types:**
  - **`int`**: Represents integer values.
  - **`float`**: Represents single-precision floating-point numbers.
  - **`double`**: Represents double-precision floating-point numbers.
  - **`char`**: Represents single characters.
  - **`bool`**: Represents Boolean values (`true` or `false`).

- **Formatting in `printf()`:**
  - **`%d`**: Format specifier for integers.
  - **`%f`**: Format specifier for floating-point numbers.
  - **`%lf`**: Format specifier for double-precision floating-point numbers.
  - **`%c`**: Format specifier for characters.
  - **`%x`**: Format specifier for hexadecimal integers.
  - **`%o`**: Format specifier for octal integers.
