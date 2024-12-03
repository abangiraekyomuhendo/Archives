#include <stdio.h>

int main() {
    int students, teachers;
    printf("Enter Number of Pupils: ");
    scanf("%d", &students);

    teachers = students / 35;

    printf("The school may have %d teachers.\n", teachers);
    return 0;
}
