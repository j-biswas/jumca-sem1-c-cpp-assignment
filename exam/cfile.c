#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Mydata{
    int roll;
    char* name;
}Mydata;


int main(){

    char* name1 = malloc(10*sizeof(char));
    char* name2 = malloc(10*sizeof(char));

    name1 = "joy";
    name2 = "prajesh";

    Mydata arr[2] = {{2,name1},{1,name2}};
    Mydata arr2[2];

    FILE *ptr1,*ptr2;
    ptr1 = fopen("file1.bin","w+");
 
    fwrite(arr,sizeof(Mydata),2,ptr1);

    fclose(ptr1);
    ptr2 = fopen("file1.bin","r+");

    fread(arr2,sizeof(Mydata),2,ptr2);

    printf("%s %s",arr2[0].name,arr2[1].name);

    fclose(ptr2);

}