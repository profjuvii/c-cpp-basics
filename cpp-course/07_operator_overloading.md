# Operator Overloading
Operator overloading allows you to redefine how operators work with user-defined types (such as classes and structs). This feature makes it possible to use intuitive syntax (similar to built-in types) when working with complex objects.

## Code 1: Overloading the `+` Operator
Let's say we have a class `Complex` to represent complex numbers. We want to overload the `+` operator so that we can add two `Complex` objects using the `+` operator just like we do with integers or floats.

```cpp
#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor to initialize complex number
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload the + operator
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Function to print the complex number
    void print() const {
        std::cout << real << " + " << imag << "i\n";
    }
};

int main() {
    Complex c1(3.0, 4.0); // 3 + 4i
    Complex c2(1.5, 2.5); // 1.5 + 2.5i

    Complex c3 = c1 + c2; // Use overloaded + operator

    std::cout << "c1 + c2 = ";
    c3.print(); // Output: 4.5 + 6.5i

    return 0;
}
```

## Description
- **`Complex operator+(const Complex& other) const`**: This is the overloaded `+` operator function. It takes one argument of type `Complex` and returns a new `Complex` object, which is the sum of the calling object (`this`) and the `other` object.
- **Usage**: In `Complex c3 = c1 + c2;`, the `+` operator is used to add two `Complex` objects. The compiler calls the overloaded `operator+` function to perform the addition.

## Code 2: Overloading the `<<` (Stream Insertion) Operator
The `<<` operator is often used with `std::cout` for output. By overloading it, you can print objects of your class directly using `std::cout`.

```cpp
#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload the << operator
    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << c.real << " + " << c.imag << "i";
        return os;
    }
};

int main() {
    Complex c1(3.0, 4.0);
    std::cout << "c1 = " << c1 << "\n"; // Output: c1 = 3 + 4i

    return 0;
}
```

## Description
- **`friend std::ostream& operator<<(std::ostream& os, const Complex& c)`**: The `<<` operator is overloaded as a friend function. This allows direct access to the private members of the `Complex` class. The function takes a `std::ostream` reference and a `Complex` object, and it returns a `std::ostream` reference to allow chaining (e.g., `std::cout << c1 << c2;`).
- **Usage**: `std::cout << c1;` calls the overloaded `<<` operator, which formats and prints the `Complex` object.

## Code 3: Overloading the `==` (Equality) Operator
You can overload the `==` operator to compare two objects of your class.

```cpp
#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload the == operator
    bool operator==(const Complex& other) const {
        return (real == other.real) && (imag == other.imag);
    }
};

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(3.0, 4.0);
    Complex c3(1.0, 2.0);

    if (c1 == c2) {
        std::cout << "c1 and c2 are equal\n";
    } else {
        std::cout << "c1 and c2 are not equal\n";
    }

    if (c1 == c3) {
        std::cout << "c1 and c3 are equal\n";
    } else {
        std::cout << "c1 and c3 are not equal\n";
    }

    return 0;
}
```

## Description
- **`bool operator==(const Complex& other) const`**: The `==` operator is overloaded to compare the `real` and `imag` parts of two `Complex` objects. If both parts are equal, the function returns `true`; otherwise, it returns `false`.
- **Usage**: `if (c1 == c2)` calls the overloaded `==` operator to check if `c1` and `c2` are equal.

## Rules for Operator Overloading
- **Not all operators can be overloaded**: Operators like `.` (member access), `.*` (pointer-to-member access), `::` (scope resolution), `sizeof`, and `?:` (ternary conditional) cannot be overloaded.
- **At least one operand must be a user-defined type**: You cannot overload operators purely for built-in types (e.g., you can't change how `int + int` works).
- **Operators must be overloaded as member functions or friend functions**: Some operators, like `=` (assignment), must be overloaded as member functions, while others, like `<<`, are typically overloaded as friend functions.
- **Be mindful of operator precedence**: Overloading an operator doesn't change its precedence, so it will still follow C++'s rules for operator precedence and associativity.
