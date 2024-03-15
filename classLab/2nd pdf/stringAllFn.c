#include <stdio.h>
#include <stdlib.h>

int strlen(char str[]){
    int cntr = -1;
    while(str[++cntr] != '\0');
    return cntr;
}

void strcpy(char *str1,char *str2){
    for (int i = 0; str2[i] != '\0'; i++)
        str1[i] =str2[i];
    str1[strlen(str2)]='\0';
}

char* strcat(char *str1,char *str2){
    int n = strlen(str1)+strlen(str2); 
    char *str3 = (char*)malloc(n*sizeof(char));
    for (int i = 0; i < strlen(str1); i++)
        str3[i] = str1[i];
    for (int i = 0; i < strlen(str2); i++)
        str3[i+strlen(str1)] = str2[i];
    str3[n] = '\0';
    return str3;
}

void strrev(char *str){
    for (int i = 0; i < strlen(str)/2; i++)
    {
        char temp = str[i];
        str[i] = str[strlen(str)-i];
        str[strlen(str)-i] = temp;
    }
    
}

int strcmp(char *str1,char *str2){
    int n = (strlen(str1)>strlen(str2))?strlen(str1):strlen(str2);
    for (int i = 0; i < n ; i++)
        if(str1[i] - str2[i] !=0) return str1[i] - str2[i];
    return 0;
}

int main(){
    char arr[] = "HELLO there";
    char arr3[] = " JUMCA";

    printf("%d\n",strlen(arr));
    
    int n = strlen(arr);
    char arr2[n];

    strcpy(arr2,arr);
    printf("\n%s ",arr2);
    printf("\n%s ",strcat(arr,arr3));
    strrev(arr3);
    printf("\n%s ",arr3);
    
    printf("\n%d",strcmp(arr,arr));
    printf("\n%d",strcmp(arr,arr3));
}