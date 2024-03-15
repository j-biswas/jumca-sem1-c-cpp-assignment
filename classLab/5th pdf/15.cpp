#include <iostream>
using namespace std;

// Student abstract base class
class Student {
protected:
    string name;
    int roll_number;

public:
    Student(string name, int roll_number) {
        this->name = name;
        this->roll_number = roll_number;
    }

    virtual void display() = 0;
};

// Engineering derived class
class Engineering : public Student {
private:
    string branch;

public:
    Engineering(string name, int roll_number, string branch) : Student(name, roll_number) {
        this->branch = branch;
    }

    void display() {
        cout << "Engineering Student :" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Branch: " << branch << endl;
    }
};

// Medicine derived class
class Medicine : public Student {
private:
    string specialization;

public:
    Medicine(string name, int roll_number, string specialization) : Student(name, roll_number) {
        this->specialization = specialization;
    }

    void display() {
        cout << "Medicine Student :" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Specialization: " << specialization << endl;
    }
};

// Science derived class
class Science : public Student {
private:
    string major;

public:
    Science(string name, int roll_number, string major) : Student(name, roll_number) {
        this->major = major;
    }

    void display() {
        cout << "Science Student :" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Major: " << major << endl;
    }
};

int main() {
    // Create an array of pointers to Student objects
    Student *students[3];

    // Create objects of the derived classes and assign them to the array
    students[0] = new Engineering("John Doe", 101, "Computer Science");
    students[1] = new Medicine("Jane Smith", 102, "Cardiology");
    students[2] = new Science("Michael Jones", 103, "Physics");

    // Process the objects using the display() method
    for (int i = 0; i < 3; i++) {
        students[i]->display();
        cout << endl;
    }

    return 0;
}