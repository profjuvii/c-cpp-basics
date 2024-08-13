#include <iostream>

using namespace std;

/*  template allows you to create generic 
    programs that can work with any data type, 
    which also helps avoid code duplication
    use the compiler option -std=c++11 or newer
*/

// function template to print a single argument followed by a newline
template<typename T> void print(T a) { /* also you can use template<class T> */
    cout << a << endl;
}

// function template to print multiple arguments separated by spaces
template<typename T, typename... Args> void print(T a, Args... args) { // template<typename... Args> is a variadic template
    cout << a << ' ';
    print(args...); // recursively call print for the remaining arguments
}

// // function variadic template to print multiple arguments separated by spaces
// template<typename... Args> void print(Args... args) {
//     ((cout << args << ' '), ...); // fold expression (use the compiler option -std=c++17 or newer)
//     cout << endl;
// }

int main() {
    print(100); // print a single integer
    print("Hello World!"); // print a single string
    print("Balance:", 1000.0f, '$'); // print multiple arguments with a label

    return 0;
}
