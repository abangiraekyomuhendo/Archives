/*Structured Programming*

*****Sum and Product Calculator*****

Author: Abangira Precious Nimmusiima
Date: 26th May, 2024
*/

#include <stdio.h>

int main (void)
{
   int a, b, sum, product;

   printf("Enter number A: "); 
   scanf("%d", &a);

   printf("Enter number B: "); 
   scanf("%d", &b);

   sum = a + b;
   product = a * b;

   printf("The sum of the given numbers is %d and the product is %d.", sum, product);
}