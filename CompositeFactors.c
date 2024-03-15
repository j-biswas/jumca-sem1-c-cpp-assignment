#include <stdio.h>
#include <math.h>

int isComposite(int n){
    if(n==1) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if(n%i == 0 ) return 1;
    return 0;
}

void compositeFactors(int n){
    printf("Number\tFactors\n");
    printf("----------------\n");

    for (int i = 2; i <= n; i++) {
        if (isComposite(i)) {
            printf("%d \t", i);
    
            for (int j = 2; j <= i; j++) {
                if (i % j == 0) {
                    printf("%d", j);
                    if (i != j) 
                        printf(", ");
                    
                }
            }

            printf("\n");
        }
    }
}
int main() {
   compositeFactors(20);

    return 0;
}