#include <iostream>
#include <vector>

using namespace std;

// function to perform division
double division(int a, int b) {
    if (b == 0) {
        throw "Division by zero."; // throw an exception if division by zero is attempted
    }
    return static_cast<double>(a) / b;
}

// function to perform safe division with error handling
void safe_division(int a, int b) {
    try {
        double result = division(a, b);
        cout << "result of division: " << result << endl;
    } catch (const char* msg) {
        cerr << "error: " << msg << endl; // catch
    }
}

int main() {
    int num = 10;
    vector<int> nums {1, 2, 3, 4, 5, 0, 6}; // vector of denominators

    // loop through each denominator in the vector
    for (int i = 0; i < nums.size(); ++i) {
        safe_division(num, nums[i]); // perform safe division for each numerator and denominator pair
    }

    return 0;
}
