#include <stdio.h>

int main() {
    int num1, num2, quotient, remainder;
    printf("Enter 1st Number: ");
    scanf("%d", &num1);
    printf("Enter 2nd Number: ");
    scanf("%d", &num2);

    quotient = num2 / num1;
    remainder = num2 % num1;

    printf("%d divides into %d %d times with a remainder of %d\n", num1, num2, quotient, remainder);
    return 0;
}
