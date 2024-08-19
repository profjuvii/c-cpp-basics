# Standard Library (STL)
In this block, we will explore the C++ Standard Library (STL), which provides a powerful set of tools for handling data structures and algorithms. We will cover some of the most commonly used containers, such as `std::vector`, `std::list`, and `std::map`, as well as key algorithms like `std::sort` and `std::find`.

## 1. Containers
Containers in STL are data structures that store collections of objects. Each type of container has its own properties and is suitable for different tasks.

### 1.1 `std::vector`
`std::vector` is a dynamic array that can change size. It allows fast access to elements using an index, and it's efficient for adding elements at the end.

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5}; // Initialize a vector with values

    numbers.push_back(6); // Add an element at the end

    // Access and print elements using a range-based for loop
    for(int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
```

### 1.2 `std::list`
`std::list` is a doubly linked list, which allows efficient insertion and deletion of elements at both ends, but slower access to elements compared to `std::vector`.

```cpp
#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 20, 30, 40, 50}; // Initialize a list with values

    numbers.push_front(5);  // Add an element at the beginning
    numbers.push_back(60);  // Add an element at the end

    // Access and print elements using a range-based for loop
    for(int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
```

### 1.3 `std::map`
`std::map` is an associative container that stores elements in key-value pairs. Each key is unique, and values can be accessed using their corresponding keys.

```cpp
#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> ageMap; // Initialize a map with string keys and int values

    // Insert key-value pairs
    ageMap["Alice"] = 30;
    ageMap["Bob"] = 25;
    ageMap["Charlie"] = 35;

    // Access and print elements by key
    std::cout << "Alice's age: " << ageMap["Alice"] << "\n";

    // Iterate and print all key-value pairs
    for(const auto& pair : ageMap) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}
```

## 2. Algorithms
STL provides a variety of algorithms that can be applied to containers. These algorithms are implemented as template functions, which means they can work with different types of containers.

### 2.1 `std::sort`
`std::sort` sorts the elements in a range. It can be applied to any random-access container like `std::vector`.

```cpp
#include <iostream>
#include <vector>
#include <algorithm> // Include for std::sort

int main() {
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6}; // Initialize a vector with unsorted values

    std::sort(numbers.begin(), numbers.end()); // Sort the vector in ascending order

    // Print the sorted vector
    for(int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
```

### 2.2 `std::find`
`std::find` searches for an element in a range and returns an iterator to the first occurrence of the element.

```cpp
#include <iostream>
#include <vector>
#include <algorithm> // Include for std::find

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5}; // Initialize a vector with values

    // Find the element 3 in the vector
    auto it = std::find(numbers.begin(), numbers.end(), 3);

    if (it != numbers.end()) {
        std::cout << "Found number: " << *it << "\n";
    } else {
        std::cout << "Number not found\n";
    }

    return 0;
}
```

### 2.3 `std::for_each`
`std::for_each` applies a given function to each element in a range.

```cpp
#include <iostream>
#include <vector>
#include <algorithm> // Include for std::for_each

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5}; // Initialize a vector with values

    // Print each element using a lambda function
    std::for_each(numbers.begin(), numbers.end(), [](int num) {
        std::cout << num << " ";
    });
    std::cout << "\n";

    return 0;
}
```

## Summary
In this lesson, we covered the basics of the C++ Standard Library (STL), focusing on three important containers—`std::vector`, `std::list`, and `std::map`—and key algorithms like `std::sort`, `std::find`, and `std::for_each`. STL containers and algorithms are essential tools for efficient data manipulation and processing in C++.
