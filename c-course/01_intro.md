# Introduction to the C language
This C code performs the simple task of displaying a message on the screen.

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
1. `#include <stdio.h>` – includes the standard library for working with input and output (standard functions like `printf()`).
2. `int main()` is the main function of the program, which is executed first at startup.
3. `printf("Hello, World!\n");` – displays the message "Hello, World!" with a new line after it.
4. `return 0;` - terminates the execution of the program and returns the value 0, which means successful completion.

## Compilation and Execution
To compile and run this program:

1. Save the code in a file named `main.c`.
2. Open a terminal and navigate to the directory containing `main.c`.
3. Compile the code with `gcc main.c -o main`.
4. Run the compiled program with `./main`.

You should see the output: `Hello, World!`
