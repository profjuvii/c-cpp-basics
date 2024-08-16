# Bitwise Operators
This C code demonstrates the use of bitwise operators, which perform operations directly on the binary representations of integers. Bitwise operations are essential for low-level programming, such as in embedded systems, cryptography, and optimizing code for performance.

## Code
```c
#include <stdio.h>

int main() {
    // Variables
    int a = 12;     // binary representation: 1100
    int b = 10;     // binary representation: 1010
    int num = 5;    // binary representation: 0101

    // Example of bitwise AND
    int result_and = a & b;                             // 1100 & 1010 = 1000
    printf("Bitwise AND result: %d\n", result_and);     // Result: 8 (1000 in binary)

    // Example of bitwise OR
    int result_or = a | b;                              // 1100 | 1010 = 1110
    printf("Bitwise OR result: %d\n", result_or);       // Result: 14 (1110 in binary)

    // Example of bitwise XOR
    int result_xor = a ^ b;                             // 1100 ^ 1010 = 0110
    printf("Bitwise XOR result: %d\n", result_xor);     // Result: 6 (0110 in binary)

    // Example of bitwise complement
    unsigned int complement = ~num;                     // ~0000 0000 0000 0000 0000 0000 0000 0101
    printf("Bitwise complement: %u\n", complement);     // Result: 4294967290 (1111 1111 1111 1111 1111 1111 1111 1010 in binary)

    // Example of left shift
    int result_left_shift = num << 2;                           // 0101 << 2 = 10100
    printf("Left shift result: %d\n", result_left_shift);       // Result: 20 (10100 in binary)

    // Example of right shift
    int result_right_shift = result_left_shift >> 2;            // 10100 >> 2 = 0101
    printf("Right shift result: %d\n", result_right_shift);     // Result: 5 (0101 in binary)

    return 0;
}
```

## Description
1. **Variables:**
   - `int a = 12;` – The binary representation of 12 is `1100`.
   - `int b = 10;` – The binary representation of 10 is `1010`.
   - `int num = 5;` – The binary representation of 5 is `0101`.

   These variables are used in subsequent bitwise operations.

2. **Bitwise AND (`&`):**
   - **`result_and = a & b;`** – Performs a bitwise AND between `a` and `b`.
     - Binary operation: `1100 & 1010 = 1000`.
     - Result: `8`, because `1000` in binary is `8` in decimal.
   - The result is printed with `printf()`.

3. **Bitwise OR (`|`):**
   - **`result_or = a | b;`** – Performs a bitwise OR between `a` and `b`.
     - Binary operation: `1100 | 1010 = 1110`.
     - Result: `14`, because `1110` in binary is `14` in decimal.

4. **Bitwise XOR (`^`):**
   - **`result_xor = a ^ b;`** – Performs a bitwise XOR between `a` and `b`.
     - Binary operation: `1100 ^ 1010 = 0110`.
     - Result: `6`, because `0110` in binary is `6` in decimal.

5. **Bitwise Complement (`~`):**
   - **`complement = ~num;`** – Performs a bitwise complement on `num`.
     - Binary operation: `~0101` results in `1111 1111 1111 1111 1111 1111 1111 1010`.
     - Result: `4294967290`, because the complement operation inverts all the bits, leading to this large unsigned integer value.

6. **Left Shift (`<<`):**
   - **`result_left_shift = num << 2;`** – Shifts the bits of `num` two positions to the left.
     - Binary operation: `0101 << 2 = 10100`.
     - Result: `20`, because `10100` in binary is `20` in decimal.

7. **Right Shift (`>>`):**
   - **`result_right_shift = result_left_shift >> 2;`** – Shifts the bits of `result_left_shift` two positions to the right.
     - Binary operation: `10100 >> 2 = 0101`.
     - Result: `5`, because `0101` in binary is `5` in decimal.
