#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convertCase(char* str){
    for (int i = 0; i < strlen(str); i++)
    if(str[i]>=97 && str[i]<=122)
        str[i]-= 32;
    else if(str[i]>=65 && str[i]<=90)
        str[i]+= 32;
}
int main(){
    char str[] = {"Today is 27 of September Output"};
    convertCase(str);
    printf("%s",str);
}