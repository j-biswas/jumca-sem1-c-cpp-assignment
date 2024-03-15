#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void PrintPrime(int n){
    int NoP=0;
    int *arr = calloc(n/2,sizeof(int));

    for (int i = 2; i <= n; i++){
        int is_prime = 1;
        for (int j = 0; arr[j]!=0 && arr[j]<=sqrt(n); j++){
            if (!(i%arr[j])){
                is_prime = 0;
                break;
            }
        }
        if(is_prime) arr[NoP++] = i;
    }

    for (int i = 0; i < NoP; i++)
        printf("%d ",arr[i]);
  
}

int main(){
    PrintPrime(40);
}