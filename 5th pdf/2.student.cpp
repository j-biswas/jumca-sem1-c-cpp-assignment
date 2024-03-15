#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        int marks[3];
    
        Student(string n,int r,int marks[3]) : name(n),roll(r){
            for (size_t i = 0; i < 3; i++)
                this->marks[i] = marks[i];
        }

        Student(){}

        void show_grade(){
            double avg = (marks[0] + marks[1] + marks[2])/3;
            char grade = ((avg>80)?'A':((avg>70)?'B':((avg>60)?'C':((avg>50)?'D':((avg>40)?'E':'F')))));

            cout<<name<<endl<<avg<<" "<< grade<<endl;            
        }
};

int main(){

    Student *students = new Student[3];

    int marks[] = {80,90,100};
    students[0] = Student("jaidip",1,marks);
    students[1] = Student("joydipta",2,marks);
    students[2] = Student("sayantan",3,marks);
    
    students[0].show_grade();

    delete[] students;

    return 0;

}