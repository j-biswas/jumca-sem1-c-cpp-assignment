#include <iostream>

using namespace std;

class Person {
public:
  string name;
  int age;


  void set(string name, int age) {
    this->name = name;
    this->age = age;
  }

  void introduce() {
    cout << "I am " << name << " and I am " << age << " years old." << endl;
  }
};

class Employee : virtual public Person {
public:
  string company;
  double salary;

  Employee(string name, int age, string company, double salary) {
    this->company = company;
    this->salary = salary;
  }

  void work() {
    cout << "I am working at " << company << " and my salary is " << salary << endl;
  }
};

class Student : virtual public Person {
public:
  string school;
  double gpa;

  Student(string name, int age, string school, double gpa){
    this->school = school;
    this->gpa = gpa;
  }

  void study() {
    cout << "I am studying at " << school << " and my GPA is " << gpa << endl;
  }
};

class Manager : public Employee, public Student {
public:
  string department;

  Manager(string name, int age, string company, double salary, string school, double gpa, string department) : Employee(name, age, company, salary), Student(name, age, school, gpa) {
    this->department = department;
  }

  void manage() {
    cout << "I am a manager in the " << department << " department." << endl;
  }
};

int main() {
  Manager john("John", 30, "Google", 100000, "Stanford University", 3.9, "Engineering");
  john.set("John",30);
  john.introduce();
  john.work();
  john.study();
  john.manage();

  return 0;
}
