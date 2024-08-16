# Enums, Structures, Bit Fields, and Unions
This section provides an overview of key structured types in C: enumerations, structures, bit fields, and unions. These structured types facilitate more organized and efficient management of related data within a C program.

## Enums
This C code demonstrates how to use enumerations and structures to represent and manipulate data in a program. It also shows how to access memory addresses and sizes of different data types.

### Code
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
    printf("Address of name:\t%p\n", (void*)&player.name);
    printf("Address of class:\t%p\n", (void*)&player.class);
    printf("Address of hp:\t\t%p\n", (void*)&player.hp);

    // Print size of enum and structure
    printf("Enumeration size in bytes: %lu\n", sizeof(enum character_classes));
    printf("Structure size in bytes: %lu\n", sizeof(struct player));

    // Print size of PALADIN
    printf("%lu\n", sizeof(PALADIN));

    return 0;
}
```

### Description
1. **`enum character_classes`**:
   - This `enum` defines a set of named integer constants representing different character classes in a game. The constants are:
     - `PALADIN`
     - `MAGE`
     - `HEALER`
     - `DRUID`
     - `NECROMANCER`
   - By default, `PALADIN` is assigned `0`, `MAGE` is `1`, and so on.

2. **`struct player`**:
   - A `struct` is used to group related variables under one name. This structure represents a player in the game and contains:
     - **`enum character_classes class`** – The character class of the player, represented by the `enum` defined above.
     - **`char name[30]`** – An array of characters to store the player's name, allowing up to 29 characters plus a null terminator.
     - **`int hp`** – An integer to store the player's health points.

3. **Initialization**:
   - **`struct player player = { .class = PALADIN, .name = "Aurora Faithguard", .hp = 100 };`**:
     - Creates an instance of the `player` structure and initializes its members. The `class` is set to `PALADIN`, `name` is `"Aurora Faithguard"`, and `hp` is `100`.

4. **Printing Player Information**:
   - **`printf("Name: %s\nClass: %d\nHP: %d\n", player.name, player.class, player.hp);`**:
     - Displays the player's name, character class (as an integer), and health points.

5. **Memory Addresses**:
   - **`printf("Address of name:\t%p\n", (void*)&player.name);`**:
     - Prints the memory address of each attribute of the `player` structure using `&` to get the address and `(void*)` to cast it to a `void*` for proper printing.

6. **Size of Data Types**:
   - **`sizeof(enum character_classes)`**:
     - Prints the size of the `enum` in bytes. This size can vary depending on the system.
   - **`sizeof(struct player)`**:
     - Prints the size of the `player` structure in bytes, which includes the space for all its members and any padding added by the compiler.
   - **`sizeof(PALADIN)`**:
     - Prints the size of the `PALADIN` constant. Note that `sizeof(PALADIN)` will give the size of the integer type that represents the `enum` value, which is the same as `sizeof(int)`.

## Structures and Bit Fields
This C code provides an example of how to use structures to store related data, including a demonstration of bit fields within a structure for efficient memory usage.

### Code
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
#### Structure `person`
1. **Defining the `person` Structure:**
   - The structure `person` is defined to hold information about an individual.
   - It contains three fields:
     - `name[20]`: An array of 20 characters to store the person's first name.
     - `surname[20]`: An array of 20 characters to store the person's surname.
     - `age`: An integer to store the person's age.

2. **Initializing `person1`:**
   - `person1` is initialized using designated initializers, where the name, surname, and age fields are explicitly assigned.
   - Example:
     ```c
     struct person person1 = {
         .name = "Alvina",
         .surname = "Antony",
         .age = 28
     };
     ```

3. **Initializing `person2`:**
   - `person2` is initialized by first declaring the structure and then using the `strcpy()` function to copy the strings "Cliff" and "Antony" into the `name` and `surname` fields, respectively. The `age` is then directly assigned as `31`.

4. **Printing Person Information:**
   - The program prints the details of both `person1` and `person2` using `printf()`.

5. **Structure Size:**
   - The program calculates and prints the size of the `person` structure using `sizeof(struct person)`.

#### Structure `color_settings` with Bit Fields
6. **Defining the `color_settings` Structure:**
   - The `color_settings` structure is defined with bit fields, allowing the storage of small integers using fewer bits than a standard integer.
   - Fields:
     - `red`, `green`, `blue`: Each uses 4 bits to represent a color intensity (ranging from 0 to 15 in decimal, or 0000 to 1111 in binary).

7. **Packed Attribute:**
   - `__attribute__((packed))` is used to ensure that the structure does not contain any padding, so it occupies the minimum possible memory.

8. **Setting and Printing Color Values:**
   - The structure `color` is initialized, and the fields `red`, `green`, and `blue` are assigned specific values. These values are printed to show how the bit fields store the data.

9. **Structure Size:**
   - The program also calculates and prints the size of the `color_settings` structure using `sizeof(struct color_settings)`. Due to the use of bit fields and the `packed` attribute, this structure occupies less memory than it would otherwise.

## Unions
This C code demonstrates the use of unions, which are a special data type in C that allows different data types to be stored in the same memory location. The code illustrates how a union can hold different types of data and shows how memory is shared among the union members.

### Code
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
1. **Union Definition:**
   - **`union object`** – A union is defined with the name `object`, which contains different members:
     - **`char name[20]`** – A character array (string) that can hold up to 19 characters plus a null terminator.
     - **`float height, width, depth;`** – Three float variables for height, width, and depth.

   The union `object` can hold one of these members at any given time, but all members share the same memory location.

2. **Union Variable Declaration:**
   - **`union object var;`** – A variable `var` of type `union object` is declared. This variable can be used to store either the string `name` or the float values `height`, `width`, and `depth`, but not all at the same time.

3. **String Assignment:**
   - **`strcpy(var.name, "Samsung Galaxy S24");`** – The `strcpy()` function is used to copy the string `"Samsung Galaxy S24"` into the `name` field of the union `var`.
   - **`printf("Name: %s\tAddress of name: %p\n", var.name, &var.name);`** – This line prints the value stored in `name` and the memory address where `name` is stored.

4. **Float Assignments:**
   - **`var.height = 147;`** – The `height` field of the union `var` is assigned the value `147`.
   - **`var.width = 70.6;`** – The `width` field is assigned the value `70.6`.
   - **`var.depth = 7.6;`** – The `depth` field is assigned the value `7.6`.

   After each assignment, the corresponding value and its memory address are printed. However, since all these fields share the same memory, the value of the previously assigned fields is overwritten by the new value.

5. **Union Size:**
   - **`printf("Union size in bytes: %lu\n", sizeof(union object));`** – This line prints the size of the union `object` in bytes. The size of a union is determined by the size of its largest member because all members share the same memory location.

### Key Points
- **Memory Sharing:** A union in C allows multiple data types to be stored in the same memory space, but only one member can hold a value at any given time. Assigning a value to one member overwrites the data in the other members.
- **Size of Union:** The size of a union is equal to the size of its largest member, which in this case is the character array `name[20]`.
- **Use Case:** Unions are useful when you need to work with multiple data types in the same memory location, and you are sure that only one of them will be used at any time.
