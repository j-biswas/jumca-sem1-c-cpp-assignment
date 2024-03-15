#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char* arr,int n){
    for (int i = 0; i < n/2; i++)
        if(arr[i]!=arr[n-1-i]) return 0;
    
    return 1;
}
int main(){
    char str1[] ="avi";
    
    for (int i = 0; i < strlen(str1); i++)
         printf("%c",str1[strlen(str1)-1-i]);
    
    
    printf("\n%s",isPalindrome(str1,strlen(str1))?"true":"false");
}