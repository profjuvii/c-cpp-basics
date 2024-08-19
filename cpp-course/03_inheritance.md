# Inheritance
This C++ code demonstrates the concept of inheritance, a fundamental principle of Object-Oriented Programming (OOP).

## Code
```cpp
#include <iostream> // Include standard I/O library for input and output operations

// Base class named 'Shape'
class Shape {
protected:
    int width, height; // Protected members accessible by derived classes

public:
    // Constructor to initialize width and height
    Shape(int w, int h) : width(w), height(h) {}

    // Virtual function to calculate area (to be overridden in derived classes)
    virtual int getArea() const {
        return 0; // Default implementation (can be overridden)
    }

    // Function to display dimensions
    void displayDimensions() const {
        std::cout << "Width: " << width << "\n";
        std::cout << "Height: " << height << "\n";
    }
};

// Derived class named 'Rectangle' that inherits from 'Shape'
class Rectangle : public Shape {
public:
    // Constructor to initialize Rectangle, calling the base class constructor
    Rectangle(int w, int h) : Shape(w, h) {}

    // Override the getArea function for Rectangle
    int getArea() const override {
        return width * height;
    }
};

// Derived class named 'Triangle' that inherits from 'Shape'
class Triangle : public Shape {
public:
    // Constructor to initialize Triangle, calling the base class constructor
    Triangle(int w, int h) : Shape(w, h) {}

    // Override the getArea function for Triangle
    int getArea() const override {
        return (width * height) / 2;
    }
};

int main() {
    // Create objects of Rectangle and Triangle
    Rectangle rect(10, 5);
    Triangle tri(10, 5);

    // Display dimensions and area of the Rectangle
    std::cout << "Rectangle:\n";
    rect.displayDimensions();
    std::cout << "Area: " << rect.getArea() << "\n\n";

    // Display dimensions and area of the Triangle
    std::cout << "Triangle:\n";
    tri.displayDimensions();
    std::cout << "Area: " << tri.getArea() << "\n";

    return 0; // Return 0 to indicate successful completion
}
```

## Description
1. **`#include <iostream>`** – This directive includes the Standard Input/Output library to allow the use of `std::cout` for displaying output.

### Base Class: `Shape`
2. **Class Definition:**
   - **`protected int width, height;`** – These protected members can be accessed directly by derived classes. They store the dimensions of the shape.
   - **Constructor: `Shape(int w, int h)`** – Initializes the dimensions `width` and `height` when a `Shape` object (or any object of a derived class) is created.

3. **Virtual Function: `getArea()`**
   - **`virtual int getArea() const`** – This function is intended to be overridden in derived classes. It returns the area of the shape, with a default implementation returning `0`.

4. **Function: `displayDimensions()`**
   - **`void displayDimensions() const`** – Prints the dimensions of the shape to the console.

### Derived Class: `Rectangle`
5. **Class Definition:**
   - **`class Rectangle : public Shape`** – This indicates that `Rectangle` is a derived class that publicly inherits from `Shape`.

6. **Constructor: `Rectangle(int w, int h)`**
   - **`Rectangle(int w, int h) : Shape(w, h)`** – This constructor initializes the `Rectangle` by calling the constructor of the base class `Shape`.

7. **Override: `getArea()`**
   - **`int getArea() const override`** – This function overrides the base class’s `getArea()` function, providing the correct calculation for the area of a rectangle (`width * height`).

### Derived Class: `Triangle`
8. **Class Definition:**
   - **`class Triangle : public Shape`** – This indicates that `Triangle` is a derived class that publicly inherits from `Shape`.

9. **Constructor: `Triangle(int w, int h)`**
   - **`Triangle(int w, int h) : Shape(w, h)`** – This constructor initializes the `Triangle` by calling the constructor of the base class `Shape`.

10. **Override: `getArea()`**
    - **`int getArea() const override`** – This function overrides the base class’s `getArea()` function, providing the correct calculation for the area of a triangle (`(width * height) / 2`).

### Main Function
11. **`int main()`** – The main function where execution begins.
    - **Create Objects:**
      - **`Rectangle rect(10, 5);`** – Creates a `Rectangle` object with width `10` and height `5`.
      - **`Triangle tri(10, 5);`** – Creates a `Triangle` object with width `10` and height `5`.
    - **Display Dimensions and Area:**
      - **`rect.displayDimensions();`** – Displays the dimensions of the rectangle.
      - **`rect.getArea();`** – Calculates and displays the area of the rectangle.
      - **`tri.displayDimensions();`** – Displays the dimensions of the triangle.
      - **`tri.getArea();`** – Calculates and displays the area of the triangle.
