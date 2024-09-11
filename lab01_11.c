#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);
// 1 hour = 3600 seconds

    hours = total_seconds / 3600;          
    minutes = (total_seconds % 3600) / 60; // Remaining seconds to minutes
    seconds = total_seconds % 60;          // Remaining seconds

    // Output the time in hours, minutes, and seconds
    printf("Time: %d hour(s) %d minute(s) %d second(s)\n", hours, minutes, seconds);

    return 0;
}