/*Structured Programming*

*****Qn 17****

Author: Abangira Precious Nimmusiima
Date: 26th May, 2024
*/

#include <stdio.h>
#include <math.h>

int main(void) {

    double valuex, N;
    printf("Enter value of x: ");
    scanf("%lf", &valuex);

    N = (pow(valuex, 4) - pow(valuex, 3) + pow(valuex,2) - valuex) / (pow(valuex + 1, 2) - sqrt(valuex));

    printf("The value of N is: %f\n", N);
    return 0;
}

