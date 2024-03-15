#include <iostream>
using namespace std;

class Year{
    int yr;
    public:
        Year(int i){
            yr = i;
            
        }
        bool is_leap_year(int yr){
            return (yr%100)?((yr%4)?false:true):((yr%400)?false:true);
        }
        ~Year(){
            cout<<is_leap_year(yr);
        }
};

int main(){
    Year y1(2300);
}