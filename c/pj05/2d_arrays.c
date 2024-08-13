#include <stdio.h>


void print_matrix(const int rows, const int cols, const int matrix[][cols]){
    printf("Matrix:\n");
    for(int i = 0; i < rows; ++i){
        printf("\t");
        for(int j = 0; j < cols; ++j)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}


int main(){
    // type name[][size] = {{val01, val02, val03}, {val11, val12, val13}, {val21, val22, val23}};
    int A[][3] = {
        {12, 91, -33},  // two-dimensional array of integers
        {20, -48, 80}
    };

    // calculation of the size of the 2D array
    int rows = sizeof(A) / sizeof(A[0]);
    int cols = sizeof(A[0]) / sizeof(int);
    printf("Size of the array: %dx%d\n", rows, cols);

    // print matrix
    print_matrix(rows, cols, A);

    // modifying the value of the matrix
    A[0][1] = -100;
    printf("Changed value: %d\n", A[0][1]);
    print_matrix(rows, cols, A);

    // access to a specific element of the matrix
    int number = A[1][2];
    printf("Taken number: %d\n", number);

    // add 5 to each even number
    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            A[i][j] += 5;
    print_matrix(rows, cols, A);

    return 0;
}
