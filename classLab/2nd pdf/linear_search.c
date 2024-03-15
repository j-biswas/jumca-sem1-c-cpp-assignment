#include <stdio.h>
#include <stdlib.h>

int search(int* arr,int n,int k){
    for (int i = 0; i < n; i++)
        if(arr[i]==k)
            return i;
    return -1;
}

int main(){
    int arr[] ={1,4,2,8,3};
    printf("%d",search(arr,5,4));
}