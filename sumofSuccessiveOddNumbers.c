#include <stdio.h>


void numGenerate(int n){
    for (int j = 1; j <= n; j++){
        int sum = 0;
        int cntr = 0;
        for (int i = 1;cntr < j ; i=i+2){
            printf("%d+",i);
            sum+=i;
            cntr++;
        }
        printf("\b = %d\n",sum);
 
    }
}
int main(){
    numGenerate(10);
    return 0;
}