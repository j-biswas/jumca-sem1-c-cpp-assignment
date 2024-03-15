#include <stdio.h>
#include <stdlib.h>

void evenOddSwap(int *arr,int n){
    for (int i = 0; i < n-1; i+=2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    
}

int main(){
    int arr[] ={1,2,3,4,5};
    evenOddSwap(arr,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    
}