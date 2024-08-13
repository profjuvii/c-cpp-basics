#include <stdio.h>
#include <stdbool.h>


// function to check if a number is prime
bool is_prime(const int n){
    if(n <= 3)
        return n > 1;
    else if(n % 2 == 0 || n % 3 == 0)
        return false;
    for(int i = 5; i * i <= n; i += 6)
        if(n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}


// function to calculate factorial
int factorial(const int n){
    if(n <= 1)
        return n >= 0;
    return n * factorial(n - 1);
}


// function to calculate Fibonacci numbers
int fibonacci(const int n){
    if(n <= 0)
        return -1;
    int prev = 0, current = 1, temp = 0;
    for(int i = 1; i < n; ++i){
        temp = current;
        current += prev;
        prev = temp;
    }
    return current;
}


// main function
int main(){
    // printing prime numbers from 0 to 15
    for(int i = 0; i < 15; ++i)
        if(is_prime(i))
            printf("%d ", i);
    printf("\n");

    // calculating factorial and printing the result
    int num = 8;
    printf("%d! = %d\n", num, factorial(num));

    // printing Fibonacci sequence of length 20
    for(int i = 1; i <= 20; ++i)
        printf("%d ", fibonacci(i));
    printf("\n");

    return 0;
}
