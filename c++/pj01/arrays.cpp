#include <iostream>
#include <array>
#include <algorithm>

void print_array(std::array<int, 10> nums) {
    for(int i = 0; i < nums.size(); ++i)
        std::cout << nums[i] << ' ';
    std::cout << std::endl;
}

int main() {
    // std::array<type, size> name = {value1, value2, value3, ...}; (fixed array)
    std::array<int, 10> numbers = {71, 45, -2, 343, 52, 90, -87, 37, -111, 18};

    // access elements by index
    int element = numbers[0]; // accesses the element at index 0
    std::cout << "First element:\t" << element << std::endl;

    // at() method
    element = numbers.at(1); // accesses the element at index 1
    std::cout << "Second element:\t" << element << std::endl;

    // front() method
    int first_element = numbers.front(); // returns the first element
    std::cout << "First element:\t" << first_element << std::endl;

    // back() method
    int last_element= numbers.back(); // returns the last element
    std::cout << "Last element:\t" << last_element << std::endl;

    // data() method
    int* ptr = numbers.data(); // returns a pointer to the underlying array
    std::cout << "Address:\t" << ptr << std::endl;

    // fill() method
    numbers.fill(0); // fills the array with value 0
    print_array(numbers);

    // size() method
    int size = numbers.size(); // returns size of the array
    std::cout << "Size:\t" << size << std::endl;

    // empty() method
    bool is_empty = numbers.empty(); // returns true if empty false otherwise
    std::cout << "Is empty:\t" << (is_empty ? "Yes" : "No") << std::endl;

    // sorting the array
    std::array<int, 10> nums = {71, 45, -2, 343, 52, 90, -87, 37, -111, 18};
    std::sort(nums.begin(), nums.end());
    print_array(nums);

    // memory sizes
    std::cout << "Array:\t" << sizeof(std::array<int, 10>) << " bytes" << std::endl;

    return 0;
}
