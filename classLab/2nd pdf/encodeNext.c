#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encode(char* str){
    for (int i = 0; i < strlen(str); i++)
    if(str[i]>=97 && str[i]<=122 || str[i]>=65 && str[i]<=90 ||str[i]>=48 && str[i]<=57 )
        str[i]++;
}
int main(){
    char str[100] ;
    scanf("%[^\n]s",str);
    encode(str);
    printf("%s",str);
}