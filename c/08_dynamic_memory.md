# Dynamic Memory Management

## Overview
Dynamic memory management in C allows you to allocate, resize, and free memory at runtime. Functions like `malloc()`, `calloc()`, `realloc()`, and `free()` are used to manage memory dynamically, which is crucial for handling data structures whose size isn't known at compile time.

## Code Example
```c
#include <stdio.h>
#include <stdlib.h> // For malloc(), calloc(), realloc(), free(), rand()

/* 
    malloc() and calloc() allocate memory
    realloc() changes the memory size
    free() frees memory
    rand() randomly generates values
*/

void print_array(const int* num, const int size) {
    for(int i = 0; i < size; ++i) {
        printf("%d ", num[i]);
    }
    printf("\n");
}

int main() {
    int size = 10; // Initial size of the array

    // Allocate memory for 10 integers using malloc
    int* numbers = (int*)malloc(size * sizeof(int));
    // Alternatively, allocate and initialize memory for 10 integers using calloc
    // int* numbers = (int*)calloc(10, sizeof(int)); 

    if (numbers == NULL) {
        // Check if memory allocation was successful
        printf("Memory allocation failed\n");
        return 1;
    }

    size *= 2; // Double the size of the array

    // Resize the memory block to accommodate twice as many integers
    numbers = (int*)realloc(numbers, size * sizeof(int));

    if (numbers == NULL) {
        // Check if memory reallocation was successful
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Fill the entire array with random values between 1 and 100
    for (int i = 0; i < size; ++i) {
        numbers[i] = rand() % 100 + 1;
    }

    // Print the elements of the array
    print_array(numbers, size);

    // Modify the value at the zero position of the array
    numbers[0] = -100;
    printf("Changed zero position: %d\n", numbers[0]);
    print_array(numbers, size);

    // Access a specific element of the array
    int number = numbers[3];
    printf("Taken number: %d\n", number);

    // Free the allocated memory
    free(numbers);

    return 0;
}
```

### Description
**1. Memory Allocation:**
   - **`malloc(size_t size)`**: Allocates a block of memory of the specified size and returns a pointer to it. In this example, `malloc(size * sizeof(int))` allocates memory for 10 integers.
   - **`calloc(size_t num, size_t size)`**: Allocates memory for an array of `num` elements, each of `size` bytes, and initializes all bytes to zero. This is an alternative to `malloc` if you need zero-initialized memory.

**2. Memory Reallocation:**
   - **`realloc(void* ptr, size_t new_size)`**: Resizes the previously allocated memory block to `new_size`. If the pointer is `NULL`, it behaves like `malloc()`. If `new_size` is zero, it returns `NULL`. In this example, `realloc(numbers, size * sizeof(int))` doubles the memory size.

**3. Memory Usage:**
   - **`rand()`**: Generates random integers. Here, it is used to fill the array with random values between 1 and 100.
   - **`print_array(const int* num, const int size)`**: A helper function to print the contents of the array.

**4. Memory Deallocation:**
   - **`free(void* ptr)`**: Frees the previously allocated memory block. This is crucial to avoid memory leaks.

**5. Error Checking:**
   - Always check if `malloc()`, `calloc()`, or `realloc()` returns `NULL`, indicating that memory allocation failed.
