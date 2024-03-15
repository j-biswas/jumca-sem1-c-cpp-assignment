#include <stdio.h>
#include <stdlib.h>
#include <string.h> 


char* numInWords(unsigned long long n){
    char arr[20][10] = {"zero ","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","ninteen "};
    char arr2[10][10] = {"","","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninty "};
   
    char *fullstring = calloc(400,sizeof(char));
    unsigned long long num;

    if( n>=100000000 ){
        num = n/10000000;
        strcat(fullstring,numInWords(num));
        strcat(fullstring,"crore ");
        n%=10000000;
    }
    if( n>=10000000 && n<100000000){
        strcat(fullstring,arr[n/10000000]);
        strcat(fullstring,"crore ");
        n%=10000000;
    }
    if( n>=1000000 && n<10000000){
        num = n/100000;
        strcat(fullstring,numInWords(num));
        strcat(fullstring,"lakh ");
        n%=100000;
    }
    if( n>=100000 && n<1000000){
        strcat(fullstring,arr[n/100000]);
        strcat(fullstring,"lakh ");
        n%=100000;
    }
    if( n>=10000 && n<100000){
        num = n/1000;
        strcat(fullstring,numInWords(num));
        strcat(fullstring,"thousand ");
        n%=1000;
    }
    if( n>=1000 && n<10000){
        strcat(fullstring,arr[n/1000]);
        strcat(fullstring,"thousand ");
        n%=1000;
    }

    if( n>=100 && n<1000){
        strcat(fullstring,arr[n/100]);
        strcat(fullstring,"hundred ");
        n%=100;
    }

    if (n>=20 && n<100){
        strcat(fullstring,arr2[n/10]);
        n%=10;
    }
    if (n>0 && n<20)
        strcat(fullstring,arr[n]);
    return fullstring;
}

char * numInWordsInt(unsigned long long n){
    char *fullstring = calloc(400,sizeof(char));
    unsigned long long num;

    if( n>=1000000000){
        num = n/1000000000;
        strcat(fullstring,numInWordsInt(num));
        strcat(fullstring,"billion ");
        n%=1000000000;
    }
    if( n>=1000000 && n<1000000000){
        num = n/1000000;
        strcat(fullstring,numInWordsInt(num));
        strcat(fullstring,"million ");
        n%=1000000;
    }
    if( n>=1000 && n<1000000){
        strcat(fullstring,numInWordsInt(n/1000));
        strcat(fullstring,"thousand ");
        n%=1000;
    }

    if( n>0 && n<1000){
        strcat(fullstring,numInWords(n));
    }
    return fullstring;

}
int main(){
    unsigned long long n;
    printf("Enter any number (<10000000000000000): ");
    scanf("%llu",&n);
    printf("INDIAN : %s",numInWords(n));
    printf("\nINTERNATIONAL :  %s",numInWordsInt(n));
}

