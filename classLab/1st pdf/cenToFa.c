#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float centigradeToFahrenheit(float c){
    return (32 + 1.8 * c);
}
float FahrenheitToCentigrade(float f){
    return (f - 32)/1.8;
}

int main(){
    int c;
    float x;
    do{
        printf("Enter your choice : \n"
            "1. centigrade to fahrenheit \n"
            "2. fahrenheit to centigrade \n"
            "3. exit \n");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            printf("Enter temp : ");
            scanf("%f",&x);
            printf("%f \n",centigradeToFahrenheit(x));
            break;
        case 2:
            printf("Enter temp : ");
            scanf("%f",&x);
            printf("%f \n",FahrenheitToCentigrade(x));
            break;
        case 3:
            break;
        default:
            printf("invalid choice\n");
        }
    }while(c!=3);
}