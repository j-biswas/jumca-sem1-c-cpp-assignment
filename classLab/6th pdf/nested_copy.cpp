#include <iostream>

using namespace std;

class Y{
    int var1;
    int *var2;

    public:
        Y(){}
        void setData(int var1,int var2){
            this->var1= var1;
            this->var2 = &var2;
        }
        void getData(){
            cout<<var1<<" "<<*var2<<endl;
        }

        Y(Y& obj){
            this->var1= obj.var1;
            this->var2 = new int(*obj.var2);
        }
        
};

class X{
    
    Y obY;

    public:
        void deep_copy_y(Y &obj){
            obY = obj;
        }
        void setData(int var1,int var2){
            obY.setData(var1,var2);
        }
        void getData(){
            obY.getData();
        }

};

int main(){
    Y objY;
    objY.setData(10,20);

    X objX;
    objX.deep_copy_y(objY);

    objY.getData();
    objX.getData();
    

    objX.setData(15,20);

    objY.getData();
    objX.getData();

}