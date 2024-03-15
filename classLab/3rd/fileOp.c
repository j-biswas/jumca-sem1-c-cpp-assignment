#include <stdio.h>
#include <stdlib.h>



int isVowel(char a){
    char arr[] = {'a','e','i','o','u','A','E','I','O','U'};
    for (int i = 0; i < 10; i++)
        if (arr[i] == a) return 1;
    return 0;
}



int main(){
    FILE *ptr;
    ptr = fopen("demo.txt","r");
    int vCount = 0,sp = 0,n=0,word = 0;
    int is_space_before = 1;
    if(ptr == NULL) printf("error");
    else{
        char ch;
        
        do {
            ch = fgetc(ptr);
            
            printf("%c", ch);

            if(isVowel(ch)) vCount++;
            else if(ch==32){
                sp++;
                is_space_before = 1;
            } 

            if(ch != 32 && is_space_before == 1 && ((ch>=65 && ch<=90)||(ch>=97 && ch<=122))){
                word++;
                is_space_before = 0;
            }
            n++;
        } while (ch > -1);
    }
    printf("\nVowels : %d\nConsonant : %d\nWORDS :%d",vCount,n-vCount-sp,word);
    fclose(ptr);

}