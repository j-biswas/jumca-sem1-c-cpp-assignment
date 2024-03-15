#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int fibonacci_element(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    else return (fibonacci_element(n-1)+fibonacci_element(n-2));
}

void fibonacci(int n){
    for (int i = 1; i <= n; i++)
        printf(" %d ",fibonacci_element(i));    
}
int isPerfectSquare(int n){
    int root = sqrt(n);
    if (root * root == n)
        return 1; 
    else
        return 0; 
}

void displaySeries(int k){
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
    for (int i = 1; i < n; i++)
        if (isAmstrong(i)) printf("%d ",i);
}

void findDuplicates(int arr[], int N) {
    int max = INT_MIN;
    for (int i = 0; i < N; i++)
        if (arr[i]> max) max = arr[i];
    
    int *count = calloc((max+1),sizeof(int));  
    for (int i = 0; i <= N; i++) 
        if (arr[i] >= 0 && arr[i] <= N) count[arr[i]]++;  
        
    int NoD = 0,TD = 0;
    for (int i = 0; i <= N; i++) 
        if (count[i] > 1) {
            NoD++;
            TD+=count[i];
        }
        
    printf("Duplicates: %d \n",NoD);

    int *new_arr = calloc((N-TD),sizeof(int));
    int new_index = 0;
    for (int i = 0; i < N; i++)
        if(count[arr[i]]<2) new_arr[new_index++] = arr[i];
    
    for (int i = new_index-1; i >= 0 ; i--)
        printf("%d ",new_arr[i]);
}

int isPrime(int n){
    if(n==1) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if(n%i == 0 ) return 0;
    return 1;
}

void TotalNumberOfPrime(int n){
    int NoP=0;
    for (int i = 1; i <= n; i++){
        if ( isPrime(i)){
            NoP++;
            printf("%d ",i);
        }
    }
    printf("\n Total Number of Prime : %d",NoP);
}

int isComposite(int n){
    if(n==1) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if(n%i == 0 ) return 1;
    return 0;
}

void compositeFactors(int n){
    printf("Number\tFactors\n");
    printf("----------------\n");

    for (int i = 2; i < n; i++) {
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

int main(){
    int choice = 0;
    do{
        printf("\nAvailable choices :\n"
                " 1.\t Fibonacci Series. \n"
                " 2.\t Natural number is a square number, then it has to be the sum of Successive Odd Numbers starting from 1.\n"
                " 3.\t Armstrong number. \n"
                " 4.\t Count a total number of duplicate elements in that array.\n \t Then copy the elements except the duplicate elements of that array into another array and display this array in reverse order.\n"
                " 5.\t Generate all prime numbers below a limit. Count them.\n"
                " 6.\t Display the factors of all composite numbers below a limit in a tabular form.\n"
                "-1.\t Exit\n"
                "Enter yours choice : ");
                
        scanf("%d",&choice);
        switch (choice){
        case 1:
            int n;
            printf("Enter the number of elements : ");
            scanf("%d",&n);
            fibonacci(n);
            break;
        
        case 2:
            n = 0;
            printf("Enter the number of elements : ");
            scanf("%d",&n);
            displaySeries(n);
            break;

        case 3:
            n = 0;
            printf("Enter the upper limit : ");
            scanf("%d",&n);
            amstrongPrint(n);
            break;

        case 4:{
            n = 0;
            printf("Enter the size of the array : ");
            scanf("%d",&n);
            int arr[n];
            printf("Enter %d elements for the array : ",n);
            for (int i = 0; i < n; i++)
                scanf("%d",&arr[i]);
            findDuplicates(arr, n);
            break;
        }

        case 5:
            n = 0;
            printf("Enter upper limit : ");
            scanf("%d",&n);
            TotalNumberOfPrime(n);
            break;

        case 6:
            n = 0;
            printf("Enter upper limit : ");
            scanf("%d",&n);
            compositeFactors(20);(n);
            break;

        case -1:
            break;
        default:
            printf("Invalid choice ");
            break;
            return 0;
        }


    }while (choice != -1);
 
    
}