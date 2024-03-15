#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isAnagram(char* str1,char* str2){
    if(strlen(str1)!=strlen(str2)) return 0;

    int *count_str1 = calloc(26,sizeof(int));
    int *count_str2 = calloc(26,sizeof(int));

    for (int i = 0; i < strlen(str1); i++){
        count_str1[str1[i]%97]++;
        count_str2[str2[i]%97]++;
    }

    for (int i = 0; i < 26; i++)
        if(count_str1[i]!=count_str2[i]) return 0;

    return 1;
}

int main(){
    char names[8][10] = {"bowl","coal","shrub", "seals", "sales", "brush", "blow","cola"};

    for (int i = 0; i < 8; i++)
        for (int j = i+1; j < 8; j++)
            if (isAnagram(names[i],names[j]))
                printf("%s = %s \n",names[i],names[j]);
            
        
}