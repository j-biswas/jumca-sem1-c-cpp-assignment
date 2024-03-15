#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isVowel(char a){
    char arr[] = {'a','e','i','o','u','A','E','I','O','U'};
    for (int i = 0; i < 10; i++)
        if (arr[i] == a) return 1;
    return 0;
}

void countVowelsAndCons(char *arr,int n){
    int vCount = 0,sp = 0;
    for (int i = 0; i < n; i++)
        if(isVowel(arr[i])) vCount++;
        else if(arr[i]==32) sp++;
    
    printf("Vowels : %d\nConsonant : %d",vCount,n-vCount-sp);
}

int main(){
    char arr[] = "my name is joy";
    countVowelsAndCons(arr,15);
}