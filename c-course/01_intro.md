# Introduction to the C language
This is a basic C program that demonstrates how to print a message to the screen. It includes the essential components of a C program and shows how to use the `printf()` function to display output.

## Code
```c
#include <stdio.h> // Preprocessor directive to include the standard input/output library

int main() {
    // Print a message to the screen
    printf("Hello, World!\n");
    return 0; // Return from the main function
}
```

## Description
1. **Header File Inclusion:**
  `#include <stdio.h>`: This line includes the standard input/output library, which provides the `printf()` function used for printing text to the screen.

2. **Main Function:**
  `int main() { ... }`: The main function is the entry point of any C program. It is where the execution starts.

3. **Print Statement:**
  `printf("Hello, World!\n");`: This line outputs the text "Hello, World!" to the console. The `\n` denotes a newline character, which moves the cursor to the next line after printing.

4. **Return Statement:**
  `return 0;`: This line indicates that the program has ended successfully. The value `0` is returned to the operating system.

## Compilation and Execution
To compile and run this program:

1. Save the code in a file named `main.c`.
2. Open a terminal and navigate to the directory containing `main.c`.
3. Compile the code with `gcc main.c -o main`.
4. Run the compiled program with `./main`.

You should see the output: `Hello, World!`
