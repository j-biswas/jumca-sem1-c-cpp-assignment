#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long double* fibo_formula(int n){
    long double* arr = malloc(n*sizeof(long double));

    double c1,c2,c3;
    c1 = (1 + sqrt(5)) / 2 ;
    c2 = (1 - sqrt(5)) / 2 ;
    c3 = 1 / sqrt(5);

    for (int i = 0; i < n; i++)
        arr[i] = (c3 * (pow(c1,i) - pow(c2,i)));

    return arr;
}

unsigned long long* fibo_gen(int n){
    unsigned long long* arr = malloc(n*sizeof(unsigned long long));

    for (int i = 0; i < n; i++)
        if(i==0) arr[i] = 0;
        else if(i==1) arr[i] = 1;
        else arr[i] = arr[i-1] + arr[i-2];

    return arr;
}


int main(){
    int count = 9;
    int isSame = 1;
    printf("\nUsing Formula : ");
    for (int i = 0; i < count; i++)
        printf("%.15Lf ",fibo_formula(count)[i]);

    printf("\nWithout Using Formula : ");
    for (int i = 0; i < count; i++)
        printf("%llu ",fibo_gen(count)[i]);

   
    for (int i = 0; i < count; i++)
        if(round(fibo_formula(count)[i])!= fibo_gen(count)[i]){
            isSame=0;
            break;
        }
    printf("\n%s",(isSame)?"Both are same":"Both are not same");
    
    
}