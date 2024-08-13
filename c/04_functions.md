# Functions

## Overview
Functions are reusable blocks of code designed to perform specific tasks. In this section, we explore functions for checking prime numbers, calculating factorials, and generating Fibonacci numbers. Understanding these functions helps in mastering common algorithms and recursive problem-solving techniques in C programming.

## Prime Number Check, Factorial, and Fibonacci Sequence
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

### Description
**1. Prime Number Check (`is_prime()`):**
- **Purpose:** Determines if a number is prime.
- **Logic:** 
   - Returns `true` for numbers 2 and 3.
   - Eliminates even numbers and multiples of 3.
   - Uses a loop to check divisibility from 5 up to the square root of the number, incrementing by 6 to optimize checks.
   - Returns `false` if any divisor is found, otherwise returns `true`.

**2. Factorial Calculation (`factorial()`):**
- **Purpose:** Computes the factorial of a non-negative integer.
- **Logic:** 
   - Base case: If `n` is 0 or 1, returns 1.
   - Recursive case: Multiplies `n` by the factorial of `n - 1`.
   - Handles positive integers and returns the result.

**3. Fibonacci Sequence (`fibonacci()`):**
- **Purpose:** Generates the nth Fibonacci number.
- **Logic:** 
   - Returns -1 for non-positive input (error case).
   - Uses an iterative approach to compute Fibonacci numbers up to the nth position.
   - Maintains two variables to track previous and current values, updating them in each iteration.

**4. Main Function:**
   - **Prime Numbers:** Prints prime numbers from 0 to 14 using the `is_prime()` function.
   - **Factorial:** Computes and prints the factorial of 8 using the `factorial()` function.
   - **Fibonacci Sequence:** Prints the first 20 Fibonacci numbers using the `fibonacci()` function.
