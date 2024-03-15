#include <stdio.h>
#include <stdlib.h>
#define size 50
int n = 0;
void insert(int* arr,int k){
    int indx = -1;
    while(arr[++indx] <= k && indx < n);
    for (int i = n-1; i >=indx; i--)
        arr[i+1] = arr[i];     
    n++;
    arr[indx] = k;
     
}

int main(){
    int arr[] = {1,3,5,6,7,9,11,12};
    n = 8;
    insert(arr,4);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}