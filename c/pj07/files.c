#include <stdio.h>
#include <stdlib.h>

#define PATH "fruits.txt" // filename


// define a structure to hold information about a fruit
typedef struct{
    char name[50];  // name of the fruit
    float price;    // price of the fruit
} fruit;


int main(){
    // FILE* name = fopen("filename.txt", "mode");
    FILE* input = fopen(PATH, "r"); // open the file for reading

    // check the file for corruption
    if(input == NULL){
        fprintf(stderr, "Error: While opening the file.\n");
        return 1;
    }

    // find out the number of lines
    int ch = 0, count = 0;
    while((ch = fgetc(input)) != EOF) // EOF - end of file
        if(ch == '\n') count++;

    // move the file flag to the beginning
    fseek(input, 0, SEEK_SET); // SEEK_SET - start of the file | SEEK_CUR - current position | SEEK_END - end of the file

    fruit fruits[count];

    // reading a file into a data structure
    for(int i = 0; i < count && fscanf(input, "%49s %f", fruits[i].name, &fruits[i].price) == 2; ++i);

    fclose(input); // close the file in "r" mode

    // print read data
    for(int j = 0; j < count; ++j)
        printf("%s costs %.2f EUR.\n", fruits[j].name, fruits[j].price);

    FILE* output = fopen("output.txt", "w"); // open the file for writing

    // check the output file for corruption
    if(output == NULL) {
        fprintf(stderr, "Error: While opening the file for writing.\n");
        return 1;
    }

    // writing data to the file
    for(int i = count - 1; i >= 0 && fprintf(output, "%s %.2f\n", fruits[i].name, fruits[i].price + 0.5) != -1; --i); // 0.5 price increase

    fclose(output); // close the file in "w" mode

    return 0;
}
