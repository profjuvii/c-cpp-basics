# Introduction to the C Language
C is a general-purpose, procedural programming language that was developed in the early 1970s by Dennis Ritchie. It is known for its efficiency, close-to-hardware operations, and foundational role in modern programming. C provides low-level memory access, making it ideal for system programming, operating systems, and embedded systems.

## Overview of the Code Functionality
This C code performs the basic task of displaying a message on the screen, which is often the first step in learning a new programming language.

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
1. **`#include <stdio.h>`** – This line tells the preprocessor to include the Standard Input/Output library (`stdio.h`). This library provides functions for input and output, including the `printf()` function used in this program.

2. **`int main()`** – The `main()` function is the entry point of every C program. When the program is executed, this function is called first. The `int` before `main` indicates that the function returns an integer value.

3. **`printf("Hello, World!\n");`** – The `printf()` function is used to print text to the console. In this case, it prints the message `"Hello, World!"`. The `\n` within the string is a newline character, which moves the cursor to the next line after printing.

4. **`return 0;`** – This line ends the `main()` function, returning the value `0` to the operating system. In C, returning `0` typically indicates that the program has successfully executed.

## Compilation and Execution
To compile and run this C program, follow these steps:

1. **Save the code:** Save the provided code into a file named `main.c`.

2. **Open a terminal:** Navigate to the directory where you saved `main.c`.

3. **Compile the program:** Use the GCC compiler to compile the code. Enter the command:
   ```bash
   gcc main.c -o main
   ```
   This command compiles `main.c` and creates an executable file named `main`.

4. **Run the program:** Execute the compiled program by typing:
   ```bash
   ./main
   ```
   This will run the program, and you should see the output:
   ```
   Hello, World!
   ```
