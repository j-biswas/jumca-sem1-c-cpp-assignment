#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char* rev_str(char* str, int n){
    char* str2 = (char*)malloc((n + 1) * sizeof(char)); 

    if(n == 0){
        return (char*)"\0"; 
        
    }
    else {
        str2[0] = str[n-1]; 
        strncpy(&str2[1], rev_str(str, n-1), n); 
        return str2;
    }
}

int main(){
    char arr[] = "hello";
    printf("%s\n", rev_str(arr, strlen(arr)));
    free(rev_str(arr, strlen(arr))); 
    return 0;
}
