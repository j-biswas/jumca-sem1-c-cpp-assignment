
#include <stdio.h>
#include <stdlib.h>



void removeDuplicate(int* arr,int *size){
    int f_index = 0;

    for (int i = 0; i < *size; i++){
        int is_dup = 0;
        for (int j = 0; j < f_index; j++)
            if(arr[i]== arr[j])
                is_dup = 1;

        if(is_dup != 1){
            arr[f_index] = arr[i];
            f_index++;
        }
    }

    *size = f_index;
    arr = (int*)realloc(arr,*size);
}

void moveZerosAtEnd(int* arr,int *size){
    int f_index = 0;

    for (int i = 0; i < *size; i++)
        if(arr[i] != 0)
            arr[f_index++] = arr[i];

    for (int i = f_index ; i < *size; i++)
        arr[i] = 0;
    
}


int main() {
    int size = 0;
        printf("Enter array size : ");
        scanf("%d",&size);
    int* arr = (int*)malloc(size*sizeof(int));
    printf("Enter %d elements : ",size);
    for (int i = 0; i < size; i++)
        scanf("%d",&arr[i]);


    removeDuplicate(arr,&size);
    moveZerosAtEnd(arr,&size);
    for (int i = 0; i < size; i++)
        printf("%d ",arr[i]);

    printf("Modified size : %d ",size);
}