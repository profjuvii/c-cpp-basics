# Introduction to the C Language

**C** is a general-purpose programming language (GPL) that is widely used for developing systems and application software. It was created in the 1972 by Dennis Ritchie.

### Key Features:

- **Procedural:** Enables a structured approach to programming by dividing a program into a set of functions.
- **Imperative:** Allows the programmer to specify a sequence of commands for the computer to execute step by step.
- **Low-level Access:** Facilitates low-level operations, making it ideal for creating operating systems and device drivers.
- **Universal:** Applicable to a variety of purposes, ranging from system software to application software.

## Hello, World!

```с
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

### Explanation:

1. `#include <stdio.h>` - A preprocessor directive that includes the standard input/output library, providing the declaration of the `printf` function.
2. `int main()` - The main function where program execution begins.
3. `printf("Hello, World!\n");` - Prints "Hello, World!" to the screen, with `\n` adding a new line.
4. `return 0;` - Returns 0 from main, indicating successful program completioni.

## Compilation

**Code compilation** is the process of converting source code written in a high-level programming language (e.g., C) into machine code (binary code). This process is handled by a program called a compiler. The first compiler for C was `cc`, created by Dennis Ritchie in 1973. The standard compiler on most platforms became `gcc` (GNU Compiler Collection), which supports C standards (C89, C99, C11, C17, C23). Other popular compilers include `clang` (from LLVM), `MSVC` (Microsoft Visual C++ for Windows), and `ICC` (Intel Compiler for high-performance computing).

### Main Stages of C Compilation:

1. **Preprocessing (gcc -E):**
    - The stage of processing preprocessor directives such as `#include` and `#define`, where the compiler includes specified header files and replaces macros.
    - The result is "expanded" source code where all included files are integrated, and macros are expanded.

2. **Compilation (gcc -S):**
    - The source code (or expanded code after preprocessing) is translated into an intermediate representation—assembly code. This is a textual form of instructions understood by a specific processor.

3. **Assembly (gcc -c):**
    - The assembly code is converted into object code (machine code). The object file contains binary instructions but is not yet ready for execution because it may depend on other files (e.g., libraries).

4. **Linking (gcc):**
    - Object files are combined with external libraries, and an executable file is created.

**Example of a typical compilation for the file `main.c`:**

```
gcc -o main main.c
```

### Compiler Flags:

1. **Compilation standard:**
    - The `-std=` flag sets the language standard (e.g., `-std=c89`, `-std=c99`, `-std=c11`, etc.). Choosing a standard affects language features and syntax checks.
    - Newer standards introduce modern features but may be incompatible with older code.

2. **Checks and warnings:**
    - `-Wall`: Enables basic warnings.
    - `-Wextra`: Additional warnings for better code analysis.
    - `-Werror`: Treats warnings as errors.

3. **Optimization:**
    - `-O0`: Disables optimizations (default, useful for debugging).
    - `-O1:` Minimal optimizations to improve performance.
    - `-O2:` Stronger optimizations with no risk to correctness.
    - `-O3:` Maximum optimizations, which may increase compilation time.
    - Higher optimization levels may change the order of instruction execution.

4. **Standard compliance:**
    - `-pedantic`: Ensures full adherence to the chosen standard, reporting non-standard extensions.

**Example of compilation with a basic set of flags:**

```
gcc -std=c11 -Wall -Wextra -Werror -O2 -pedantic -o main main.c
```
