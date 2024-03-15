#include <stdio.h>
#include <stdlib.h>

int* unionArr(int *arr1,int n1, int *arr2,int n2){
    int* arr = malloc((n1+n2)*sizeof(int));
    int indexCntr = 0;
    int c1 = 0,c2 = 0;

    while (c1<=n1 && c2<=n2)
        if(arr1[c1]>arr2[c2]) arr[indexCntr++] = arr2[c2++];
        else arr[indexCntr++] = arr1[c1++];

    while (c1<=n1) arr[indexCntr++] = arr1[c1++];

    while (c2<=n2) arr[indexCntr++] = arr2[c2++];
    
    return arr;
}

int main(){
    int arr1[] = {1,4,5,7,8};
    int arr2[] = {2,3,6,9,10,11};

    for (int i = 0; i < 11; i++)
        printf("%d ",unionArr(arr1,5,arr2,6)[i]);
        
    
}