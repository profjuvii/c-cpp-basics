# Memory Management
Understanding memory management is crucial for writing efficient and reliable C++ programs. C++ provides both automatic and manual memory management mechanisms. This guide covers the essentials of memory management in C++, including dynamic memory allocation, deallocation, and common pitfalls.

## Static vs. Dynamic Memory Allocation
### Code 1: Static Memory Allocation
Static memory allocation occurs at compile time. The memory for variables is allocated when the program starts and deallocated when the program terminates. This is the default for local variables and global variables.

```cpp
#include <iostream>

int globalVar = 10; // Static allocation

int main() {
    int localVar = 5; // Static allocation
    std::cout << "Global Variable: " << globalVar << std::endl;
    std::cout << "Local Variable: " << localVar << std::endl;
    return 0;
}
```

### Code 2: Dynamic Memory Allocation
Dynamic memory allocation occurs at runtime. You request memory from the heap using `new` and release it using `delete`.

```cpp
#include <iostream>

int main() {
    // Dynamic memory allocation
    int* ptr = new int; // Allocate memory for an integer
    *ptr = 10; // Assign value to allocated memory
    
    std::cout << "Value: " << *ptr << std::endl;
    
    delete ptr; // Deallocate memory
    
    return 0;
}
```

## Dynamic Memory Allocation and Deallocation
### Allocating Memory
Use the `new` operator to allocate memory. It returns a pointer to the allocated memory.

**Single Variable:**
```cpp
int* p = new int; // Allocate memory for a single integer
```

**Array of Variables:**
```cpp
int* arr = new int[5]; // Allocate memory for an array of 5 integers
```

### Deallocating Memory
Use the `delete` operator to deallocate memory previously allocated with `new`. It is important to match each `new` with a corresponding `delete` to avoid memory leaks.

**Single Variable:**
```cpp
delete p; // Deallocate memory for a single integer
```

**Array of Variables:**
```cpp
delete[] arr; // Deallocate memory for an array of integers
```

## Common Pitfalls and Best Practices
### Memory Leaks
A memory leak occurs when you allocate memory but fail to deallocate it. This leads to wasted memory and can eventually cause your program to run out of memory.

```cpp
void leakMemory() {
    int* p = new int[100]; // Memory allocated
    // No delete[] p; -> Memory leak
}
```

**Best Practice:** Always pair each `new` with a corresponding `delete` or `new[]` with `delete[]`.

### Dangling Pointers
A dangling pointer is a pointer that references memory that has been deallocated. Accessing such memory can lead to undefined behavior.

```cpp
int* p = new int(10);
delete p;
std::cout << *p; // Undefined behavior: accessing deallocated memory
```

**Best Practice:** Set pointers to `nullptr` after deleting the memory they point to.

```cpp
delete p;
p = nullptr;
```

### Double Deletion
Double deletion occurs when you attempt to delete the same memory location more than once. This can lead to undefined behavior and crashes.

```cpp
int* p = new int;
delete p;
delete p; // Undefined behavior: double deletion
```

**Best Practice:** Set pointers to `nullptr` after deleting them to avoid accidental double deletion.

## Smart Pointers (C++11 and Later)
C++11 introduced smart pointers, which are part of the Standard Library and help manage memory more safely. They automatically handle memory deallocation and help prevent common memory management issues.

### Code 3: `std::unique_ptr`
A smart pointer that owns a unique resource. It cannot be copied, only moved.

```cpp
#include <memory>
#include <iostream>

int main() {
    std::unique_ptr<int> p = std::make_unique<int>(10);
    std::cout << "Value: " << *p << std::endl;
    // Memory is automatically deallocated when p goes out of scope
    return 0;
}
```

### Code 4: `std::shared_ptr`
A smart pointer that can share ownership of a resource with multiple pointers. The resource is deallocated when the last `std::shared_ptr` to it is destroyed.

```cpp
#include <memory>
#include <iostream>

int main() {
    std::shared_ptr<int> p1 = std::make_shared<int>(10);
    {
        std::shared_ptr<int> p2 = p1; // Shared ownership
        std::cout << "Value: " << *p2 << std::endl;
    } // p2 goes out of scope, but memory is not deallocated yet
    std::cout << "Value: " << *p1 << std::endl; // Memory still valid
    // Memory is automatically deallocated when p1 goes out of scope
    return 0;
}
```

### Code 5: `std::weak_ptr`
A smart pointer that does not affect the reference count of a `std::shared_ptr`. It is used to break circular references that can lead to memory leaks.

```cpp
#include <memory>
#include <iostream>

int main() {
    std::shared_ptr<int> p1 = std::make_shared<int>(10);
    std::weak_ptr<int> w1 = p1; // Create a weak pointer

    if (auto p2 = w1.lock()) { // Convert weak pointer to shared pointer
        std::cout << "Value: " << *p2 << std::endl;
    } else {
        std::cout << "Memory has been deallocated" << std::endl;
    }

    return 0;
}
```
