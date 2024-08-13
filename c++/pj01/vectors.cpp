#include <iostream>
#include <vector>
#include <algorithm>

void print_vector(std::vector<int> vec) {
    for(int i = 0; i < vec.size(); ++i)
        std::cout << vec[i] << ' ';
    std::cout << std::endl;
}

int main() {
    // std::vector<type> name = {value1, value2, value3, ...}; (dynamic array)
    std::vector<int> vec {71, 45, -2, 343, 52, 90, -87, 37, -111, 18}; // uniform-initialization

    // push_back() method
    vec.push_back(20); // adds an element to the end of the vector
    print_vector(vec);

    // pop_back() method
    vec.pop_back(); // removes the last element of the vector
    print_vector(vec);

    // access elements by index
    int element = vec[0]; // accesses the element at index 0
    std::cout << "First element:\t" << element << std::endl;

    // at() method
    element = vec.at(1); // accesses the element at index 1
    std::cout << "Second element:\t" << element << std::endl;

    // front() method
    int first_element = vec.front(); // returns the first element
    std::cout << "First element:\t" << first_element << std::endl;

    // back() method
    int last_element= vec.back(); // returns the last element
    std::cout << "Last element:\t" << last_element << std::endl;

    // data() method
    int* ptr = vec.data(); // returns a pointer to the underlying array
    std::cout << "Address:\t" << ptr << std::endl;

    // size() method
    int size = vec.size(); // returns size of the array
    std::cout << "Size:\t" << size << std::endl;

    // empty() method
    bool is_empty = vec.empty(); // returns true if empty false otherwise
    std::cout << "Is empty:\t" << (is_empty ? "Yes" : "No") << std::endl;

    // resize() method
    vec.resize(vec.size() + 10); // resizes the vector
    print_vector(vec);

    // insert() method
    vec.insert(vec.begin() + 3, 555); // inserts element at specified position
    print_vector(vec);

    // erase() method
    vec.erase(vec.begin() + 3); // erases element at specified position
    print_vector(vec);

    vec.erase(vec.begin() + 0, vec.begin() + 4); // Erases elements in the range [start, end]
    print_vector(vec);

    // clear() method
    vec.clear(); // Removes all elements from the vector
    print_vector(vec);

    // sorting the array
    vec = {71, 45, -2, 343, 52, 90, -87, 37, -111, 18};
    std::sort(vec.begin(), vec.end());
    print_vector(vec);

    // finds the first occurrence of value
    auto pos = std::find(vec.begin(), vec.end(), 5);
    if(pos != vec.end())
        std::cout << "Value " << 5 << " found at index " << (pos - vec.begin()) << std::endl;
    else
        std::cout << "Value " << 5 << " not found in the vector" << std::endl;

    // memory sizes
    std::cout << "Vector:\t" << sizeof(std::vector<int>) << " bytes" << std::endl;

    return 0;
}
