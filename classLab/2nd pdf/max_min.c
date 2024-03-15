#include <stdio.h>
#include <stdlib.h>

int max(int* arr,int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
        if (max<arr[i]) max = arr[i];
    
    return max;
}

int min(int* arr,int n){
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
        if (min>arr[i]) min = arr[i];
    
    return min;
}

int main(){
    int arr[] = {2,4,6,8,33,5,9,4};
    printf("min : %d\nmax : %d\n",min(arr,8),max(arr,8));
}