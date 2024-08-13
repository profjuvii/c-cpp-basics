# Pointers

## Overview
This section introduces the concepts of pointers and functions in C. Pointers are variables that store memory addresses, allowing direct access to other variables. Functions can be used to perform operations, including those that involve pointers. This example demonstrates how to use pointers to pass variables by reference and swap their values.

## Code Example
```c
#include <stdio.h>

// Function to print two integer values
void print_numbers(const int num1, const int num2) {
    printf("%d\t%d\n", num1, num2);
}

// Function to swap the values of two integers using pointers
void swap(int* num1, int* num2) {
    int temp = *num1;       // Temporary variable to store the value of the first integer
    *num1 = *num2;          // Assign the value of the second integer to the first integer
    *num2 = temp;           // Assign the value stored in the temporary variable to the second integer
}

int main() {
    // Initialize an integer variable and a pointer to it
    int num1 = 10;          // Integer variable
    int* ptr = &num1;       // Pointer variable, storing the address of num1

    // Print value and memory address of num1
    printf("Value: %d\t", num1);            // Print the value of num1
    printf("Memory address: %p\n", &num1);  // Print the memory address of num1
    printf("Value: %d\t", *ptr);            // Print the value of num1 using the pointer
    printf("Memory address: %p\n", ptr);    // Print the memory address using the pointer

    int num2 = 20; // Another integer variable

    // Print numbers before swapping
    printf("Before:\t\t");
    print_numbers(num1, num2);

    // Swap the values of num1 and num2 using the swap function
    swap(ptr, &num2);

    // Print numbers after swapping
    printf("After:\t\t");
    print_numbers(num1, num2);

    return 0;
}
```

### Description
**1. Pointer Declaration and Usage:**
- **Pointer Initialization:** 
  - `int* ptr = &num1;` creates a pointer `ptr` that holds the address of the variable `num1`.
- **Pointer Dereferencing:**
  - `*ptr` allows access to the value stored at the address `ptr` points to.

**2. Function `print_numbers()`:**
   - **Purpose:** Prints the values of two integers.
   - **Parameters:** Accepts two integers by value.
   - **Usage:** Provides a simple way to display values of variables.

**3. Function `swap()`:**
- **Purpose:** Swaps the values of two integers using pointers.
- **Parameters:** Accepts pointers to two integers (`int* num1`, `int* num2`).
- **Logic:**
   - Uses a temporary variable `temp` to hold the value of the first integer.
   - Assigns the value of the second integer to the first integer.
   - Assigns the value stored in `temp` to the second integer.
- **Usage:** Demonstrates how to swap values by modifying the values at the memory addresses pointed to by the pointers.

**4. Main Function:**
- **Initial Setup:**
   - Initializes two integer variables `num1` and `num2`.
   - Creates a pointer `ptr` pointing to `num1`.
- **Before Swapping:**
   - Prints the initial values and addresses of `num1` and `num2`.
- **Swapping Values:**
   - Calls `swap(ptr, &num2)` to swap the values of `num1` and `num2`.
- **After Swapping:**
   - Prints the values after swapping to verify the change.
