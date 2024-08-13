#include <stdio.h>


void print_array(const int num[], const int size){
    for(int i = 0; i < size; ++i)
        printf("%d ", num[i]);
    printf("\n");
}


int main(){
    // type name[] = {value1, value2, value3, ...};
    int numbers[] = {71, 45, -2, 343, 52, 90, -87, 37, -111, 18}; // one-dimensional array of integers

    // calculation of the size of the array
    int size = sizeof(numbers) / sizeof(int);
    printf("Size of the array: %d\n", size);

    // print the elements of the array
    print_array(numbers, size);

    // modifying the value at the zero position of the array
    numbers[0] = -100;
    printf("Changed zero position: %d\n", numbers[0]);
    print_array(numbers, size);

    // access to a specific element of the array
    int number = numbers[3];
    printf("Taken number: %d\n", number);

    return 0;
}
