/*Structured Programming*

*****MidPoint Calculator****

Author: Abangira Precious Nimmusiima
Date: 26th May, 2024
*/

#include <stdio.h>
#include<math.h>

int main (void)
{
   int x1, x2, y1, y2;
   float gradient;

   printf("Enter first x-coordinate: "); 
   scanf("%d", &x1);

   printf("Enter first y-coordinate: "); 
   scanf("%d", &y1);

   printf("Enter second x-coordinate: "); 
   scanf("%d", &x2);

   printf("Enter second y-coordinate: "); 
   scanf("%d", &y2);

   gradient = (float) (y2 - y1) / (x2 - x1);


   printf("Gradient is: %f", gradient);
}