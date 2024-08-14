# Introduction to the C Language

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
   ```
   gcc main.c -o main
   ```
   This command compiles `main.c` and creates an executable file named `main`.

4. **Run the program:** Execute the compiled program by typing:
   ```
   ./main
   ```
   This will run the program, and you should see the output:
   ```
   Hello, World!
   ```

## Explanation of Concepts

- **Preprocessor Directive:** The `#include <stdio.h>` is a preprocessor directive that tells the compiler to include the contents of the standard input/output library before actual compilation starts.

- **Functions:** `main()` is a function in C. Every C program must have a `main()` function where the execution begins. The `printf()` function is used for formatted output, making it a fundamental tool for displaying information.

- **Return Values:** The `return` statement in `main()` returns control to the operating system. The value `0` typically signifies that the program executed successfully. 

This program is a classic "Hello, World!" example, commonly used to illustrate the basic structure and syntax of C programs.
