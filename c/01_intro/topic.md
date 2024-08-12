# Introduction to C Programming
C is one of the most popular and foundational programming languages in computer science. It was developed by Dennis Ritchie at Bell Labs in 1972 and quickly gained popularity due to its power, flexibility, and portability.

## Basic Syntax of C
Programs in C consist of functions, which in turn consist of statements. The main function of a program is called `main`, and execution starts from there.

### Structure of a C Program
Here is the basic structure of a C program:

```c
#include <stdio.h> // Preprocessor directive to include the standard input/output library

int main() {
    // Print a message to the screen
    printf("Hello, World!\n");
    return 0; // Return from the main function
}
```

#### Components of the Program:
- **`#include <stdio.h>`**: This preprocessor directive includes the standard input/output library.
- **`int main() { ... }`**: This is the main function where the execution of the program begins. It returns an `int` value.
- **`printf("Hello, World!\n");`**: This function prints text to the screen.
- **`return 0;`**: This command exits the `main` function with a return code of 0, indicating successful completion of the program.

## Basic Concepts
- **Comments**: Comments do not affect the execution of the program. They are used to explain the code.
  - **Single-line comments**: `// This is a single-line comment`
  - **Multi-line comments**: `/* This is a multi-line comment */`
- **Variables**: Variables are used to store data. In C, variables must be declared before they can be used.
```c
int a; // Declaration of an integer variable
```

## Compiler and Development Environment
To compile C programs, you need a compiler. Popular compilers include GCC (GNU Compiler Collection) and Clang. Integrated Development Environments (IDEs) like Visual Studio Code, Code::Blocks, or CLion provide a user-friendly interface for writing, compiling, and debugging code.
To compile the program manually, use this: ``` gcc hello.c -o hello ```

## Summary
This lesson introduces you to the basics of the C language, including the basic structure of a program, syntax, and tools for compilation and execution. Understanding these fundamentals is a crucial step toward learning more advanced topics in C programming.
