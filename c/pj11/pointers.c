#include <stdio.h>


void print_numbers(const int num1, const int num2){
    printf("%d\t%d\n", num1, num2);
}


void swap(int* num1, int* num2){
    int temp = *num1;       // temporary variable to store the value of the first number
    *num1 = *num2;          // assigning the value of the second number to the first number
    *num2 = temp;           // assigning the value stored in the temporary variable to the second number
}


int main(){
    // type* name = value;
    int num1 = 10;          // integer variable
    int* ptr = &num1;       // pointer variable, that stores the address of num

    printf("Value: %d\t", num1);            // value of num
    printf("Memory address: %p\n", &num1);  // memory address of num
    printf("Value: %d\t", *ptr);            // value of num with the pointer
    printf("Memory address: %p\n", ptr);    // memory address of num with the pointer

    int num2 = 20;

    printf("Before:\t\t");
    print_numbers(num1, num2);

    swap(ptr, &num2);       // swapping the values of num1 and num2 using pointers

    printf("After:\t\t");
    print_numbers(num1, num2);

    return 0;
}
