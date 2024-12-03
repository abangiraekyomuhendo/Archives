/*Structured Programming*

*****Sum and Product Calculator*****

Author: Abangira Precious Nimmusiima
Date: 26th May, 2024
*/

#include <stdio.h>

int main (void)
{
   int spa, spb, sum1, product1;

   printf("Enter number A: "); 
   scanf("%d", &spa);

   printf("Enter number B: "); 
   scanf("%d", &spb);

   sum1 = spa + spb;
   product1 = spa * spb;

   printf("The sum of %d and %d is %d \n", spa, spb, sum1);
   printf("The product of %d and %d is %d", spa, spb, product1);
}