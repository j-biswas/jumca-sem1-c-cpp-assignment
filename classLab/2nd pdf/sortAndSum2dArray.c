#include <stdio.h>
#include <stdlib.h>
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) 
        for (int j = 0; j < n - i - 1; j++) 
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

}

void sortAndSumArrays(int** array1, int** array2, int** result,int r,int c) {
    int flat_array1[r*c], flat_array2[r*c], sum_array[r*c];

    for (int i = 0; i < r; i++) 
        for (int j = 0; j < c; j++) {
            flat_array1[i * c + j] = array1[i][j];
            flat_array2[i * c + j] = array2[i][j];
        }

    sortArray(flat_array1, r*c);
    sortArray(flat_array2, r*c);

    for (int i = 0; i < r*c; i++) 
        sum_array[i] = flat_array1[i] + flat_array2[i];

    // sortArray(sum_array, r*c);
    for (int i = 0; i < r; i++) 
        for (int j = 0; j < c; j++) {
            result[i][j] = sum_array[i * c + j];
        }
}

int main() {
    int r = 4,c = 4;

    int** arr1 = (int**)malloc(r*sizeof(int*));
    for (int i = 0; i < r; i++)
        arr1[i] = (int*)malloc(c*sizeof(int));
    
    int** arr2 = (int**)malloc(r*sizeof(int*));
    for (int i = 0; i < r; i++)
        arr2[i] = (int*)malloc(c*sizeof(int));

    int** result= (int**)malloc(r*sizeof(int*));
    for (int i = 0; i < r; i++)
        result[i] = (int*)malloc(c*sizeof(int));

    printf("Enter %dx%d elements for  matrix1 : ",r,c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d",&arr1[i][j]);

    printf("Enter %dx%d elements for  matrix2 : ",r,c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d",&arr2[i][j]);
        
    
    
    
    sortAndSumArrays(arr1, arr2, result,r,c);

 
    printf("Resulting array after sorting and summing:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
