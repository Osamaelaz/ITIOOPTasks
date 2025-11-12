#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    int age;
    double salary;

public:
    // Setters
    void setId(int id) { this->id = id; }
    void setName(string name) { this->name = name; }
    void setAge(int age) { this->age = age; }
    void setSalary(double salary) { this->salary = salary; }

    // Getters
    int getId()  { return id; }
    string getName()  { return name; }
    int getAge()  { return age; }
    double getSalary()  { return salary; }

    void print()  {
        cout << "ID: " << id << "\nName: " << name
             << "\nAge: " << age << "\nSalary: " << salary << "\n";
    }
};

void printEmployee( Employee e) {
    cout << "ID: " << e.getId()
         << "\nName: " << e.getName()
         << "\nAge: " << e.getAge()
         << "\nSalary: " << e.getSalary() << endl;
}

int main() {
    Employee e1;

    e1.setId(10);
    e1.setName("Osama");
    e1.setAge(22);
    e1.setSalary(20000.0);

    cout << "Printing using member function:\n";
    e1.print();

    cout << "\nPrinting using standalone function:\n";
    printEmployee(e1);

    return 0;
}
