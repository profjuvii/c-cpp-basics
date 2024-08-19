# Function Overloading
Function overloading is a feature in that allows you to define multiple functions with the same name but with different parameter lists. This is useful when you want to perform similar actions on different types or numbers of inputs.

## Code
```cpp
#include <iostream>

// Function to calculate the sum of two integers
int sum(int a, int b) {
    return a + b;
}

// Function to calculate the sum of two doubles
double sum(double a, double b) {
    return a + b;
}

// Function to calculate the sum of three integers
int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int intSum = sum(10, 20);          // Calls the int version
    double doubleSum = sum(5.5, 4.5);  // Calls the double version
    int tripleSum = sum(1, 2, 3);      // Calls the three-argument version

    std::cout << "Sum of 10 and 20: " << intSum << "\n";        // Output: 30
    std::cout << "Sum of 5.5 and 4.5: " << doubleSum << "\n";   // Output: 10
    std::cout << "Sum of 1, 2, and 3: " << tripleSum << "\n";   // Output: 6

    return 0;
}
```

## Description
- **`int sum(int a, int b)`**: This function takes two integers and returns their sum.
- **`double sum(double a, double b)`**: This version of `sum` takes two doubles and returns their sum.
- **`int sum(int a, int b, int c)`**: This version takes three integers and returns their sum.

When you call `sum(10, 20)`, the compiler matches the call to the first version of the function. Similarly, `sum(5.5, 4.5)` calls the second version, and `sum(1, 2, 3)` calls the third version.
