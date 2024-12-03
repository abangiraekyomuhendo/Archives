/*Structured Programming*

*****Fuel Consumption Calculator****

Author: Abangira Precious Nimmusiima
Date: 26th May, 2024
*/

#include <stdio.h>
#include<math.h>

int main (void)
{
   int initial, final, fuel, distance, consumption;

   printf("Enter the the intial km: "); 
   scanf("%d", &initial);

   printf("Enter the final km: "); 
   scanf("%d", &final);

   printf("Enter the fuel in litres: "); 
   scanf("%d", &fuel);
   
   distance = final - initial;
   consumption = distance / fuel;

   printf("For a distance %d kilometers the consumption is %d litres per kilometer. \n\n", distance, consumption);
}