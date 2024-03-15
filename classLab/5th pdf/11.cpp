#include <iostream>
using namespace std;

class Marks {
protected:
    int rollNo;
    string name;
public:
    void getMarks() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter name: ";
        cin >> name;
    }
    void showMarks() {
        cout << "Roll number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

class Physics : public Marks {
public:
    float marks;
    void getMarks() {
        Marks::getMarks();
        cout << "Enter marks in Physics: ";
        cin >> marks;
    }
    void showMarks() {
        Marks::showMarks();
        cout << "Marks in Physics: " << marks << endl;
    }
};

class Chemistry : public Marks {
public:
    float marks;
    void getMarks() {
        Marks::getMarks();
        cout << "Enter marks in Chemistry: ";
        cin >> marks;
    }
    void showMarks() {
        Marks::showMarks();
        cout << "Marks in Chemistry: " << marks << endl;
    }
};

class Mathematics : public Marks {
public:
    float marks;
    void getMarks() {
        Marks::getMarks();
        cout << "Enter marks in Mathematics: ";
        cin >> marks;
    }
    void showMarks() {
        Marks::showMarks();
        cout << "Marks in Mathematics: " << marks << endl;
    }
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    Physics physics[numStudents];
    Chemistry chemistry[numStudents];
    Mathematics mathematics[numStudents];

    for (int i = 0; i < numStudents; i++) {
        physics[i].getMarks();
        chemistry[i].getMarks();
        mathematics[i].getMarks();
    }

    float totalMarks[numStudents];
    for (int i = 0; i < numStudents; i++) {
        totalMarks[i] = physics[i].marks + chemistry[i].marks + mathematics[i].marks;
    }

    float avgMarks = 0;
    for (int i = 0; i < numStudents; i++) {
        avgMarks += totalMarks[i];
    }
    avgMarks /= numStudents;

    for (int i = 0; i < numStudents; i++) {
        physics[i].showMarks();
        chemistry[i].showMarks();
        mathematics[i].showMarks();
        cout << "Total marks: " << totalMarks[i] << endl;
    }

    cout << "Average marks of the class: " << avgMarks << endl;

    return 0;
}