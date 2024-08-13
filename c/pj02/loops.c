#include <stdio.h>


int main(){
    int size = 5;
    int result = 0;

    // for loop | from 0 to (size - 1)
    for(int i = 0; i < size; ++i){
        result += i * i;
        printf("Iteration %d\tResult: %d\n", i, result);
    }
    printf("\n");

    // while loop | i is greater than or equal to 0
    int i = 8;
    while(i >= 0){
        printf("Index: %d\n", i);
        i--;
    }
    printf("\n");

    // do-while loop | from 2 to (size - 1)
    i = 2;
    do{
        printf("Index: %d\n", i);
        i++;
    } while(i < size);

    return 0;
}
