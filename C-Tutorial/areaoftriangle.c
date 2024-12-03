/*Structured Programming*

*****Diameter Calculator****

Author: Abangira Precious Nimmusiima
Date: 26th May, 2024
*/

#include <stdio.h>
#include<math.h>

int main (void)
{
   int baseoft, heightoft, areaoft;

   printf("Enter the Base: "); 
   scanf("%d", &baseoft);

   printf("Enter the Height: "); 
   scanf("%d", &heightoft);
   
   areaoft = (baseoft * heightoft) / 2;

   printf("The area of the triangle is %d\n", areaoft);
}