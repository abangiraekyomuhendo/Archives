/*Structured Programming*

*****MidPoint Calculator****

Author: Abangira Precious Nimmusiima
Date: 26th May, 2024
*/

#include <stdio.h>
#include<math.h>

int main (void)
{
   int mx1, mx2, my1, my2, midpointx, midpointy;

   printf("Enter first x-coordinate: "); 
   scanf("%d", &mx1);

   printf("Enter first y-coordinate: "); 
   scanf("%d", &my1);

   printf("Enter second x-coordinate: "); 
   scanf("%d", &mx2);

   printf("Enter second y-coordinate: "); 
   scanf("%d", &my2);

   midpointx = (mx1 + mx2) / 2;
   midpointy = (my1 + my2) / 2;


   printf("Midpoint is at: (%d; %d)", midpointx, midpointy);
}