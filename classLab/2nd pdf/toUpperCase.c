#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toUpperCase(char* str) {
    for (int i = 0; i < strlen(str); i++)
        if (str[i]>=97 && str[i]<=122)
            str[i]+= 'A'-'a';
}

int main(){
    char str[] = {"hello there my name is joydipta "};
    toUpperCase(str);
    printf("%s",str);
}