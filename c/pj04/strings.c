#include <stdio.h>
#include <string.h> // strlen() gets the string length


int main(){
    // char name[] = "string";
    char person_name[10] = "Doreen"; // 'D', 'o', 'r', 'e', 'e', 'n', '\0', '\0', '\0', '\0'

    // gets the string length
    int length = strlen(person_name);
    printf("Length of the string: %d\n", length);
    
    // print the string
    printf("%s\n", person_name);

    // modifying the character at the zero position of the string
    person_name[0] = 'B';
    printf("Changed string: %s\n", person_name);

    // access to a specific string element
    char let = person_name[3];
    printf("Taken element: %c\n", let);

    return 0;
}
