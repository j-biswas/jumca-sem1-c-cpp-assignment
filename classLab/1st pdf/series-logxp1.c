#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double cal_log(double x,int n){
    double res = 0;
    for (int i = 1; i <= n; i++){
        printf(" x^%d/%d! %c",i,i,(i%2)?'-':'+');
        res+=pow(-1,i+1)*pow(x,i)/tgamma(i+1);
    
    }
    printf("\b| x = %lf \n = %lf",x,res);
    return res;

}

int main(){
    cal_log(4,15);
}