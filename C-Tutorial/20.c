#include <stdio.h>
#include <math.h>

int main(void) {
    float dx1, dx2, dy1, dy2, d2;
    printf("Enter 1st x-coordinate: ");
    scanf("%f", &dx1);
    printf("Enter 1st y-coordinate: ");
    scanf("%f", &dy1);
    printf("Enter 2nd x-coordinate: ");
    scanf("%f", &dx2);
    printf("Enter 2nd y-coordinate: ");
    scanf("%f", &dy2);

    d2 = sqrt(pow(dx2 - dx1, 2) + pow(dy2 - dy1, 2));

    printf("Distance is: %f\n", d2);
}
