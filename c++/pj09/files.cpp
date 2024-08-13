#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#define PATH "fruits.txt" // filename

using namespace std;

// define a structure to hold information about a fruit
typedef struct {
    char name[50];  // name of the fruit
    float price;    // price of the fruit
} fruit;


int main() {
    ifstream input(PATH); // open the file for reading

    // check the file for corruption
    if (!input.is_open()) {
        cerr << "Error: While opening the file." << endl;
        return 1;
    }

    // find out the number of lines
    int count = 0;
    string line;
    while (getline(input, line)) count++;

    input.clear();  // clear eof flag
    input.seekg(0, ios::beg); // move the file pointer to the beginning

    vector<fruit> fruits(count);

    // reading a file into a data structure
    for (int i = 0; i < count; ++i)
        input >> fruits[i].name >> fruits[i].price;

    input.close(); // close the file

    // print read data
    for (int j = 0; j < count; ++j)
        cout << fruits[j].name << " costs " << fruits[j].price << " EUR." << endl;

    ofstream output("output.txt"); // open the file for writing

    // check the output file for corruption
    if (!output.is_open()) {
        cerr << "Error: While opening the file for writing." << endl;
        return 1;
    }

    // writing data to the file
    for (int i = count - 1; i >= 0; --i) // 0.5 price increase
        output << fruits[i].name << " " << fruits[i].price + 0.5 << endl;

    output.close(); // close the file

    return 0;
}
