# Structures, Enumerations, Bit Fields, and Unions

## Overview
This section explores advanced data types in C, including structures, enumerations, bit fields, and unions. Structures group different types of data together, enumerations define a set of named integer constants, bit fields allow storage of data in a compact format, and unions provide a way to store different types of data in the same memory location.

## Code Examples

### Enumerations and Structures
```c
#include <stdio.h>

// Define character classes using an enumeration
enum character_classes {
    PALADIN,
    MAGE,
    HEALER,
    DRUID,
    NECROMANCER
};

// Define a structure to represent a player
struct player {
    enum character_classes class;  // Character class of the player
    char name[30];                 // Name of the player
    int hp;                        // Health points of the player
};

int main() {
    // Initialize a player instance
    struct player player = {
        .class = PALADIN,
        .name = "Aurora Faithguard",
        .hp = 100
    };

    // Print player information
    printf("Name: %s\nClass: %d\nHP: %d\n", player.name, player.class, player.hp);

    // Print memory addresses of player's attributes
    printf("Address of name:\t%p\n", &player.name);
    printf("Address of class:\t%p\n", &player.class);
    printf("Address of hp:\t\t%p\n", &player.hp);

    // Print size of enum and structure
    printf("Enumeration size in bytes: %lu\n", sizeof(enum character_classes));
    printf("Structure size in bytes: %lu\n", sizeof(struct player));

    // Print size of PALADIN
    printf("%lu\n", sizeof(PALADIN));

    return 0;
}
```

### Description
- **Enumeration `character_classes`:** Defines a set of constants to represent different character classes.
- **Structure `player`:** Contains attributes for a player, including class, name, and health points (HP).
- **Initialization and Printing:**
   - Initializes a `player` variable and prints its attributes.
   - Displays memory addresses of structure fields.
   - Shows size of the enumeration and structure, and the size of `PALADIN`.

### Structures and Bit Fields
```c
#include <stdio.h>
#include <string.h> // For strcpy()

// Define a structure to hold information about a person
struct person {
    char name[20];      // Person's name
    char surname[20];   // Person's surname
    int age;            // Person's age
};

// Define a structure using bit fields
struct color_settings {
    unsigned int red : 4;     // 4 bits for red color
    unsigned int green : 4;   // 4 bits for green color
    unsigned int blue : 4;    // 4 bits for blue color
} __attribute__((packed));

int main() {
    // Initialize person1 with designated initializers
    struct person person1 = {
        .name = "Alvina",
        .surname = "Antony",
        .age = 28
    };

    // Initialize person2 using strcpy() and direct assignment
    struct person person2;
    strcpy(person2.name, "Cliff");
    strcpy(person2.surname, "Antony");
    person2.age = 31;

    // Print person information
    printf("PERSON 1:\n\tName: %s\n\tSurname: %s\n\tAge: %d\n", person1.name, person1.surname, person1.age);
    printf("PERSON 2:\n\tName: %s\n\tSurname: %s\n\tAge: %d\n", person2.name, person2.surname, person2.age);

    // Print size of the person structure
    printf("Structure size in bytes: %lu\n", sizeof(struct person));

    // Initialize and set color values using bit fields
    struct color_settings color;
    color.red = 12;    // 1100 in binary
    color.green = 6;   // 0110 in binary
    color.blue = 3;    // 0011 in binary
    
    // Print color values
    printf("Red: %d\n", color.red);
    printf("Green: %d\n", color.green);
    printf("Blue: %d\n", color.blue);
    
    // Print size of the color_settings structure
    printf("Structure size in bytes: %lu\n", sizeof(struct color_settings));

    return 0;
}
```

### Description
- **Structure `person`:** Contains personal details such as name, surname, and age.
- **Structure `color_settings`:** Uses bit fields to compactly store RGB color values.
- **Initialization and Printing:**
   - Initializes and prints data for two `person` variables.
   - Displays size of `person` structure.
   - Sets and prints RGB color values using bit fields and shows size of `color_settings`.

### Unions
```c
#include <stdio.h>
#include <string.h> // For strcpy()

// Define a union named object which can hold different types of data
union object {
    char name[20];
    float height, width, depth;
};

int main() {
    // Declare a variable of type union object
    union object var;

    // Copy a string into the name field
    strcpy(var.name, "Samsung Galaxy S24");
    printf("Name: %s\tAddress of name: %p\n", var.name, &var.name);

    // Assign values to other fields
    var.height = 147;
    printf("Height: %.2f\tAddress of height: %p\n", var.height, &var.height);

    var.width = 70.6;
    printf("Width: %.2f\tAddress of width: %p\n", var.width, &var.width);

    var.depth = 7.6;
    printf("Depth: %.2f\tAddress of depth: %p\n", var.depth, &var.depth);

    // Print the size of the union in bytes
    printf("Union size in bytes: %lu\n", sizeof(union object));
    
    return 0;
}
```

### Description
- **Union `object`:** Can hold different types of data in the same memory location.
- **Usage:**
   - Demonstrates how to store and access different types of data (string and floating-point numbers) using a union.
   - Displays values and addresses for different fields of the union.
   - Prints the size of the union.
