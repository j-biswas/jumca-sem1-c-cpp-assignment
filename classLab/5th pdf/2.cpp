#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    int marks[3];
    float average;
    char grade;

    void calculateAverage() {
        average = (marks[0] + marks[1] + marks[2]) / 3.0;
    }

    void calculateGrade() {
        if (average > 80) {
            grade = 'A';
        } else if (average > 70) {
            grade = 'B';
        } else if (average > 60) {
            grade = 'C';
        } else if (average > 50) {
            grade = 'D';
        } else if (average > 40) {
            grade = 'E';
        } else {
            grade = 'F';
        }
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Average: " << average << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student students[5];

    // Get student data from user
    for (int i = 0; i < 5; i++) {
        cout << "Enter student " << i + 1 << " data:" << endl;
        cout << "Roll No: ";
        cin >> students[i].rollNo;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Marks in three subjects: ";
        for (int j = 0; j < 3; j++) {
            cin >> students[i].marks[j];
        }
    }

    // Calculate average and grade for each student
    for (int i = 0; i < 5; i++) {
        students[i].calculateAverage();
        students[i].calculateGrade();
    }

    // Display student data
    for (int i = 0; i < 5; i++) {
        cout << endl;
        students[i].display();
        cout << "---------------------" << endl;
    }

    return 0;
}