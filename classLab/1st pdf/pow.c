#include <stdio.h>

long long power(int b,int e){
    long long res = 1;
    for (int i = 0; i < e; i++)
        res*= b;
    return res;
}

int main(){
    printf("%lli",power(2,32));
}