# Preprocessor Directives and Macros
This C program demonstrates the use of macros for defining constants, platform-specific settings, and logging. It also shows how to use macros to enable debugging and manage code versions.

## Code
```c
#include <stdio.h>

// Basic macros
#define PI 3.14159  // Define a constant for the value of PI
#define MAX(a, b) ((a) > (b) ? (a) : (b))  // Define a macro to compute the maximum of two values

// Debugging and versioning
#define DEBUG  // Define a macro to enable debugging code
#define VERSION 3  // Define the version of the code

// Platform-specific macros
#if defined(_WIN32)  // Check if the code is being compiled for Windows
    #define PLATFORM "Windows"  // Define the platform as Windows
#elif defined(__linux__)  // Check if the code is being compiled for Linux
    #define PLATFORM "Linux"  // Define the platform as Linux
#elif defined(__APPLE__)  // Check if the code is being compiled for macOS
    #define PLATFORM "Mac OS"  // Define the platform as macOS
#else
    #define PLATFORM "Unknown"  // Define the platform as Unknown if none of the above are true
#endif

// Additional macros for testing
#define ENABLE_LOGGING  // Define a macro to enable logging
#define LOG_LEVEL 2  // Define the logging level (0 - OFF, 1 - ERROR, 2 - WARN, 3 - INFO, 4 - DEBUG)

// Macro for logging
#ifdef ENABLE_LOGGING  // Check if logging is enabled
    #define LOG(level, msg) do { \
        if (level <= LOG_LEVEL) { \
            printf("LOG [%d]: %s\n", level, msg); \
        } \
    } while(0)  // Define the LOG macro to print messages based on the log level
#else
    #define LOG(level, msg) // Define a placeholder for LOG if logging is not enabled
#endif

int main() {
    printf("Testing macros:\n");
    printf("PI = %f\n", PI);  // Print the value of PI
    printf("MAX(3, 5) = %d\n", MAX(3, 5));  // Print the result of MAX macro with arguments 3 and 5

    // Output platform information
    printf("Running on %s\n", PLATFORM);

    // Debug mode
    #ifdef DEBUG
    printf("Debug mode is enabled\n");
    #endif

    // Output version information
    #if VERSION == 1
    printf("Version 1\n");  // Print version 1
    #elif VERSION == 2
    printf("Version 2\n");  // Print version 2
    #else
    printf("Unknown Version\n");  // Print unknown version if VERSION is neither 1 nor 2
    #endif

    // Logging different levels
    LOG(4, "Debugging information");  // Log a message with DEBUG level
    LOG(3, "Informational message");  // Log a message with INFO level
    LOG(2, "Warning message");  // Log a message with WARN level
    LOG(1, "Error message");  // Log a message with ERROR level

    return 0;  // Return 0 to indicate successful completion
}
```

## Description
1. **Basic Macros:**
   - **`#define PI 3.14159`**: Defines a constant for the value of PI. This allows you to use `PI` in your code instead of the literal value.
   - **`#define MAX(a, b) ((a) > (b) ? (a) : (b))`**: Defines a macro to compute the maximum of two values. This macro takes two arguments, `a` and `b`, and evaluates to the greater of the two.

2. **Debugging and Versioning:**
   - **`#define DEBUG`**: Defines a macro named `DEBUG` to enable debugging-related code. If `DEBUG` is defined, debug messages can be included in the code.
   - **`#define VERSION 3`**: Defines a macro to indicate the version of the code. In this case, the version is set to 3.

3. **Platform-Specific Macros:**
   - **`#if defined(_WIN32)`**: Checks if the code is being compiled for Windows. If true, it defines the macro `PLATFORM` as `"Windows"`.
   - **`#elif defined(__linux__)`**: Checks if the code is being compiled for Linux. If true, it defines `PLATFORM` as `"Linux"`.
   - **`#elif defined(__APPLE__)`**: Checks if the code is being compiled for macOS. If true, it defines `PLATFORM` as `"Mac OS"`.
   - **`#else`**: If none of the above conditions are true, it defines `PLATFORM` as `"Unknown"`.

4. **Additional Macros for Testing:**
   - **`#define ENABLE_LOGGING`**: Defines a macro to enable logging.
   - **`#define LOG_LEVEL 2`**: Sets the logging level. Messages with levels less than or equal to `LOG_LEVEL` will be logged.

5. **Logging Macro:**
   - **`#ifdef ENABLE_LOGGING`**: Checks if logging is enabled. If true, defines the `LOG` macro.
   - **`#define LOG(level, msg)`**: Defines the `LOG` macro to print log messages based on the log level. If logging is enabled and the level of the message is less than or equal to `LOG_LEVEL`, it prints the message. Otherwise, it does nothing.

6. **Main Function (`main`):**
   - **`printf("PI = %f\n", PI);`**: Prints the value of PI.
   - **`printf("MAX(3, 5) = %d\n", MAX(3, 5));`**: Prints the result of the `MAX` macro with the arguments `3` and `5`.
   - **`printf("Running on %s\n", PLATFORM);`**: Prints the platform information based on the macro definitions.
   - **`#ifdef DEBUG`**: If debugging is enabled, prints a debug message.
   - **`#if VERSION == 1` / `#elif VERSION == 2` / `#else`**: Prints the version information based on the `VERSION` macro.
   - **`LOG(...)`**: Logs messages with various levels depending on the `LOG_LEVEL` macro.
