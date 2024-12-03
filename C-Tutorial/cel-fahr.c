/*Structured Programming*

*****Celsius to Fahrenheit Convertor*****

Author: Abangira Precious Nimmusiima
Date: 26th May, 2024
*/

#include <stdio.h>

int main (void)
{
   int cels;

   printf("Enter Celsius temperature: "); 
   scanf("%d", &cels);
   
   float fahr = (1.8 * cels) + 32;

   printf("Fahrenheit value is %f\n", fahr);
}