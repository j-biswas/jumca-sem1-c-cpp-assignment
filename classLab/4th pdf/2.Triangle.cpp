#include <iostream>
#include<math.h>

using namespace std;

class Triangle
{
private:
    float side_a, side_b, side_c;

public:
    Triangle(float a, float b, float c)
    {
        side_a = a;
        side_b = b;
        side_c = c;
    }
    float cal_area(){
        float s = side_a/2 + side_b/2 + side_c/2;
        float area = sqrt(s*(s - side_a)*(s - side_b)*(s - side_c));
        return area;
    }

    float cal_perimeter(){
        return side_a+side_b+side_c;
    }

    void print_area();
    void print_perimeter();
};

void Triangle::print_area(){
    float area = cal_area();
    cout<<area<<" ";
}

void Triangle::print_perimeter(){
    float per = cal_perimeter();
    cout<<per<<" ";
}

int main(){
    Triangle t1(10,20,20);
    t1.print_area();
    t1.print_perimeter();

}