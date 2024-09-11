//time period coversion
#include <stdio.h>

int main(){
    int revolution, days, hours, minutes ,seconds;
    time_period_of_revolution=31558150;
    days = revolution / 86400;
    revolution = revolution % 86400;

    hours = time_period_of_revolution / 3600;
    revolution = revolution% 3600;

     minutes = revolution / 60;
     seconds = revolution % 60;

    printf("Days:%d, hours:%d, minutes%d, seconds:%d",days, hours ,minutes, seconds);
    return 0;
}
