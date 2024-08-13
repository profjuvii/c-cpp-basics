# Bitwise Operations
Bitwise operations in C are performed at the binary level. They work directly with the bits of integer values and are used for tasks like bit masking, setting, and clearing specific bits. This code demonstrates how to use bitwise AND, OR, XOR, complement, and shifts (left and right).

## Code Example
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

### Description
**1. Bitwise AND (`&`):**
   - **Operation:** `a & b`
   - **Binary Calculation:** `1100 & 1010` results in `1000`.
   - **Explanation:** Bitwise AND compares each bit of the two operands. The result bit is `1` only if both bits are `1`, otherwise `0`.
   - **Result:** `8` (binary `1000`).

**2. Bitwise OR (`|`):**
   - **Operation:** `a | b`
   - **Binary Calculation:** `1100 | 1010` results in `1110`.
   - **Explanation:** Bitwise OR compares each bit of the two operands. The result bit is `1` if either of the bits is `1`.
   - **Result:** `14` (binary `1110`).

**3. Bitwise XOR (`^`):**
   - **Operation:** `a ^ b`
   - **Binary Calculation:** `1100 ^ 1010` results in `0110`.
   - **Explanation:** Bitwise XOR (exclusive OR) compares each bit of the two operands. The result bit is `1` if the bits are different.
   - **Result:** `6` (binary `0110`).

**4. Bitwise Complement (`~`):**
   - **Operation:** `~num`
   - **Binary Calculation:** `~0000 0000 0000 0000 0000 0000 0000 0101` results in `1111 1111 1111 1111 1111 1111 1111 1010`.
   - **Explanation:** Bitwise complement inverts each bit of the operand. In a 32-bit system, it flips all bits of `5` (binary `0101`).
   - **Result:** `4294967290` (binary `1111 1111 1111 1111 1111 1111 1111 1010`).

**5. Left Shift (`<<`):**
   - **Operation:** `num << 2`
   - **Binary Calculation:** `0101 << 2` results in `10100`.
   - **Explanation:** Shifts all bits of the operand to the left by the specified number of positions. Bits shifted out are discarded, and zeros are shifted in from the right.
   - **Result:** `20` (binary `10100`).

**6. Right Shift (`>>`):**
   - **Operation:** `result_left_shift >> 2`
   - **Binary Calculation:** `10100 >> 2` results in `0101`.
   - **Explanation:** Shifts all bits of the operand to the right by the specified number of positions. Bits shifted out are discarded, and zeros are shifted in from the left.
   - **Result:** `5` (binary `0101`).
