#include <iostream>

using namespace std;


int sum(int* arr,int n){
    if(n>0)
        return arr[n-1]+sum(arr,n-1);
    else return 0;
}

int main(){
    int arr[] = {10,20,30};

    cout<<sum(arr,3);

}