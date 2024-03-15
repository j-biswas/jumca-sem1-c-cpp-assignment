#include <iostream>
using namespace std;

class Complex{
    float real;
    float img;

    public :
        Complex(){
            real =0;
            img =0;
        }

        Complex(int i){
            real = i;
            img = i;
        }

        Complex(int i,int j){
            real = i;
            img = j;
        }

        void show(){
            cout<<real<<"+"<<img<<"i" <<endl;
        }

        void add(Complex C){
            this->real += C.real;
            this->img += C.img;
        }
};

int main(){
    Complex c1(2,3),c2(3,5);
    c1.show();
    c2.show();

    c1.add(c2);
    c1.show();

}