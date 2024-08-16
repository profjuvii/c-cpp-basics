# Files
This C program demonstrates basic file handling operations, including reading data from a file, determining the file's length, modifying the data, and writing it back to the file. The program uses a structure to represent products, where each product has a name and a price.

## Code
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a product with a name and price
typedef struct {
    char name[20];
    float price;
} Product;

int main() {
    FILE *file;
    Product products[10];
    int i;

    // Open the file for reading
    file = fopen("products.txt", "r");
    if (file == NULL) {
        printf("Could not open file for reading.\n");
        return 1;
    }

    // Read the data from the file
    for (i = 0; i < 10; ++i) {
        fscanf(file, "%s %f", products[i].name, &products[i].price);
    }
    fclose(file); // Close the file after reading

    // Display the original data
    printf("Original Data:\n");
    for (i = 0; i < 10; ++i) {
        printf("%s %.2f\n", products[i].name, products[i].price);
    }

    // Modify the data: Increase all prices by 10%
    for (i = 0; i < 10; ++i) {
        products[i].price *= 1.10;
    }

    // Open the file for writing
    file = fopen("products.txt", "w");
    if (file == NULL) {
        printf("Could not open file for writing.\n");
        return 1;
    }

    // Write the modified data back to the file
    for (i = 0; i < 10; ++i) {
        fprintf(file, "%s %.2f\n", products[i].name, products[i].price);
    }
    fclose(file); // Close the file after writing

    // Reopen the file to determine its length
    file = fopen("products.txt", "r");
    if (file == NULL) {
        printf("Could not open file for reading.\n");
        return 1;
    }

    // Determine the length of the file
    fseek(file, 0, SEEK_END);  // Move to the end of the file
    long file_size = ftell(file); // Get the current position in the file
    printf("File size: %ld bytes\n", file_size);

    fclose(file); // Close the file

    return 0; // Return 0 to indicate successful execution
}
```

## Description
1. **Structure Definition (`Product`)** - The `Product` structure is defined to hold information about a product, including its name (a string of up to 19 characters) and its price (a floating-point number).

2. **File Reading**
   - The program opens a file named `products.txt` in read mode using `fopen`.
   - It reads 10 products from the file using `fscanf`, which scans formatted input from the file and stores it in the `products` array.
   - After reading, the file is closed using `fclose`.

3. **Displaying Original Data** - The original product data is displayed on the screen using a loop that iterates over the `products` array and prints each product's name and price.

4. **Modifying the Data** - The program then increases the price of each product by 10% using a simple loop that multiplies each product's price by 1.10.

5. **File Writing**
   - The program reopens the `products.txt` file, this time in write mode (`"w"`).
   - It writes the modified product data back to the file using `fprintf`, which formats and prints the data into the file.
   - The file is closed again after writing.

6. **Determining File Length**
   - The program reopens the file in read mode to determine its size.
   - It uses `fseek(file, 0, SEEK_END)` to move the file pointer to the end of the file.
   - `ftell(file)` returns the current position of the file pointer, which is the file's size in bytes.
   - The size is printed, and the file is closed.

7. **File Contents Example**
   - The initial contents of `products.txt` might look like this:
     ```
     Apple 2.50
     Banana 1.20
     Orange 3.00
     Milk 2.00
     Bread 1.50
     Butter 4.00
     Cheese 5.50
     Eggs 2.80
     Juice 3.30
     Coffee 6.00
     ```
   - After running the program, each price is increased by 10%, and the file's contents are updated accordingly.

## Explanation of Concepts
Here is a brief overview of the essential file handling functions used in C:
- **`fopen`**:
  - **Purpose**: Opens a file and returns a pointer to a `FILE` structure used for subsequent operations.
  - **Syntax**: `FILE *fopen(const char *filename, const char *mode);`
  - **Modes**: `"r"` (read), `"w"` (write), `"a"` (append), etc.

- **`fclose`**:
  - **Purpose**: Closes an open file and flushes any buffered data.
  - **Syntax**: `int fclose(FILE *stream);`
  - **Example**: `fclose(file);` closes the file `file` and releases associated resources.

- **`fgetc`**:
  - **Purpose**: Reads the next character from a file.
  - **Syntax**: `int fgetc(FILE *stream);`
  - **Example**: `char ch = fgetc(file);` reads a single character from `file`.

- **`fputc`**:
  - **Purpose**: Writes a single character to a file.
  - **Syntax**: `int fputc(int character, FILE *stream);`
  - **Example**: `fputc('A', file);` writes the character `'A'` to `file`.

- **`fscanf`**:
  - **Purpose**: Reads formatted input from a file, similar to `scanf` but from a file stream.
  - **Syntax**: `int fscanf(FILE *stream, const char *format, ...);`
  - **Example**: `fscanf(file, "%s %f", productName, &price);` reads a string and a float from `file`.

- **`fprintf`**:
  - **Purpose**: Writes formatted output to a file, similar to `printf` but for file streams.
  - **Syntax**: `int fprintf(FILE *stream, const char *format, ...);`
  - **Example**: `fprintf(file, "%s %.2f\n", productName, price);` writes a string and a float to `file`.

- **`fseek`**:
  - **Purpose**: Moves the file pointer to a specific position within the file.
  - **Syntax**: `int fseek(FILE *stream, long offset, int whence);`
  - **Parameters**: `offset` is the number of bytes to move, and `whence` determines the reference point (e.g., `SEEK_SET` for the start).

- **`ftell`**:
  - **Purpose**: Returns the current position of the file pointer in the file.
  - **Syntax**: `long ftell(FILE *stream);`
  - **Example**: `long position = ftell(file);` gets the current position of `file`.
