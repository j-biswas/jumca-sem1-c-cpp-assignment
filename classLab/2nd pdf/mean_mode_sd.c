#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double mean(double *arr,int n){
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum+= arr[i];
    return sum/n;
}

double sd(double *arr,int n){
    double m = mean(arr,n);
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum+=pow(arr[i]-m,2);
    return sqrt(sum/n);
}


double mode(double *arr,int n){
    double mode;
    int counter = 0,counter2 = 0;
    
    for (int i = 0; i < n; i++){
        counter = 0;
        for (int j = 0; j < n; j++)
            if(arr[j] == arr[i])
                counter++;
            
        if(counter>counter2) {
            mode = arr[i];
            counter2 = counter;
        }
   
    }
    return mode;
    
}




int main(){
    double arr[] = {1,5,2,5,7,8,8,8,6};
    printf("%lf\n",mean(arr,9));
    printf("%lf\n",sd(arr,9));
    printf("%lf\n",mode(arr,9));
}