#include <stdio.h>

long long fac(int n){
    long long fac = 1;
    for (int i = 1; i <= n; i++)
        fac*=i;
    return fac;
}

void printSeries(int n){
    double sum = 0;

    for (int i = 1; i <= n; i++)
    {
        printf("%d/%d! + ",i,i);
        sum+=(double)i/fac(i);
    }
    printf("\b\b= %lf \n",sum);
}

int main(){
    printSeries(10);
}

