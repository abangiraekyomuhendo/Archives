#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c, rooteqn, eqn1, eqn2;
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    printf("Enter value of c: ");
    scanf("%f", &c);

    //ax^2+bx+c=0
    //ax^2+bx+-9)=0
    //- 2x - 9 = 0
    //a=1. b=-2, c=-9
    //b (-2  in our case) and c is the constant (-9 in our case), to find the TWOI solutions to 

    rooteqn = (b * b) - (4 * a * c);
    eqn1 = (-b + sqrt(rooteqn) / (2 * a));
    eqn2 = (-b - sqrt(rooteqn) / (2 * a));

    printf("1st solution is: %f\n", eqn1);
    printf("2nd solution is: %f \n", eqn2);
}
