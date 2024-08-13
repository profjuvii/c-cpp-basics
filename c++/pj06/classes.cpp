#include <iostream>

using namespace std;

/*  class is an extensible template for creating objects,
    providing initial values for state (member variables) and 
    implementations of behavior (member functions or methods)
*/

// class that represents an employee
class Employee {
// private members are accessible only within the class itself
private:
    // member variables
    int id;
    float salary;
    string name;
    string email;
    bool is_active;

// public members are accessible from outside the class
public:
    // сonstructor that initializes member variables in the body of the constructor
    // Employee(int new_id, float new_salary, const string& new_name, const string& new_email = "-"){
    //     id = new_id;
    //     salary = new_salary;
    //     name = new_name;
    //     email = new_email;
    //     is_active = true;
    // }

    // constructor that initializes member variables using member initialization list
    Employee(int new_id, float new_salary, const string& new_name, const string& new_email = "-")
        : id(new_id), salary(new_salary), name(new_name), email(new_email), is_active(true) {
        cout << "Employee " << name << " created." << endl;
    }

    // destructor for the Employee class
    ~Employee() {
        cout << "Object " << id << " was destroyed." << endl;  
    }

    // getter methods to retrieve private member variables
    int get_id() const { return id; }
    float get_salary() const { return salary; }
    string get_name() const { return name; }
    string get_email() const { return email; }
    bool get_active() const { return is_active; }

    // setter methods to modify private member variables
    void set_id(int new_id) { id = new_id; }
    void set_salary(float new_salary) { salary = new_salary; }
    void set_name(string new_name) { name = new_name; }
    void set_email(string new_email) { email = new_email; }

    // method to deactivate an employee
    void deactivation() {
        if(is_active){
            is_active = false;
            cout << "Employee " << name << " has been deactivated in the system." << endl;
        }
    }

    // method to increase employee salary by a specified amount
    void increase_salary(float over) { 
        if(over > 0)
            salary += over;
        else
            cout << "Error: Salary increase cannot be negative." << endl;
    }
// protected allows the class itself and all it's subclasses to access the member
// protected:
};


void show_info(const Employee emp) {
    cout << "ID: " << emp.get_id()
        << "\n\tSalary: " << emp.get_salary()
        << "\n\tName: "<< emp.get_name() 
        << "\n\tEmail: "<< emp.get_email()
        << "\n\tIs Active: " << emp.get_active() << endl;
}


int main() {
    // creating an Employee objects and initializing it with provided values
    Employee emp1 = Employee(1, 900, "John", "john01@gmail.com");   // copy initialization
    Employee emp2(2, 420, "Gabriel");                               // direct initialization

    // print emps information
    show_info(emp1);
    show_info(emp2);
    
    // increasing employee's salary by 10 units
    emp1.increase_salary(10.0f);
    cout << "ID: " << emp1.get_id() << "\n\tSalary: " << emp1.get_salary() << endl;

    // deactivation of the employees
    emp1.deactivation();
    emp2.deactivation();

    return 0;
}
