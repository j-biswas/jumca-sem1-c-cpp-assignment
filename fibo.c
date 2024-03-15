#include <stdio.h>

int fibonacci_element(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    else return (fibonacci_element(n-1)+fibonacci_element(n-2));
}

void fibonacci(int n){
    for (int i = 1; i <= n; i++)
        printf(" %d ,",fibonacci_element(i));    
}



