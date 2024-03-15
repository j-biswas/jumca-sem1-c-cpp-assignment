#include <stdio.h>
#include <math.h>

int isPrime(int n){
    if(n==1) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if(n%i == 0 ) return 0;
    return 1;
}

void TotalNumberOfPrime(int n){
    int NoP=0;
    for (int i = 1; i <= n; i++){
        if ( isPrime(i)){
            NoP++;
            printf("%d ",i);
        }
    }
    printf("\n Total Number of Prime : %d",NoP);
}

int main(){
    TotalNumberOfPrime(100);
}