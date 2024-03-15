#include <bits/stdc++.h>
using namespace std;

void permutation(int* arr,int l,int r){

    if(l==r){
        for (size_t i = 0; i < 4; i++)
            printf("%d",arr[i]);
        printf("\n");
    }else{
        for (size_t i = l; i <= r; i++)
        {
            swap(arr[l],arr[i]);
            permutation(arr,l+1,r);
            swap(arr[l],arr[i]);
        }
        
    }   
        
}




int main(){
    int arr[] = {1,2,3,4};
    int n = 4;


    permutation(arr,0,n-1);
    
    
}

