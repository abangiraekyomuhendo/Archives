/*Structured Programming*

*****Area and Perimeter Calculator*****

Author: Abangira Precious Nimmusiima
Date: 26th May, 2024
*/

#include <stdio.h>

int main (void)
{
   int length, width, area, perimeter;

   printf("Length of rectangle is: "); 
   scanf("%d", &length);

   printf("Width of rectangle is: "); 
   scanf("%d", &width);

   area = length * width;
   perimeter = (length + width) * 2 ;

   printf("The area of the rectangle is %d\n", area);
   printf("The perimeter of the rectangle is %d", perimeter);
}