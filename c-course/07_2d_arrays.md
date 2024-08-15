# 2D Arrays
This C code demonstrates various operations with 2D arrays (matrices), including initialization, printing, modification, and element access. It also shows how to perform arithmetic operations on matrix elements.

## Code
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

## Description
1. **`print_matrix` Function:**
   - **Definition:** This function takes the number of rows, columns, and a 2D array `matrix` as arguments and prints the matrix in a formatted way.
   - **Implementation:** 
     - It uses nested loops to iterate over the rows and columns of the matrix.
     - Each element is printed with a space between them, and a new line is printed after each row.

2. **Matrix Initialization:**
   - **Initialization:** The matrix `A` is declared and initialized with two rows and three columns:
     ```c
     int A[][3] = {
         {12, 91, -33},
         {20, -48, 80}
     };
     ```
   - This creates a 2D array with predefined values.

3. **Calculating Matrix Dimensions:**
   - **Rows Calculation:** `int rows = sizeof(A) / sizeof(A[0]);`
     - Calculates the number of rows by dividing the total size of the matrix by the size of one row.
   - **Columns Calculation:** `int cols = sizeof(A[0]) / sizeof(int);`
     - Calculates the number of columns by dividing the size of one row by the size of an integer.
   - **Print Dimensions:** The dimensions of the matrix are printed using `printf()`.

4. **Printing the Matrix:**
   - **`print_matrix` Call:** The matrix `A` is passed to the `print_matrix` function to display its contents.

5. **Modifying a Matrix Element:**
   - **Modification:** `A[0][1] = -100;`
     - Changes the value of the element in the first row, second column from `91` to `-100`.
   - **Print Changed Value:** The new value is printed, and the matrix is printed again to show the updated matrix.

6. **Accessing a Specific Element:**
   - **Element Access:** `int number = A[1][2];`
     - Accesses the element in the second row, third column (value `80`) and stores it in the variable `number`.
   - **Print Element:** The accessed value is printed.

7. **Updating All Matrix Elements:**
   - **Addition Operation:**
     - A nested loop iterates over all elements of the matrix.
     - **Update:** Each element is incremented by 5: `A[i][j] += 5;`.
   - **Print Updated Matrix:** The matrix is printed again to show the updated values.
