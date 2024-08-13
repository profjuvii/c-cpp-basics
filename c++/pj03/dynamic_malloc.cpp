#include <iostream>

using namespace std;

void print_array(const int* num, const int size) {
    for(int i = 0; i < size; ++i)
        cout << num[i] << ' ';
    cout << endl;
}

int main() {
    int size = 10; // size of the array

    // type* name = new type[size];
    int* numbers = new int[size];

    // fill the entire array
    for (int i = 0; i < size; ++i) numbers[i] = i;

    // print the elements of the array
    print_array(numbers, size);

    // modifying the value at the zero position of the array
    numbers[0] = -100;
    cout << "Changed zero position: " << numbers[0] << endl;
    print_array(numbers, size);

    // access to a specific element of the array
    int number = numbers[3];
    cout << "Taken number: " << number << endl;

    // create a new array
    int new_size = 20;
    int* new_numbers = new int[new_size];

    // copy the contents of arr1 to arr2
    copy(numbers, numbers + size, new_numbers);
    print_array(new_numbers, new_size);

    // compare two arrays
    bool is_equal = equal(numbers, numbers + size, new_numbers);
    cout << is_equal << endl;

    // free memory
    delete[] new_numbers;
    delete[] numbers;

    return 0;
}
