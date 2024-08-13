#include <stdio.h>


int main(){
    // variables
    int a = 12;     // binary representation: 1100
    int b = 10;     // binary representation: 1010
    int num = 5;    // binary representation: 0101

    // example of bitwise AND
    int result_and = a & b;                             // 1100 & 1010 = 1000
    printf("Bitwise AND result: %d\n", result_and);     // result: 8 (1000 in binary)

    // example of bitwise OR
    int result_or = a | b;                              // 1100 | 1010 = 1110
    printf("Bitwise OR result: %d\n", result_or);       // result: 14 (1110 in binary)

    // example of bitwise XOR
    int result_xor = a ^ b;                             // 1100 ^ 1010 = 0110
    printf("Bitwise XOR result: %d\n", result_xor);     // result: 6 (0110 in binary)

    // example of bitwise complement
    unsigned int complement = ~num;                     // ~0000 0000 0000 0000 0000 0000 0000 0101
    printf("Bitwise complement: %u\n", complement);     // result: 4294967290 (1111 1111 1111 1111 1111 1111 1111 1010 in binary) 

    // example of left shift
    int result_left_shift = num << 2;                           // 101 << 2 = 10100
    printf("Left shift result: %d\n", result_left_shift);       // result: 20 (10100 in binary)

    // example of right shift
    int result_right_shift = result_left_shift >> 2;            // 10100 >> 2 = 0101
    printf("Right shift result: %d\n", result_right_shift);     // result: 5 (101 in binary)

    return 0;
}
