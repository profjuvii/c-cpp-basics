#include <stdio.h>
#include <string.h>


// define a union named object which can hold different types of data
union object{
    char name[20];
    float height, width, depth;
};


int main(){
    // declare a variable var of type union object
    union object var;

    // copy the string "Samsung Galaxy S24" into the name field of the union
    strcpy(var.name, "Samsung Galaxy S24");
    printf("Name: %s\tAddress of name: %p\n", var.name, &var.name); // print the name and it's memory address

    // assign a value to the height field of the union
    var.height = 147;
    printf("Height: %.2f\tAddress of height: %p\n", var.height, &var.height); // print the height and it's memory address

    // assign a value to the width field of the union
    var.width = 70.6;
    printf("Width: %.2f\tAddress of width: %p\n", var.width, &var.width); // print the width and it's memory address

    // assign a value to the depth field of the union
    var.depth = 7.6;
    printf("Depth: %.2f\tAddress of depth: %p\n", var.depth, &var.depth); // print the depth and it's memory address

    // print the size of the union in bytes
    printf("Structure size in bytes: %lu\n", sizeof(union object));
    
    return 0;
}
