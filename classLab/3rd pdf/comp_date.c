#include<stdio.h>
typedef struct{
    int dd;
    int mm;
    int yyyy;
}Date;
int main(){
    Date d1,d2;
    printf("Enter date in dd-mm-yyyy format: ");
    scanf("%d-%d-%d",&d1.dd,&d1.mm,&d1.yyyy);

    printf("Enter date in dd-mm-yyyy format: ");
    scanf("%d-%d-%d",&d2.dd,&d2.mm,&d2.yyyy);

    if(d1.dd == d2.dd && d1.mm == d2.mm && d1.yyyy == d2.yyyy)
        printf("Two dates are equal\n");
    else
        printf("Two dates are not equal\n");
    
    return 0;
}