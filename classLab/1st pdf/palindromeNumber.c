#include <stdio.h>

int isPalindrome(int num){
    int temp =  num,rev = 0,t = 1;
    while(num>0){
        t *= 10;
        num/=10;
    }
    num = temp;
    while(num>0){
        t /= 10;
        rev += num%10 * t;
        num/=10;
    }
    return temp == rev;
}

int main(){
    printf("%s",isPalindrome(424)?"Palindrome":"Not palindrome");
}