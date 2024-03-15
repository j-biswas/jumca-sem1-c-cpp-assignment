#include <stdio.h>
#include <math.h>

int isAmstrong(int n){
    int rem = 0,temp = n,sum = 0,digits =0;

    while(temp >0){
        digits++;
        temp/=10;
    }
    temp = n;
    while(temp >0){
        rem = temp%10;
        sum+=pow(rem,digits);
        temp/=10;
    }
    return n==sum;
}

void amstrongPrint(int n){
    for (int i = 1; i < n; i++){
        if (isAmstrong(i)) printf("%d ",i);
    }
}

int main(){
    amstrongPrint(5000);
    return 0;
}