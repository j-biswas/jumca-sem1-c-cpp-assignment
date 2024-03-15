#include <stdio.h>

#include <math.h>

int isPerfectSquare(int n){
    int root = sqrt(n);
    if (root * root == n)
        return 1; 
    else
        return 0; 
}


void displaySeries(int k)
{
    int n = 1;
    int count = 0;
    while (count < k){
        if (isPerfectSquare(n)){
            count++;
            printf("%d = ", n);
            int sum = 0;
            int odd = 1;
            while (sum < n){
                sum += odd;
                if (sum < n)
                    printf("%d + ", odd);
                else
                    printf("%d\n", odd); 
                odd += 2;
            }
        }
        n++;
    }
}

int main()
{

    int k;

    printf("Enter the count of such numbers: ");

    scanf("%d", &k);

    displaySeries(k);

    return 0;
}
