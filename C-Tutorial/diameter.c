/*Structured Programming*

*****Diameter Calculator****

Author: Abangira Precious Nimmusiima
Date: 26th May, 2024
*/

#include <stdio.h>
#include<math.h>

int main (void)
{
   int radius, diameter;
   float circum, areaofc;

   printf("Enter the Radius: "); 
   scanf("%d", &radius);
   
   diameter = radius * 2;
   circum = 2 * 3.14 * radius;
   areaofc = 3.14 * radius * radius;

   printf("The diameter of the circle is %d\n", diameter);
   printf("The circumference of the circle is %f4\n", circum);
   printf("The area of the circle is %f\n", areaofc);
}