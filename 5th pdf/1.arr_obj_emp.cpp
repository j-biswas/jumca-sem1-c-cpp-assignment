#include <iostream>
#include <string>
using namespace std;

class Emp{
    public:
        int emp_id;
        string emp_name;
        int emp_sal;

};

int main(){
    Emp *employee = new Emp[3];

    employee[0].emp_id = 2;
    employee[0].emp_name = "joidip_patra";
    employee[0].emp_sal = 110000;

    employee[1].emp_id = 3;
    employee[1].emp_name = "joydipta_biswas";
    employee[1].emp_sal = 100000;

    employee[2].emp_id = 4;
    employee[2].emp_name = "sayantan_mondal";
    employee[2].emp_sal = 90000;

    
    for (size_t i = 0; i < 3; i++)
        if (employee[i].emp_sal >50000)
            cout<<employee[i].emp_name<<endl<<employee[i].emp_id<<endl;
        
        
    
    
}
