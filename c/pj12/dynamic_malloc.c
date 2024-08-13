#include <stdio.h>

/*  malloc() and calloc() allocate memory
    realloc() changes the memory size
    free() frees memory
    rand() randomly generates values
*/
#include <stdlib.h>


void print_array(const int* num, const int size){
    for(int i = 0; i < size; ++i)
        printf("%d ", num[i]);
    printf("\n");
}


int main(){
    int size = 10; // size of the array

    // type* name = (type*)malloc/calloc(size * sizeof(type));
    int* numbers = (int*)malloc(size * sizeof(int)); // allocation of memory block for 10 integers
    // int* numbers = (int*)calloc(10, sizeof(int)); // alloc... and initializes all bytes of this block to zeros

    size *= 2; // doubling in size

    // doubling the size of the memory block
    numbers = (int*)realloc(numbers, size * sizeof(int)); // if ptr == NULL then realloc() -> malloc() | if size == 0 then return NULL

    // fill the entire array
    for(int i = 0; i < size; ++i)
        numbers[i] = rand() % 100 + 1;

    // print the elements of the array
    print_array(numbers, size);

    // modifying the value at the zero position of the array
    numbers[0] = -100;
    printf("Changed zero position: %d\n", numbers[0]);
    print_array(numbers, size);

    // access to a specific element of the array
    int number = numbers[3];
    printf("Taken number: %d\n", number);

    // free memory
    free(numbers);

    return 0;
}
