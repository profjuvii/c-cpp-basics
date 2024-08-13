#include <iostream>

using namespace std;

// base class
class Shape {
public:
    // virtual method
    virtual void draw() const {
        cout << "Drawing a shape." << endl;
    }
};

// derived class Circle
class Circle : public Shape {
public:
    // Override the virtual function from the base class
    void draw() const override {
        cout << "Drawing a circle." << endl;
    }
};

// derived class Square
class Square final : public Shape {
public:
    // Override the virtual function from the base class
    void draw() const override {
        cout << "Drawing a square" << endl;
    }
};

void drawShape(const Shape& shape) {
    shape.draw(); // polymorphic call
}

int main() {
    Circle circle;
    drawShape(circle);

    Square square;
    drawShape(square);

    return 0;
}
