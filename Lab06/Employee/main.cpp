#include <iostream>
#include <cstring>
using namespace std;

class Emp {
    int id;
    char name[20];
    int age;
    double salary;

public:
    Emp() {
        cout << "Default constructor called\n";
        id = 0;
        strcpy(name, "NoName");
        age = 18;
        salary = 0.0;
    }

    Emp(int id, char* name) {
        cout << "Constructor (id, name) called for " << name << endl;
        setId(id);
        setName(name);
        age = 18;
        salary = 0.0;
    }

    Emp(int id, char* name, int age) {
        cout << "Constructor (id, name, age) called for " << name << endl;
        setId(id);
        setName(name);
        setAge(age);
        salary = 0.0;
    }

    Emp(int id, char* name, int age, double salary) {
        cout << "Constructor (id, name, age, salary) called for " << name << endl;
        setId(id);
        setName(name);
        setAge(age);
        setSalary(salary);
    }

    // Setters
    void setId(int i) { id = (i > 0) ? i : 0; }
    void setName(char* n) {
        if (strlen(n) < 20)
            strcpy(name, n);
        else {
            strncpy(name, n, 19);
            name[19] = '\0';
        }
    }
    void setAge(int a) { age = (a >= 18 && a <= 60) ? a : 18; }
    void setSalary(double s) { salary = (s >= 0) ? s : 0.0; }

    // getters
    int getId() { return id; }
    char* getName() { return name; }
    int getAge() { return age; }
    double getSalary() { return salary; }

    // destructor
    ~Emp() {
        cout << "\n****Destructor called for Employee: " << name << endl;
    }
};


// Call by value
void myFunByValue(Emp e) {//Copy Constructor
    cout << "\nEmployee Data:\n";
    cout << "ID: " << e.getId() << endl;
    cout << "Name: " << e.getName() << endl;
    cout << "Age: " << e.getAge() << endl;
    cout << "Salary: " << e.getSalary() << endl;
}

// Call by Reference
void myFunByRef(Emp &e) {
    cout << "\nEmployee Data:\n";
    cout << "ID: " << e.getId() << endl;
    cout << "Name: " << e.getName() << endl;
    cout << "Age: " << e.getAge() << endl;
    cout << "Salary: " << e.getSalary() << endl;
}

// Call by Pointer
void myFunByPtr(Emp *e) {
    cout << "\nEmployee Data:\n";
    cout << "ID: " << e->getId() << endl;
    cout << "Name: " << e->getName() << endl;
    cout << "Age: " << e->getAge() << endl;
    cout << "Salary: " << e->getSalary() << endl;
}

// =============================
// Main function
// =============================
int main() {
    cout << "=== Object Creation ===" << endl;
    Emp e1(101, "Osama");
    Emp e2(102, "Elsaid", 25);
    Emp e3(103, "Mohamed", 28, 8500.50);

    cout << "\n=== Call by Value ===" << endl;
    myFunByValue(e1);

    cout << "\n=== Call by Reference ===" << endl;
    myFunByRef(e2);

    cout << "\n=== Call by Pointer ===" << endl;
    myFunByPtr(&e3);

    cout << "\n=== End of main ===" << endl;
    return 0;
}
