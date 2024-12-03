#include <stdio.h>

int main() {
    int minutes, days, seconds;
    printf("Enter Value in Minutes: ");
    scanf("%d", &minutes);

    days = minutes / 1440;
    minutes = minutes / 1;
    seconds = minutes * 60;

    printf("Days: %d \nMinutes: %d \nSeconds: %d\n", days, minutes, seconds);
    
}
