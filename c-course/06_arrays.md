# Arrays and Strings
This code demonstrates how to work with one-dimensional arrays and strings in C, showcasing various operations such as initialization, modification, and accessing specific elements.

## Code 1: Working with Integer Arrays
```c
#include <stdio.h>

// Function to print the elements of an integer array
void print_array(const int num[], const int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", num[i]);
    }
    printf("\n");
}

int main() {
    // Initialize a one-dimensional array of integers
    int numbers[] = {71, 45, -2, 343, 52, 90, -87, 37, -111, 18}; 

    // Calculate the size of the array
    int size = sizeof(numbers) / sizeof(int);
    printf("Size of the array: %d\n", size);

    // Print the elements of the array
    print_array(numbers, size);

    // Modify the value at the zero position of the array
    numbers[0] = -100;
    printf("Changed zero position: %d\n", numbers[0]);
    print_array(numbers, size);

    // Access a specific element of the array
    int number = numbers[3];
    printf("Taken number: %d\n", number);

    return 0;
}
```

## Description
1. **`int numbers[] = {71, 45, -2, 343, 52, 90, -87, 37, -111, 18};`** - This line initializes an array of 10 integers. Each element is stored in consecutive memory locations.

2. **`int size = sizeof(numbers) / sizeof(int);`** - This calculates the number of elements in the array by dividing the total size of the array by the size of a single integer.

3. **`print_array(numbers, size);`** - This function prints each element of the array using a loop.

4. **`numbers[0] = -100;`** - The value of the first element in the array is modified from `71` to `-100`.

5. **`int number = numbers[3];`** - This accesses and stores the value at the fourth position (index 3) in the array, which is `343`.

## Code 2: Working with Strings in C
```c
#include <stdio.h>
#include <string.h> // For strlen() function

int main() {
    // Initialize a string
    char person_name[10] = "Doreen"; // 'D', 'o', 'r', 'e', 'e', 'n', '\0', '\0', '\0', '\0'

    // Get the length of the string
    int length = strlen(person_name);
    printf("Length of the string: %d\n", length);
    
    // Print the string
    printf("%s\n", person_name);

    // Modify the character at the zero position of the string
    person_name[0] = 'B';
    printf("Changed string: %s\n", person_name);

    // Access a specific character in the string
    char let = person_name[3];
    printf("Taken element: %c\n", let);

    return 0;
}
```

## Description
1. **`char person_name[10] = "Doreen";`** - This line initializes a character array (string) with the value "Doreen". The array size is 10, so it includes 4 unused elements filled with null characters (`'\0'`).

2. **`int length = strlen(person_name);`** - This calculates the length of the string "Doreen", excluding the null characters at the end. The result is `6`.

3. **`printf("%s\n", person_name);`** - This prints the entire string.

4. **`person_name[0] = 'B';`** - The first character of the string is modified from 'D' to 'B', changing the string from "Doreen" to "Boreen".

5. **`char let = person_name[3];`** - This accesses the fourth character in the string (index 3), which is 'e', and stores it in the variable `let`.
