# Dynamic Memory Management
This C code demonstrates the dynamic allocation, reallocation, and deallocation of memory using functions like `malloc()`, `calloc()`, `realloc()`, and `free()`. It also shows how to generate random values using `rand()`.

## Code
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
    int* numbers = (int *)malloc(size * sizeof(int));
    // Alternatively, allocate and initialize memory for 10 integers using calloc
    // int* numbers = (int*)calloc(10, sizeof(int)); 

    if (numbers == NULL) {
        // Check if memory allocation was successful
        printf("Memory allocation failed\n");
        return 1;
    }

    size *= 2; // Double the size of the array

    // Resize the memory block to accommodate twice as many integers
    numbers = (int *)realloc(numbers, size * sizeof(int));

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

## Description
### Memory Allocation and Initialization
1. **Memory Allocation with `malloc`:**
   - **`int* numbers = (int *)malloc(size * sizeof(int));`** – Allocates memory for `size` (10) integers. `malloc()` returns a pointer to the allocated memory block. If the allocation fails, `NULL` is returned.
   - **Alternative using `calloc`:** The code has a commented line that demonstrates how to allocate memory with `calloc()`. Unlike `malloc()`, `calloc()` also initializes the allocated memory to zero.

2. **Memory Allocation Check:**
   - The code checks if `numbers` is `NULL`, which would indicate that memory allocation failed. If it fails, an error message is printed, and the program exits.

### Memory Reallocation
3. **Reallocation with `realloc`:**
   - **`numbers = (int *)realloc(numbers, size * sizeof(int));`** – Reallocates memory to accommodate `size` (now 20) integers. This allows the program to adjust the size of the memory block without losing existing data.
   - The code again checks if `realloc()` returned `NULL`, indicating a failure in resizing the memory.

### Array Operations
4. **Filling the Array with Random Values:**
   - The array `numbers` is filled with random integers between 1 and 100 using the `rand()` function in a loop.

5. **Printing the Array:**
   - **`print_array(numbers, size);`** – A helper function `print_array()` is used to print the elements of the array.

6. **Modifying Array Elements:**
   - The code modifies the first element of the array by setting `numbers[0]` to `-100` and then prints the modified array.

7. **Accessing Array Elements:**
   - A specific element, `numbers[3]`, is accessed and printed.

### Memory Deallocation
8. **Freeing Memory with `free`:**
   - **`free(numbers);`** – Deallocates the memory previously allocated for `numbers`, preventing memory leaks.
