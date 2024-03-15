#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};


struct Time addTime(struct Time time1, struct Time time2) {
    struct Time result;

    unsigned long long Total = time1.hours*60*60 + time1.minutes*60 + time1.seconds +
                                 time2.hours*60*60 + time2.minutes*60 + time2.seconds;

    result.hours = Total / (60*60);
    Total %= (60*60);
    result.minutes = Total / 60;
    Total %= (60);
    result.seconds = Total;

    return result;
}

int main() {
    struct Time time1, time2, result;


    printf("Enter the first time : ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

   
    printf("Enter the second time : ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);


    result = addTime(time1, time2);

 
    printf("Result: %d hours %d minutes %d seconds\n", result.hours, result.minutes, result.seconds);

    return 0;
}
