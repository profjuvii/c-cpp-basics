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
### Prime Number Function: `is_prime`
- **Purpose:** To check whether a given number `n` is prime.
- **Logic:**
  - If `n` is less than or equal to 3, the function checks if `n` is greater than 1, since 2 and 3 are the smallest primes.
  - If `n` is divisible by 2 or 3, it is not prime.
  - For numbers greater than 3, the function checks divisibility by all numbers of the form `6k ± 1` up to the square root of `n`.
- **Return Value:** Returns `true` if `n` is prime; otherwise, returns `false`.

### Factorial Function: `factorial`
- **Purpose:** To calculate the factorial of a given number `n`.
- **Logic:**
  - The factorial of a number is the product of all positive integers less than or equal to that number.
  - The function uses recursion, where `factorial(n)` calls `factorial(n-1)` until it reaches the base case (`n <= 1`), returning `1`.
  - For `n < 0`, it returns `0`, handling negative inputs.
- **Return Value:** The factorial of `n`.

### Fibonacci Function: `fibonacci`
- **Purpose:** To calculate the nth number in the Fibonacci sequence.
- **Logic:**
  - The function returns `-1` for non-positive inputs to indicate an error.
  - For positive values, it uses an iterative approach to calculate the Fibonacci sequence, starting with `0` and `1` and continuing to sum the previous two numbers.
- **Return Value:** The nth Fibonacci number.

### Main Function: `main`
- **Prime Numbers:** The program prints all prime numbers between 0 and 14 by calling `is_prime()` within a loop.
- **Factorial Calculation:** The factorial of 8 is calculated using the `factorial()` function and the result is printed.
- **Fibonacci Sequence:** The first 20 Fibonacci numbers are generated and printed using the `fibonacci()` function.
