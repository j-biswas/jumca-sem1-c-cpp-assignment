#include <stdio.h>

int equalSum(int n){
    for (int i = 1; i <= n; i++)
        if( i*(i-1)== ((i+1)+n)*(n-i)) return i;
    return -1;
}

int main(){
        printf("%d \n",equalSum(980));
    
    
// 1-> 1
// 8-> 6
// 49-> 35
// 288-> 204
// 1681-> 1189
// 9800-> 6930
// 57121-> 40391
}