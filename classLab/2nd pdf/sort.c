#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int* arr,int n){
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if(arr[i]<arr[j]){
                arr[i] = arr[j]+arr[i];
                arr[j] = arr[i]-arr[j];
                arr[i] = arr[i]-arr[j];
            }
}

int main(){
    int arr[] = {1,5,32,6,9,2};
    int n = 6;
    bubble_sort(arr,n);
    for (int i = 0; i < n; i++)
        printf("%d ",arr[i]);
    
    
}
