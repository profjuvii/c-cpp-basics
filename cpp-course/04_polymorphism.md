# Polymorphism
This C++ code demonstrates polymorphism through the use of virtual functions and inheritance.

## Code
```cpp
#include <iostream> // Include standard I/O library for input and output operations

// Base class named 'Shape'
class Shape {
public:
    // Virtual function to calculate area
    virtual int getArea() const {
        return 0; // Default implementation (can be overridden)
    }

    // Virtual function to display the shape type
    virtual void displayType() const {
        std::cout << "This is a generic shape.\n";
    }
};

// Derived class named 'Rectangle' that inherits from 'Shape'
class Rectangle : public Shape {
private:
    int width, height; // Dimensions of the rectangle

public:
    // Constructor to initialize the Rectangle
    Rectangle(int w, int h) : width(w), height(h) {}

    // Override the getArea function for Rectangle
    int getArea() const override {
        return width * height;
    }

    // Override the displayType function for Rectangle
    void displayType() const override {
        std::cout << "This is a rectangle.\n";
    }
};

// Derived class named 'Triangle' that inherits from 'Shape'
class Triangle : public Shape {
private:
    int width, height; // Dimensions of the triangle

public:
    // Constructor to initialize the Triangle
    Triangle(int w, int h) : width(w), height(h) {}

    // Override the getArea function for Triangle
    int getArea() const override {
        return (width * height) / 2;
    }

    // Override the displayType function for Triangle
    void displayType() const override {
        std::cout << "This is a triangle.\n";
    }
};

// Function to demonstrate polymorphism
void printShapeInfo(const Shape& shape) {
    shape.displayType();              // Call the appropriate displayType function
    std::cout << "Area: " << shape.getArea() << "\n"; // Call the appropriate getArea function
}

int main() {
    // Create objects of Rectangle and Triangle
    Rectangle rect(10, 5);
    Triangle tri(10, 5);

    // Demonstrate polymorphism
    printShapeInfo(rect); // Calls Rectangle's methods
    std::cout << "\n";
    printShapeInfo(tri);  // Calls Triangle's methods

    return 0; // Return 0 to indicate successful completion
}
```

## Description
1. **`#include <iostream>`** – This directive includes the Standard Input/Output library to enable the use of `std::cout` for displaying output.

### Base Class: `Shape`
2. **Class Definition:**
   - **`class Shape`** – The base class that serves as a blueprint for other shapes.
   
3. **Virtual Functions:**
   - **`virtual int getArea() const`** – A virtual function intended to be overridden in derived classes. It returns the area of the shape with a default implementation of `0`.
   - **`virtual void displayType() const`** – A virtual function that prints the type of shape. The base class provides a generic message, which can be overridden in derived classes.

### Derived Class: `Rectangle`
4. **Class Definition:**
   - **`class Rectangle : public Shape`** – This indicates that `Rectangle` is a derived class that publicly inherits from `Shape`.
   
5. **Private Members:**
   - **`int width, height;`** – These store the dimensions of the rectangle.

6. **Constructor: `Rectangle(int w, int h)`**
   - **`Rectangle(int w, int h) : width(w), height(h)`** – This constructor initializes the rectangle with the given width and height.

7. **Overridden Functions:**
   - **`int getArea() const override`** – Calculates and returns the area of the rectangle by overriding the base class’s `getArea()` function.
   - **`void displayType() const override`** – Prints the message "This is a rectangle." by overriding the base class’s `displayType()` function.

### Derived Class: `Triangle`
8. **Class Definition:**
   - **`class Triangle : public Shape`** – This indicates that `Triangle` is a derived class that publicly inherits from `Shape`.
   
9. **Private Members:**
   - **`int width, height;`** – These store the dimensions of the triangle.

10. **Constructor: `Triangle(int w, int h)`**
    - **`Triangle(int w, int h) : width(w), height(h)`** – This constructor initializes the triangle with the given width and height.

11. **Overridden Functions:**
    - **`int getArea() const override`** – Calculates and returns the area of the triangle by overriding the base class’s `getArea()` function.
    - **`void displayType() const override`** – Prints the message "This is a triangle." by overriding the base class’s `displayType()` function.

### Polymorphism Demonstration
12. **Function: `printShapeInfo(const Shape& shape)`**
    - **`void printShapeInfo(const Shape& shape)`** – A function that takes a `Shape` reference as an argument, demonstrating polymorphism by calling the correct overridden functions based on the actual object type passed.

### Main Function
13. **`int main()`** – The main function where execution begins.
    - **Create Objects:**
      - **`Rectangle rect(10, 5);`** – Creates a `Rectangle` object with width `10` and height `5`.
      - **`Triangle tri(10, 5);`** – Creates a `Triangle` object with width `10` and height `5`.
    - **Demonstrate Polymorphism:**
      - **`printShapeInfo(rect);`** – Calls `printShapeInfo` with a `Rectangle` object, triggering the overridden `displayType()` and `getArea()` methods of `Rectangle`.
      - **`printShapeInfo(tri);`** – Calls `printShapeInfo` with a `Triangle` object, triggering the overridden `displayType()` and `getArea()` methods of `Triangle`.

14. **Return Statement:**
    - **`return 0;`** – Returns `0` to indicate successful execution.
