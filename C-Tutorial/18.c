#include <stdio.h>

int main(void) {
    float mark, original_total, new_total, converted_mark;
    printf("Enter mark: ");
    scanf("%f", &mark);
    printf("Enter original total: ");
    scanf("%f", &original_total);
    printf("Enter new total: ");
    scanf("%f", &new_total);

    converted_mark = (mark / original_total) * new_total;

    printf("Converted Mark: %f\n", converted_mark);
}
