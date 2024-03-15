#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define NAME_SIZE 20
#define BUFFER_SIZE 100

typedef struct{
    char name[NAME_SIZE];
    int marks_all[5];
    int total_marks;
    int S_roll;
}STUDENT;


void sort_struct_arr(STUDENT *arr,int n){
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if(arr[i].total_marks <arr[j].total_marks){
                STUDENT temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}


int main(){
    STUDENT *Student_arr = (STUDENT*)malloc(100*sizeof(STUDENT));
    int ARR_INDX = 0;

    FILE *ptr = fopen("student_detail.txt","r+");

    
    while(!feof(ptr)){
        char arr[NAME_SIZE];
        int marks[5];
        int total = 0;
        int roll;

        char buffer[BUFFER_SIZE];

        fscanf(ptr,"%[^\n]\n",buffer);
        
        sscanf(buffer,"%[^','],%d,%d,%d,%d,%d,%d", arr, &roll, &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]);
        for (size_t i = 0; i < 5; i++)
            total+=marks[i];
        
        strcpy(Student_arr[ARR_INDX].name,arr);
        
        for (size_t i = 0; i < 5; i++) 
            Student_arr[ARR_INDX].marks_all[i] = marks[i];
        
        Student_arr[ARR_INDX].total_marks = total;
        Student_arr[ARR_INDX].S_roll = roll;

        ARR_INDX++;
       
    }

    sort_struct_arr(Student_arr,100);

    for (size_t i = 0; i < 100; i++)
        printf(" %s %d %d %lf\n", Student_arr[i].name,Student_arr[i].S_roll, Student_arr[i].total_marks ,(float)Student_arr[i].total_marks/5 );
    
    


}