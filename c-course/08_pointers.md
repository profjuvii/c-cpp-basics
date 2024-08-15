# Pointers
This C code demonstrates basic usage of pointers. It includes defining functions to print values, swap integers using pointers, and illustrate how pointers work with variables and function arguments.

## Code
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

## Description
### Function to Print Numbers
1. **`void print_numbers(const int num1, const int num2)`**
   - This function takes two integer arguments `num1` and `num2` and prints them.
   - **`printf("%d\t%d\n", num1, num2);`** – Prints the two integers separated by a tab character.

   The `const` keyword indicates that the values of `num1` and `num2` are not modified by this function.

### Function to Swap Values
2. **`void swap(int* num1, int* num2)`**
   - This function swaps the values of two integers using pointers.
   - **`int temp = *num1;`** – Stores the value pointed to by `num1` in a temporary variable `temp`.
   - **`*num1 = *num2;`** – Assigns the value pointed to by `num2` to the location pointed to by `num1`.
   - **`*num2 = temp;`** – Assigns the value stored in `temp` to the location pointed to by `num2`.

   The use of pointers allows direct manipulation of the variables’ values in memory.

### Main Function
3. **`int main()`**
   - **`int num1 = 10;`** – Declares an integer variable `num1` and initializes it to 10.
   - **`int* ptr = &num1;`** – Declares a pointer `ptr` and initializes it to point to `num1`.

   The program prints the value and memory address of `num1` and shows how it can be accessed using the pointer `ptr`.

4. **Print Values:**
   - **`printf("Value: %d\t", num1);`** – Prints the value of `num1`.
   - **`printf("Memory address: %p\n", &num1);`** – Prints the memory address of `num1`.
   - **`printf("Value: %d\t", *ptr);`** – Prints the value pointed to by `ptr` (which is `num1`).
   - **`printf("Memory address: %p\n", ptr);`** – Prints the memory address stored in `ptr` (which is the address of `num1`).

5. **Swap Operation:**
   - **`int num2 = 20;`** – Declares another integer variable `num2` and initializes it to 20.
   - **`print_numbers(num1, num2);`** – Prints the values of `num1` and `num2` before swapping.
   - **`swap(ptr, &num2);`** – Calls the `swap` function to swap the values of `num1` and `num2`.

6. **Print Swapped Values:**
   - **`print_numbers(num1, num2);`** – Prints the values of `num1` and `num2` after swapping.
