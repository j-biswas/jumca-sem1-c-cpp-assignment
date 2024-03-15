#include <iostream>

using namespace std;

class Circle{
    private:
        float r;

    public:
        void set_radius(float r){
            this->r = r;
        }
        float cal_area(){
            return 3.14*r*r;
        }

};

int main(){
    Circle C;
    C.set_radius(10);
    cout<<C.cal_area();
}