/*Structured Programming*

*****Sum and Product Calculator*****

Author: Abangira Precious Nimmusiima
Date: 26th May, 2024
*/

#include <stdio.h>

int main (void)
{
   int y2024, y2025;
   float five, six, seven, pop25, pop26, pop27;
   y2024 = 43000000;

   printf("Population in 2024: 43000000\n");

   //Population in 2025
   five = y2024 * (12.3/100);
   pop25 = y2024 + five;
   printf("2025: %f \n", pop25); 


   //Population in 2026
   six = pop25 * (12.3/100);
   pop26 = six + pop25;
   printf("2026: %f \n", pop26); 

   //Population in 2027
   seven = pop26 * (12.3/100);
   pop27 = seven + pop26;
   printf("2027: %f", pop27); 

}