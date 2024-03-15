#include <stdio.h>
#include <stdlib.h>
void findDuplicates(int arr[], int N) {
    int max = INT_MIN;
    for (int i = 0; i < N; i++)
        if (arr[i]> max) max = arr[i];
    
    int *count = calloc((max+1),sizeof(int));  
    for (int i = 0; i <= N; i++) 
        if (arr[i] >= 0 && arr[i] <= N) count[arr[i]]++;  
        
    
    int NoD = 0,TD = 0;
    for (int i = 0; i <= N; i++) 
        if (count[i] > 1) {
            NoD++;
            TD+=count[i];
        }
        
    printf("Duplicates: %d \n",NoD);

    int *new_arr = calloc((N-TD),sizeof(int));
    int new_index = 0;
    for (int i = 0; i < N; i++)
        if(count[arr[i]]<2) new_arr[new_index++] = arr[i];
    
    for (int i = new_index-1; i >= 0 ; i--)
        printf("%d ",new_arr[i]);
    
}

int main() {
    int arr[] = {4,3,2,4,55,0,2,1};
    int N = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, N);
    return 0;
}