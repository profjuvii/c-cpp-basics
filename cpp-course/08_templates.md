# Templates
Templates in C++ are a powerful feature that allows you to write generic and reusable code. Templates enable functions and classes to operate with any data type without being rewritten for each type. There are two main types of templates in C++: **function templates** and **class templates**.

## Code 1: Function Template
A function template allows you to create a single function that can work with different data types. Instead of writing multiple overloaded functions for different types, you can write one template function that works with any type.

```cpp
#include <iostream>

// Template definition
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    double p = 1.5, q = 2.5;

    // Using swapValues with int
    swapValues(x, y);
    std::cout << "Swapped integers: " << x << ", " << y << "\n";

    // Using swapValues with double
    swapValues(p, q);
    std::cout << "Swapped doubles: " << p << ", " << q << "\n";

    return 0;
}
```

## Description
- **`template <typename T>`**: This line defines a template with a placeholder type `T`. The `typename` keyword indicates that `T` will be a type parameter.
- **`void swapValues(T& a, T& b)`**: The function `swapValues` is defined to accept two references of type `T`.
- **Usage**: When you call `swapValues`, the compiler automatically determines the type based on the arguments. For example, when you pass `int` variables, the compiler generates a version of the function that operates on `int`.

## Code 2: Class Template
Class templates allow you to define a blueprint for a class that can handle any data type. This is particularly useful when creating data structures like linked lists, stacks, or queues that should work with various types.

```cpp
#include <iostream>

// Template definition
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // Constructor
    Pair(T1 f, T2 s) : first(f), second(s) {}

    // Member functions to get the values
    T1 getFirst() const { return first; }
    T2 getSecond() const { return second; }
};

int main() {
    Pair<int, double> p1(10, 20.5); // Pair of int and double
    Pair<std::string, char> p2("Hello", 'A'); // Pair of string and char

    // Access and print the pair values
    std::cout << "Pair 1: (" << p1.getFirst() << ", " << p1.getSecond() << ")\n";
    std::cout << "Pair 2: (" << p2.getFirst() << ", " << p2.getSecond() << ")\n";

    return 0;
}
```

## Description
- **`template <typename T1, typename T2>`**: This line defines a class template with two type parameters, `T1` and `T2`.
- **`class Pair`**: The class `Pair` is designed to hold two values of potentially different types (`T1` and `T2`).
- **Constructor**: The constructor initializes the `first` and `second` members with the provided arguments.
- **Usage**: When creating a `Pair` object, you specify the types you want to use. For example, `Pair<int, double>` creates a pair where the first value is an `int` and the second is a `double`.

## Advantages of Using Templates
- **Code Reusability**: Templates allow you to write generic code that works with any data type, reducing redundancy.
- **Type Safety**: The compiler ensures that only the correct types are used, helping to catch errors at compile time.
- **Flexibility**: You can create functions and classes that work with multiple data types without rewriting the code.

## Common Use Cases for Templates
- **Containers**: Most STL containers (`std::vector`, `std::list`, `std::map`) are implemented as class templates.
- **Algorithms**: STL algorithms (`std::sort`, `std::find`) are implemented as function templates to work with any data type.
- **Custom Data Structures**: You can create custom data structures like linked lists, stacks, or queues using templates to handle different data types.
