# Ellipses
This block explores two distinct approaches in C++ for handling multiple arguments in functions: using variadic templates with function overloading and using fold expressions. Both methods leverage modern C++ features to create versatile and efficient code.

## Code 1: Function Overloading with Variadic Templates
```cpp
#include <iostream>

template <typename T>
void print(T value) {
    std::cout << value << '\n';
}

template <typename T, typename... Args>
void print(T value, Args... args) {
    std::cout << value;
    print(args...);
}

int main() {
    print("Hello, World! ", 5.1f);
    return 0;
}
```

## Description
1. **`#include <iostream>`** – Includes the Standard Input/Output stream library, enabling the use of `std::cout` for output operations.

2. **Template Function for Single Argument:**
   - **`template <typename T> void print(T value)`** – This is a template function that accepts a single argument of any type `T`. It prints the argument followed by a newline.
   - **`std::cout << value << '\n';`** – Outputs the argument value to the console with a newline character.

3. **Template Function for Multiple Arguments:**
   - **`template <typename T, typename... Args> void print(T value, Args... args)`** – This is a variadic template function that can handle a variable number of arguments. `T` is the type of the first argument, and `Args...` is a parameter pack for the remaining arguments.
   - **`std::cout << value;`** – Prints the first argument.
   - **`print(args...);`** – Recursively calls the `print` function with the remaining arguments. This recursion continues until only the single-argument `print` function is called.

4. **`int main()` Function:**
   - **`print("Hello, World! ", 5.1f);`** – Calls the `print` function with a string and a float. The variadic template allows handling different types and number of arguments, resulting in "Hello, World! " followed by `5.1`.

## Code 2: Using Fold Expressions
```cpp
#include <iostream>

template <typename... Args>
void print(Args... args) {
    (std::cout << ... << args) << '\n';
}

int main() {
    print("Hello, World! ", 5.1f);
    return 0;
}
```

## Description
1. **`template <typename... Args>`** – Declares a variadic template function that accepts any number of arguments of any type. `Args...` represents a pack of arguments.

2. **`void print(Args... args)`** – Defines a function named `print` that takes a variable number of arguments. The return type is `void`, meaning no value is returned.

3. **`(std::cout << ... << args) << '\n';`** – Utilizes a fold expression, a feature introduced in C++17:
   - **`std::cout << ... << args`** – The fold expression applies the `<<` operator to all arguments in the parameter pack `args`. This effectively concatenates and prints each argument in the order provided.
   - **`<< '\n';`** – After all arguments have been printed, a newline character is appended to move the cursor to the next line.

   The fold expression simplifies the code by consolidating multiple `<<` operations into a single line, making it concise and efficient.

## Compilation and Execution
To compile and execute this C++ code, you need a modern C++ compiler that supports the required C++ standard:

1. **Save the Code:** Save the code into a file named `main.cpp`.

2. **Open a Terminal or Command Prompt:** Navigate to the directory where `main.cpp` is saved.

3. **Compile the Code:**
   For **Code 1** (which requires C++11):
   ```bash
   g++ -std=c++11 main.cpp -o main
   ```

   For **Code 2** (which requires C++17):
   ```bash
   g++ -std=c++17 main.cpp -o main
   ```

   Ensure you use the appropriate standard flag to enable the features used in the code.

4. **Run the Executable:**
   ```bash
   ./main
   ```

**Note:** If using a compiler that does not support the required C++ standard, you may encounter compilation errors. Upgrading to a newer version of the compiler or adjusting the standard flag may be necessary.
