# Exception Handling
This C++ code shows how to handle exceptions: it throws a `std::runtime_error` in the `mightGoWrong` function and catches it in `main`, allowing the program to handle errors and continue running.

## Code
```cpp
#include <iostream>
#include <stdexcept> // For standard exceptions

// A function that can throw an exception
void mightGoWrong() {
    bool errorOccurred = true; // Simulating an error condition

    if (errorOccurred) {
        throw std::runtime_error("Something went wrong!");
    }
}

int main() {
    try {
        mightGoWrong(); // Call the function that might throw an exception
    } catch (const std::runtime_error& e) { // Catch specific type of exception
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    } catch (...) { // Catch any other type of exception
        std::cerr << "Caught an unknown exception!" << std::endl;
    }

    std::cout << "Program continues running..." << std::endl;
    return 0;
}
```

## Description
1. **Headers and Namespaces**:
   - `#include <iostream>`: Includes the standard input/output stream library for console operations.
   - `#include <stdexcept>`: Includes standard exception classes like `std::runtime_error`.

2. **Function `mightGoWrong()`**:
   - This function simulates a situation where an error might occur.
   - If the `errorOccurred` condition is `true`, it throws a `std::runtime_error` exception with a descriptive error message.

3. **Main Function**:
   - The `try` block contains code that might throw an exception (`mightGoWrong()` in this case).
   - The `catch` block for `std::runtime_error` handles the specific exception thrown by `mightGoWrong()`. `e.what()` provides the error message.
   - The second `catch` block (`catch (...)`) is a catch-all handler that catches any type of exception not caught by previous catch blocks.
   - After handling exceptions, the program continues executing the code after the `try-catch` blocks.

4. **Error Handling**:
   - By using `try` and `catch`, the program can gracefully handle errors without terminating abruptly. The `catch` blocks ensure that errors are caught and managed, allowing the program to continue or terminate safely.
