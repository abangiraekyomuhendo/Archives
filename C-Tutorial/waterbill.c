/*Structured Programming*

*****Water Bill Calculator****

Author: Abangira Precious Nimmusiima
Date: 26th May, 2024
*/

#include <stdio.h>
#include<math.h>

int main (void)
{
   int initialr, finalr, consumptionw;
   float bill;

   printf("Enter the the intial reading: "); 
   scanf("%d", &initialr);

   printf("Enter the final reading: "); 
   scanf("%d", &finalr);
   
   consumptionw = finalr - initialr;
   bill = consumptionw * 1.50;

   printf("The consumption is currently %d L and the cost is %f shillings. \n", consumptionw, bill);
}