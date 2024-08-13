#include <stdio.h>


int main(){
    // if-else statements
    int x = 10;

    if(x == 5)
        printf("x = 5\n");
    else if(x > 5)
        printf("x > 5\n");
    else
        printf("x < 5\n");

    // ternary operator
    x = 10;
    int y = x > 5 ? 1 : 0; // type name = condition ? value1 : value2;
    printf("y = %d\n", y);

    // switch statement
    char operator = '+';
    int num1 = 10, num2 = 5;
    int result = 0;

    switch(operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Error: Unknown operator.\n");
            return 1;
    }
    printf("Result: %d\n", result);

    return 0;
}
