#include <stdio.h>
#include <stdlib.h> // atoi() string to integer | atol() string to long integer | atof() string to floating-point number


int main(int argc, char* argv[]){
    // argc - number of arguments passed through cmd line
    // argv - array of strings, where each element represents one of the cmd line arguments
    // where first argument argv[0] is always the name of the program itself

    // example with a constant where the second argument argv[1] is a constant
    if(argc == 2){
        int k = atoi(argv[1]);
        if(k != 0)
            for(int x = 0; x < 10; ++x) printf("Y(%d) = %d\n", x, k * x + 10);  // linear mathematical function y = k * x + b
    } else if(argc == 1){
        fprintf(stderr, "Error: No input argument.\n");
    } else{
        fprintf(stderr, "Error: Only one argument is required.\n");
    }

    return 0;
}
