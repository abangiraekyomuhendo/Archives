/*Structured Programming*

*****Age Calculator*****

Author: Abangira Precious Nimmusiima
Date: 26th May, 2024
*/

#include <stdio.h>

int main (void)
{
   int yearof_birth, currentyear, age;

   printf("Enter your year of birth: "); 
   scanf("%d", &yearof_birth);

   currentyear = 2024;
   age = currentyear - yearof_birth;

   printf("You are %d years old now!", age);
}