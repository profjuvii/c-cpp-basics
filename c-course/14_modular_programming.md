# Modular Programming
Modular programming helps organize code into separate files, making it easier to maintain and scale. Here is a minimal example demonstrating modular programming in C.

## Code
### 1. **Header File (`math_utils.h`)**
```c
// math_utils.h
#ifndef MATH_UTILS_H
#define MATH_UTILS_H

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);

#endif // MATH_UTILS_H
```

### 2. **Implementation File (`math_utils.c`)**
```c
// math_utils.c
#include "math_utils.h"

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to subtract one integer from another
int subtract(int a, int b) {
    return a - b;
}
```

### 3. **Main File (`main.c`)**
```c
// main.c
#include <stdio.h>
#include "math_utils.h"

int main() {
    int x = 5, y = 3;

    // Use functions from math_utils.c
    printf("Sum: %d\n", add(x, y));
    printf("Difference: %d\n", subtract(x, y));

    return 0;
}
```

## Description
### 1. **Header File (`math_utils.h`)**
- **Purpose**: This file declares the functions provided by the module. It contains function prototypes for `add` and `subtract`.
- **Content**:
  - **Include Guards**: `#ifndef`, `#define`, and `#endif` prevent multiple inclusions of this header file, which avoids redefinition errors.
  - **Function Prototypes**: Declarations of the `add` and `subtract` functions. These tell the compiler about the functions' names and their parameters.

### 2. **Implementation File (`math_utils.c`)**
- **Purpose**: This file defines the actual implementation of the functions declared in `math_utils.h`.
- **Content**:
  - **Include Header**: `#include "math_utils.h"` includes the header file so that the compiler knows the function prototypes that correspond to the definitions.
  - **Function Definitions**: 
    - **`add` Function**: Adds two integers and returns the result.
    - **`subtract` Function**: Subtracts the second integer from the first and returns the result.

### 3. **Main File (`main.c`)**
- **Purpose**: This is the main file of the program where the functions from `math_utils.c` are used.
- **Content**:
  - **Include Header**: `#include "math_utils.h"` includes the header file to access the function prototypes.
  - **Main Function**:
    - **Variables**: Initializes two integers, `x` and `y`.
    - **Function Calls**: Calls `add` and `subtract` functions and prints their results using `printf`.

## Compilation
To compile this code, you need to compile both `math_utils.c` and `main.c` separately and then link them together. The commands to compile and link the files are:

```sh
gcc -c math_utils.c
gcc -c main.c
gcc -o main math_utils.o main.o
```

### Explanation of Compilation Commands:
- **`gcc -c math_utils.c`**: Compiles `math_utils.c` into an object file (`math_utils.o`).
- **`gcc -c main.c`**: Compiles `main.c` into an object file (`main.o`).
- **`gcc -o main math_utils.o main.o`**: Links the object files to create the executable named `main`.
