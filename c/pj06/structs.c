#include <stdio.h>
#include <string.h> // strcpy() copies string (strncpy() copies part of a string without risking a buffer overflow)


// define a structure to hold information about a person
struct person{
    char name[20];      // person name
    char surname[20];   // person surname
    int age;            // person age
};


// define a structure using bit fields
struct color_settings{
    unsigned int red : 4;     // 4 bits for the red color
    unsigned int green : 4;   // 4 bits for the green color
    unsigned int blue : 4;    // 4 bits for the blue color
} __attribute__((packed));


int main(){
    // define and initialize person1 using designated initializers
    struct person person1 = {
        .name = "Alvina",
        .surname = "Antony",
        .age = 28
    };

    // define person2 and initialize its fields using strcpy() for strings and direct assignment for age
    struct person person2;
    strcpy(person2.name, "Cliff");
    strcpy(person2.surname, "Antony");
    person2.age = 31;

    // print information about person1 and person2
    printf("PERSON 1:\n\tName: %s\n\tSurname: %s\n\tAge: %d\n", person1.name, person1.surname, person1.age);
    printf("PERSON 2:\n\tName: %s\n\tSurname: %s\n\tAge: %d\n", person2.name, person2.surname, person2.age);

    // the compiler has aligned the structure size to the nearest multiple of 4 or 8 (depending on the compiler settings)
    printf("Structure size in bytes: %lu\n", sizeof(struct person));

    struct color_settings color;
    
    // set color values
    color.red = 12;    // 1100 in binary
    color.green = 6;   // 0110 in binary
    color.blue = 3;    // 0011 in binary
    
    // print color values
    printf("Red: %d\n", color.red);
    printf("Green: %d\n", color.green);
    printf("Blue: %d\n", color.blue);
    
    // print size of color_settings structure in bytes
    printf("Structure size in bytes: %lu\n", sizeof(struct color_settings));

    return 0;
}
