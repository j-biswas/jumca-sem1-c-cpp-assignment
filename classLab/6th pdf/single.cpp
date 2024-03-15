#include <iostream>

using namespace std;

class SingletonEg{
    int var1;

    static SingletonEg* ptr;
    static int ptr2;
    SingletonEg(){}

    public:
        SingletonEg(SingletonEg &obj) = delete;

        static SingletonEg* createObj(){
            if(ptr == NULL)
                ptr = new SingletonEg();
            return ptr;
        }

        void setData(int var1){
            this->var1=var1;
        
        }
        int getData(){
           return var1;
        }

        
};

SingletonEg* SingletonEg::ptr = NULL;

int main(){
    SingletonEg* ptr = SingletonEg::createObj();
    ptr->setData(5);
    cout<<ptr->getData();

    SingletonEg* ptr2 = SingletonEg::createObj();
    cout<<ptr->getData();
}