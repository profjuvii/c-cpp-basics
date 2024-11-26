# Data Types

A **bit** is the smallest unit of information in computer systems that can have one of two values: 0 or 1. It serves as the fundamental building block for all types of digital data and is the foundation of the binary numeral system. Bits can encode various types of information, such as numbers, text, images, sound, etc.

There are also other units of information measurement composed of sets of bits, such as bytes, kilobytes, megabytes, etc.

### Table of Basic Units of Information:

| Unit               | Number of Bits         | Number of Bytes         |
|--------------------|------------------------|-------------------------|
| **Byte**           | 8 bits                 | 1 byte                  |
| **Kilobyte (kB)**  | 8192 bits              | 1024 bytes              |
| **Megabyte (MB)**  | 8,388,608 bits         | 1,048,576 bytes         |
| **Gigabyte (GB)**  | 8,589,934,592 bits     | 1,073,741,824 bytes     |
| **Terabyte (TB)**  | 8,796,093,022,208 bits | 1,099,511,627,776 bytes |

## Data Types in C

**Data types** in C define what kind of information a program can process and how it is stored in memory. All data types in C are represented as sequences of bits in memory.

### Main Categories of Data Types:

**1. Primitive Types (Basic Data):**
  - **Integer Types:** Store whole numbers (e.g., `int`, `unsigned int`).
  - **Floating-Point Types:** Store decimal numbers (e.g., `float`, `double`).
  - **Character Types:** Store ASCII characters (e.g., `char`).

2. **Derived Types:**
  - **Arrays:** Sequences of data of the same type.
  - **Pointers:** Memory addresses of variables.
  - **Structures:** Collections of variables of different types.
  - **Unions:** Store multiple variables in the same memory area.

3. **User-Defined Types:**
  - **Enumerations (Enums):** Sets of named integer constants.
  - **Typedefs:** Create new names for existing data types.

4. **Void Type:**
  - `void`: Used for functions that do not return a value.

In C, integers can be `signed` or `unsigned`, which determines whether the type can store negative values.

- **Signed Types:** 
  - Can store both positive and negative numbers.
  - The most significant bit (MSB) is used to determine the sign: `0` for positive and `1` for negative.
  - For example, for an 8-bit `signed char`, the range is from -128 to 127.

- **Unsigned Types:**
  - Used to store only non-negative numbers (positive values and zero).
  - All bits represent the value, which increases the maximum value that can be stored.
  - For example, for an 8-bit `unsigned char`, the range is from 0 to 255.

### Table of Primitive Data Types (for a 64-bit system):

| Data Type            | Size (Bytes) | Value Range                                             |
|----------------------|--------------|---------------------------------------------------------|
| `char`               | 1            | -128 to 127 (signed)                                    |
| `unsigned char`      | 1            | 0 to 255                                                |
| `short`              | 2            | -32,768 to 32,767                                       |
| `unsigned short`     | 2            | 0 to 65,535                                             |
| `int`                | 4            | -2,147,483,648 to 2,147,483,647                         |
| `unsigned int`       | 4            | 0 to 4,294,967,295                                      |
| `long`               | 8            | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |
| `unsigned long`      | 8            | 0 to 18,446,744,073,709,551,615                         |
| `long long`          | 8            | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |
| `unsigned long long` | 8            | 0 to 18,446,744,073,709,551,615                         |
| `float`              | 4            | ~ ±1.2×10⁻³⁸ to ±3.4×10³⁸                               |
| `double`             | 8            | ~ ±2.3×10⁻³⁰⁸ to ±1.7×10³⁰⁸                             |
| `long double`        | 16           | ~ ±3.4×10⁻⁴⁹³² to ±1.1×10⁴⁹³²                           |
