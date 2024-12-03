#include <stdio.h>
#include <math.h>

int main(void) {
    float s, a, v;
    a = 10.0;
    printf("Enter Distance in meters: ");
    scanf("%f", &s);

    v = sqrt(2 * a * s);

    printf("Speed in meters/sec: %f m/s\n", v);
}