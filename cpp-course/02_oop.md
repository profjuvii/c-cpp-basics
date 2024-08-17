# Object-Oriented Programming
This C++ code introduces the basics of Object-Oriented Programming (OOP) by demonstrating how to define and use classes, objects, and member functions. OOP principles such as encapsulation and data abstraction are fundamental to many C++ programs.

## Code
```cpp
#include <iostream> // Include standard I/O library for input and output operations

// Define a class named 'Rectangle'
class Rectangle {
private:
    // Private members: width and height
    int width;
    int height;

public:
    // Constructor to initialize width and height
    Rectangle(int w, int h) : width(w), height(h) {}

    // Member function to calculate area
    int getArea() const {
        return width * height;
    }

    // Member function to calculate perimeter
    int getPerimeter() const {
        return 2 * (width + height);
    }

    // Member function to display the dimensions
    void display() const {
        std::cout << "Width: " << width << "\n";
        std::cout << "Height: " << height << "\n";
    }
};

int main() {
    // Create an object of the Rectangle class
    Rectangle rect(10, 5);

    // Display the dimensions of the rectangle
    rect.display();

    // Display the area of the rectangle
    std::cout << "Area: " << rect.getArea() << "\n";

    // Display the perimeter of the rectangle
    std::cout << "Perimeter: " << rect.getPerimeter() << "\n";

    return 0; // Return 0 to indicate successful completion
}
```

## Description
1. **`#include <iostream>`** – This directive includes the Standard Input/Output library, which provides functionality for input and output operations using streams like `std::cout`.

2. **Class Definition: `Rectangle`**
   - **Private Members:**
     - **`int width;`** and **`int height;`** – These are private data members of the class, meaning they can only be accessed by member functions of the class. They store the dimensions of the rectangle.
   - **Public Members:**
     - **Constructor: `Rectangle(int w, int h)`** – This is a constructor that initializes the `width` and `height` of the rectangle. It is called when an object of the class is created.
     - **`int getArea() const`** – This member function calculates and returns the area of the rectangle. The `const` keyword indicates that this function does not modify any member variables.
     - **`int getPerimeter() const`** – This member function calculates and returns the perimeter of the rectangle. Like `getArea()`, it is also marked `const`.
     - **`void display() const`** – This member function prints the dimensions of the rectangle to the console.

3. **`int main()`** – The `main()` function is the entry point of the program.

   - **Create an Object:**
     - **`Rectangle rect(10, 5);`** – An object of the `Rectangle` class is created with width `10` and height `5`.

   - **Display Information:**
     - **`rect.display();`** – Calls the `display()` method to print the dimensions of the rectangle.
     - **`std::cout << "Area: " << rect.getArea() << "\n";`** – Calls the `getArea()` method to calculate and print the area of the rectangle.
     - **`std::cout << "Perimeter: " << rect.getPerimeter() << "\n";`** – Calls the `getPerimeter()` method to calculate and print the perimeter of the rectangle.
