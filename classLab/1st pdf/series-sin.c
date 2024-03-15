#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cal_sin(double x,int n){
    x = 3.14159265359 / 180 * x; //deg to radian
    double res =0;
    for (int i = 0; i < n; i++){
        printf(" x^%d/%d! %c",(2*i+1),(2*i+1),(i%2)?'+':'-');
        res+=pow(-1,i)*pow(x,(2*i+1))/tgamma(2*i+2);
    }
    printf("\b| x = %lf \n = %lf",x,res);
    return res;

}

int main(){
    cal_sin(30,10);
}