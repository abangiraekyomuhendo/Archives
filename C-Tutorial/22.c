#include <stdio.h>

int main(void) {
    int seconds2, hours2, minutes2;
    printf("Enter Value in Seconds: ");
    scanf("%d", &seconds2);

    hours2 = seconds2 / 3600;
    minutes2 = seconds2 / 60;
    seconds2 = seconds2 / 1;

    printf("Hours: %d \nMinutes: %d \nSeconds: %d\n", hours2, minutes2, seconds2);
}
