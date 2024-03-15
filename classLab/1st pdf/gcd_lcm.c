#include <stdio.h>

int gcd1(int a1,int a2){
    int x =1;
    for (int i = 2; i<=a1 && i<= a2; i++)
        if (a1 % i == 0 && a2 % i == 0)
            x = i;  
    return x;
}


int gcd2(int a1,int a2){
    while(a1 >0){
        int rem;
        if(a1>a2) rem = a1 % a2;
        else if (a1<a2) rem= a2 % a1;
        a2 = a1;
        a1 = rem;
    }
    return a2;
}

int gcd3(int a1,int a2){
    int x;
    while(a1!=a2){
        if(a1>a2) x = a1 - a2;
        else if (a1<a2) x = a2 - a1;
        a2 = a1;
        a1 = x;
    }
    return a2;
}



int lcm1(int* arr,int n){
    int mul =1;
    for (int i = 0; i<n; i++)
        mul*=arr[i];

    for (int i = 1; i<=mul; i++)
        for (int j = 0; j<n; j++){
            if(i%arr[j]!= 0) break;
            if(j==n-1) return i;
        }
            
    
}



int main(){
    printf("%d ",gcd3(10,36));
    int arr[] = {2,6,9,26};
    printf("%d ",lcm1(arr,4));
}