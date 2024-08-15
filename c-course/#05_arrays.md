# Arrays and Strings
This section demonstrates the usage of arrays, strings, and matrices in C. Arrays and strings are fundamental data structures used to store collections of data, while matrices (2D arrays) extend this concept to handle tabular data. Understanding these concepts is crucial for efficient data handling and manipulation in C programming.

## Array Operations
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

### Description
**1. Array Initialization:**
   - **Purpose:** Initializes an array with predefined integer values.
   - **Logic:** Uses a one-dimensional array to store 10 integers.

**2. Array Size Calculation:**
   - **Purpose:** Computes the number of elements in the array.
   - **Logic:** Uses the `sizeof()` operator to determine the total size and element size.

**3. Array Manipulation:**
   - **Print Elements:** Displays all elements using the `print_array()` function.
   - **Modify Value:** Changes the value of the first element and prints the updated array.
   - **Access Element:** Retrieves and prints a specific element from the array.

## String Manipulation
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

### Description
**1. String Initialization:**
   - **Purpose:** Defines a string with a specified length.
   - **Logic:** Creates a character array with initial content `"Doreen"`.

**2. String Length:**
   - **Purpose:** Determines the number of characters in the string.
   - **Logic:** Uses `strlen()` to calculate the length.

**3. String Manipulation:**
   - **Print String:** Outputs the string.
   - **Modify Character:** Changes the first character and prints the updated string.
   - **Access Character:** Retrieves and prints a specific character from the string.

## Matrix Operations
```c
#include <stdio.h>

// Function to print a matrix
void print_matrix(const int rows, const int cols, const int matrix[][cols]) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; ++i) {
        printf("\t");
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Initialize a 2D array (matrix) of integers
    int A[][3] = {
        {12, 91, -33},
        {20, -48, 80}
    };

    // Calculate the dimensions of the matrix
    int rows = sizeof(A) / sizeof(A[0]);
    int cols = sizeof(A[0]) / sizeof(int);
    printf("Size of the array: %dx%d\n", rows, cols);

    // Print the matrix
    print_matrix(rows, cols, A);

    // Modify a specific value in the matrix
    A[0][1] = -100;
    printf("Changed value: %d\n", A[0][1]);
    print_matrix(rows, cols, A);

    // Access a specific element in the matrix
    int number = A[1][2];
    printf("Taken number: %d\n", number);

    // Add 5 to each element in the matrix
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) A[i][j] += 5;
    }
    print_matrix(rows, cols, A);

    return 0;
}
```

### Description
**1. Matrix Initialization:**
   - **Purpose:** Initializes a 2D array with integer values.
   - **Logic:** Creates a 2x3 matrix with specified values.

**2. Matrix Size Calculation:**
   - **Purpose:** Determines the number of rows and columns in the matrix.
   - **Logic:** Uses `sizeof()` to compute dimensions.

**3. Matrix Manipulation:**
   - **Print Matrix:** Displays the entire matrix using the `print_matrix()` function.
   - **Modify Value:** Changes a specific element and prints the updated matrix.
   - **Access Element:** Retrieves and prints a specific element from the matrix.
   - **Update Matrix:** Adds 5 to each element in the matrix and prints the updated matrix.
