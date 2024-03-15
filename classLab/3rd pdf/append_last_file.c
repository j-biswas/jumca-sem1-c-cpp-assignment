#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp = fopen("text1.txt", "r");
    FILE *fp1 = fopen("text2.txt", "a+");
    int ch;
    
    while ((ch = fgetc(fp)) != EOF){
        fputc(ch,fp1);
    }
    fclose(fp);
    fclose(fp1);
    return 0;
}