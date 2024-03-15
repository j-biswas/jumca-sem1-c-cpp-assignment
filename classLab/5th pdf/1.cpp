#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;
    double salary;

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Create an array of Employee objects
    Employee employees[3];

    // Initialize the array with employee data
    employees[0] = {1, "John Doe", 45000};
    employees[1] = {2, "Jane Smith", 60000};
    employees[2] = {3, "Michael Jones", 55000};

    // Display the name and ID of employees with salary above 50000
    cout << "Employees with salary above 50000:\n";
    for (int i = 0; i < 3; i++) {
        if (employees[i].salary > 50000) {
            cout << "ID: " << employees[i].id << endl;
            cout << "Name: " << employees[i].name << endl;
            cout << endl;
        }
    }

    return 0;
}
