#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long fac(int i){
    return tgamma(i+1);
}

unsigned long long combination(int n,int r){
    return (fac(n)/(fac(r)*fac(n-r)));
}

void printPascalsTriangle(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++)
            printf("%llu  ",combination(i,j));
        printf("\n");
    }
    
}

int main(){
    printPascalsTriangle(10);
}