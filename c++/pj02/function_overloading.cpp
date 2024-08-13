#include <iostream>

using namespace std;

// function to print an integer
void print(int a) {
    cout << a << endl;
}

// function to print two integers
void print(int a, int b) {
    printf("%d %d\n", a, b);
}

// function to print three integers
void print(int a, int b, int c) {
    printf("%d %d %d\n", a, b, c);
}

// inline function to add two integers
inline int add(int a, int b) {
    return a + b;
}

// inline function to add two floats
inline float add(float a, float b) {
    return a + b;
}

// inline function to add two doubles
inline double add(double a, double b) {
    return a + b;
}

int main() {
    // call the print functions
    print(10);
    print(10, 20);
    print(10, 20, 30);

    // call the add functions and storing the results
    int sum1 = add(10, 2);
    float sum2 = add(13.2f, 10.0f);
    double sum3 = add(107.72, 59.111);

    // print the sums
    cout << "Int sum: " << sum1 << endl;
    cout << "Float sum: " << sum2 << endl;
    cout << "Double sum: " << sum3 << endl;

    return 0;
}
