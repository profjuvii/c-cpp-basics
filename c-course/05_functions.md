# Functions
This C program demonstrates how to work with three common mathematical concepts: prime numbers, factorials, and Fibonacci sequences. The code includes three functions that each handle one of these concepts, and the `main` function demonstrates their usage.

## Code
```c
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool is_prime(const int n) {
    if (n <= 3) {
        return n > 1;  // Numbers 2 and 3 are prime
    }
    
    if (n % 2 == 0 || n % 3 == 0) {
        return false; // Eliminate multiples of 2 and 3
    }

    // Check for factors from 5 up to the square root of n
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false; // Eliminate other factors
        }
    }

    return true; // If no factors found, n is prime
}

// Function to calculate the factorial of a number
int factorial(const int n) {
    if (n <= 1) return n >= 0; // Base case: factorial of 0 or 1 is 1
    return n * factorial(n - 1); // Recursive case
}

// Function to generate the nth Fibonacci number
int fibonacci(const int n) {
    if (n <= 0) return -1; // Error case for non-positive input
    int prev = 0, current = 1, temp = 0;

    // Iterative approach to find the nth Fibonacci number
    for (int i = 1; i < n; ++i) {
        temp = current;
        current += prev;
        prev = temp;
    }

    return current;
}

// Main function
int main() {
    // Print prime numbers between 0 and 14
    for (int i = 0; i < 15; ++i) {
        if (is_prime(i)) printf("%d ", i);
    }
    printf("\n");

    // Calculate and print the factorial of 8
    int num = 8;
    printf("%d! = %d\n", num, factorial(num));

    // Print the first 20 Fibonacci numbers
    for (int i = 1; i <= 20; ++i) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0; // Return 0 to indicate successful execution
}
```

## Description
1. **Prime Number Check Function (`is_prime`)**
   - **Purpose**: This function determines if a given number `n` is prime.
   - **Logic**:
     - For numbers less than or equal to 3, the function returns `true` (for 2 and 3) or `false` (for numbers 0, 1).
     - The function eliminates even numbers and multiples of 3 as non-prime.
     - It then checks divisibility by all numbers of the form `6k ± 1` up to the square root of `n`.
   - **Result**: The function returns `true` if the number is prime and `false` otherwise.

2. **Factorial Calculation Function (`factorial`)**
   - **Purpose**: This function computes the factorial of a given non-negative integer `n`.
   - **Logic**:
     - The base case returns 1 for `n` being 0 or 1.
     - The recursive case multiplies `n` by the factorial of `n-1`.
   - **Result**: The function returns the factorial of `n`. For example, `8! = 40320`.

3. **Fibonacci Number Generation Function (`fibonacci`)**
   - **Purpose**: This function generates the `n`th Fibonacci number.
   - **Logic**:
     - The function handles the error case where `n` is less than or equal to 0 by returning `-1`.
     - It uses an iterative approach, starting with `prev = 0` and `current = 1`, to compute the sequence.
     - The loop iterates to find the `n`th Fibonacci number.
   - **Result**: The function returns the `n`th Fibonacci number. For example, `fibonacci(1) = 1`, `fibonacci(2) = 1`, `fibonacci(3) = 2`, etc.

4. **Main Function (`main`)**
   - **Prime Numbers**: The program prints all prime numbers between 0 and 14 using the `is_prime` function.
   - **Factorial Calculation**: It calculates and prints the factorial of `8`.
   - **Fibonacci Sequence**: The program prints the first 20 Fibonacci numbers using the `fibonacci` function.
