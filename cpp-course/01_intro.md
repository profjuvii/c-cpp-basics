# Introduction to the C++ Language
C++ is an extension of the C language, developed by Bjarne Stroustrup in the 1980s. It introduces object-oriented programming (OOP) features, such as classes and inheritance, while maintaining the efficiency and flexibility of C. C++ supports both procedural and object-oriented programming, making it versatile for a wide range of applications, including game development, desktop applications, and real-time systems.

## Overview of the Code Functionality
This C++ code demonstrates the use of a simple function to display a message on the screen. Functions are a fundamental concept in programming that allow you to organize your code into reusable blocks.

## Code
```cpp
#include <iostream>
using namespace std;

void greet() {
    cout << "Hello, World!" << endl;
}

int main() {
    greet();
    return 0;
}
```

## Description
1. **`#include <iostream>`** – This directive includes the input/output stream library, which is necessary for using `cout` to print text to the console.

2. **`using namespace std;`** – This line allows you to use names from the standard library (like `cout` and `endl`) without needing to prefix them with `std::`. It simplifies the syntax, especially in simple programs.

### Function Definition
3. **`void greet()`** – This line defines a function named `greet`. The keyword `void` indicates that the function does not return any value. The function performs a specific task: printing a message to the console.

   - **`cout << "Hello, World!" << endl;`** – Inside the `greet` function, this line uses `cout` to print `"Hello, World!"` to the console. The `endl` manipulator adds a newline, moving the cursor to the next line after the message is printed.

### Main Function
4. **`int main()`** – This is the main function of the program, where execution begins. The `int` return type indicates that this function returns an integer value, typically used to signal the program's exit status.

   - **`greet();`** – This line calls the `greet` function. When the program reaches this line, it jumps to the `greet` function, executes it (printing "Hello, World!"), and then returns to continue the rest of the `main` function.
   
   - **`return 0;`** – This line ends the `main()` function, returning `0` to the operating system. Returning `0` generally signifies that the program completed successfully.

## Compilation and Execution
To compile and execute this C++ program, follow these steps:

1. **Save the code:** Save the provided code in a file with a `.cpp` extension, for example, `greet.cpp`.

2. **Open a terminal:** Navigate to the directory where you saved `greet.cpp`.

3. **Compile the program:** Use a C++ compiler like `g++` to compile the code. Enter the following command:
   ```bash
   g++ greet.cpp -o greet
   ```
   This command compiles `greet.cpp` and creates an executable file named `greet`.

4. **Run the program:** Execute the compiled program by typing:
   ```bash
   ./greet
   ```
   After running the command, you should see the output:
   ```
   Hello, World!
   ```
