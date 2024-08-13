#include <iostream>
#include <cstdarg> // for ellipsis '...'

/*  directive that tells the compiler to use the entire std
    namespace, which includes standard C++ library functionsand
    objects, without having to prefix them with std::
*/
using namespace std;

// default arguments
void greet(const string name = "User") {
    cout << "Hello " << name << '!' << endl;
}

// passing parameters by reference
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// inline function for double increment
inline int double_increment(int& x) {
    return x += 2;
}

// function to calculate the average of variable arguments
double average(int count, ...) {
    va_list args;
    va_start(args, count);
    double sum = 0;
    for(int i = 0; i < count; ++i){
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum / count;
}

int main() {
    greet();        // without argument
    greet("Jack");  // with an argument

    // swapping the values of num1 and num2
    int num1 = 10, num2 = 20;
    cout << "Before:\t" << "num1 = " << num1 << ", address: "<< &num1;
    cout << "\t\tnum2 = " << num2 << ", address: "<< &num2 << endl;
    swap(num1, num2);
    cout << "After:\t" << "num1 = " << num1 << ", address: "<< &num1;
    cout << "\t\tnum2 = " << num2 << ", address: "<< &num2 << endl;

    // double increment
    double_increment(num1);
    cout << num1 << endl;

    // calculating average of variable arguments
    cout << "Average of 3, 4, and 5: " << average(3, 3, 4, 5) << endl;
    cout << "Average of 2, 3, 4, and 5: " << average(4, 2, 3, 4, 5) << endl;

    return 0;
}
