#include <iostream>
#include <string>

using namespace std;


// base class
class Animal {
protected:
    string name;
    float age;

public:
    // constructor for base class Animal
    Animal(const string& new_name, float new_age) : name(new_name), age(new_age) {}

    // getters
    string get_name() { return name; }
    float get_age() { return age; }
};


// derived class Bird
class Bird : public Animal {
public:
    // consructor for derived class Bird
    Bird(const string& new_name, float new_age) : Animal(new_name, new_age) {}

    // method specific to Bird
    void fly() const {
        cout << name << " is flying." << endl;
    }
};


// derived class Cat
class Cat : public Animal {
public:
    // consructor for derived class Cat
    Cat(const string& new_name, float new_age) : Animal(new_name, new_age) {}

    // method specific to Cat
    void purr() const {
        cout << name << " is purring." << endl;
    }
};


int main() {
    Bird bird("Canon", 2.0f);
    bird.fly();
    cout << "Age: " << bird.get_age() << endl;

    Cat cat("Lory", 2.6f);
    cat.purr();
    cout << "Age: " << cat.get_age() << endl;

    return 0;
}
