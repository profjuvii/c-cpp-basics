#include <iostream>
#include <string>

int main() {
    // std::string name = "string";
    std::string person_name = "David";
    std::cout << "Name:\t" << person_name << std::endl;

    // access elements by index
    char character = person_name[0];
    std::cout << "Character:\t" << character << std::endl;

    // length() method (or size() method)
    int length = person_name.length(); // person_name.size()
    std::cout << "Length of the string:\t" << length << std::endl;

    // append() method
    person_name.append(" Swan");
    std::cout << "Full name:\t" << person_name << std::endl;

    // insert() method
    person_name.insert(0, "Robin ");
    std::cout << "Full name:\t" << person_name << std::endl;

    // erase() method
    person_name.erase(0, 6); // remove "Robin "
    std::cout << "Full name:\t" << person_name << std::endl;

    // substr() method
    std::string first_name = person_name.substr(0, 5); // take "David"
    std::cout << "First name:\t" << first_name << std::endl;

    // find() method
    int pos = person_name.find("Alex");
    std::cout << "Alex exist on:\t" << pos << std::endl;
    std::cout << "David exist on:\t" << person_name.find("Swan") << std::endl;

    // replace() method
    person_name.replace(6, 7, "Doreen");
    std::cout << "Full name:\t" << person_name << std::endl;

    // empty() method
    bool is_empty = person_name.empty();
    std::cout << "Is empty:\t" << is_empty << std::endl;

    // pop_back() method 
    person_name.pop_back();
    std::cout << "Full name:\t" << person_name << std::endl;

    // memory sizes
    std::cout << "Name:\t" << sizeof(person_name) << " bytes" << std::endl;
    std::cout << "String:\t" << sizeof(std::string) << " bytes" << std::endl;

    return 0;
}
