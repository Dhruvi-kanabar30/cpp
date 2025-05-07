#include <iostream>
#include <map>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person {
protected:
    int employeeID;
public:
    Employee(string n, int a, int id) : Person(n, a), employeeID(id) {}
    void displayEmployee() {
        displayPerson();
        cout << "Employee ID: " << employeeID << endl;
    }
    int getID() {
        return employeeID;
    }
};

class Manager : public Employee {
    string department;
public:
    Manager(string n, int a, int id, string dept) : Employee(n, a, id), department(dept) {}
    void displayManager() {
        displayEmployee();
        cout << "Department: " << department << endl << endl;
    }
};

int main() {
    Manager m1("Dhruvi", 17, 300, "Engineering");
    Manager m2("Mahima", 18, 301, "Charted Accountent");
    Manager m3("Diya", 17, 302, "Manager");

    map<int, Manager*> managerMap;
    managerMap[m1.getID()] = &m1;
    managerMap[m2.getID()] = &m2;
    managerMap[m3.getID()] = &m3;

    cout << "Displaying all managers from map:\n\n";
    for (auto& pair : managerMap) {
        pair.second->displayManager();
    }


    cout<<endl<<"24CE050_dhruvikanabar"<<endl;
    return 0;
}
