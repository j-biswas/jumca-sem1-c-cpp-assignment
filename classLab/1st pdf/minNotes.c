#include <stdio.h>
#include <stdlib.h>

void minNotes(int total){
    int arr[]= {1,2,5,10,20,50,100};
    for(int i=6;i>=0;i--){
        if(total/arr[i] && i>2) printf("%d rs. note required %d pic \n",arr[i],total/arr[i]);
        if(total/arr[i] && i<3) printf("%d rs. coin required %d pic \n",arr[i],total/arr[i]);
        total%=arr[i];
    }
}

int main(){
    minNotes(5336);
}