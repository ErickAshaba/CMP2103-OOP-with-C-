#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void introduce() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class 1
class Employee : public Person {
protected:
    string jobTitle;

public:
    Employee(string n, int a, string job)
        : Person(n, a) {
        jobTitle = job;
    }

    void work() {
        cout << "Job Title: " << jobTitle << endl;
        cout << name << " is working." << endl;
    }
};

// Derived Class 2
class Manager : public Employee {
private:
    string department;

public:
    Manager(string n, int a, string job, string dept)
        : Employee(n, a, job) {
        department = dept;
    }

    void manageTeam() {
        cout << "Department: " << department << endl;
        cout << name << " is managing the team." << endl;
    }
};

// Main Function
int main() {

    // Creating Person object
    Person p("John", 25);

    cout << "PERSON DETAILS" << endl;
    p.introduce();

    cout << "\n";

    // Creating Employee object
    Employee e("Sarah", 30, "Accountant");

    cout << "EMPLOYEE DETAILS" << endl;
    e.introduce();
    e.work();

    cout << "\n";

    // Creating Manager object
    Manager m("David", 40, "Manager", "Finance");

    cout << "MANAGER DETAILS" << endl;

    // Inherited from Person
    m.introduce();

    // Inherited from Employee
    m.work();

    // Defined in Manager
    m.manageTeam();

    return 0;
}