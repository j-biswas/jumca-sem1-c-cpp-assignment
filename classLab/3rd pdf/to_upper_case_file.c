#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp = fopen("INPUT.txt","r+");
    FILE *fp1 = fopen("OUTPUT.txt","w+");

    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch -= 32;
        }
        fputc(ch, fp1);
    }
    fclose(fp);
    fclose(fp1);
    return 0;
}