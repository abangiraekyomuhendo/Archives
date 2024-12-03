/*Structured Programming*

*****Force Calculator****

Author: Abangira Precious Nimmusiima
Date: 26th May, 2024
*/

#include <stdio.h>
#include<math.h>

int main (void)
{
   int mone, mtwo, r;
   float force;
   const double G = 6.7e-11;

   printf("Enter mass one: "); 
   scanf("%d", &mone);

   printf("Enter mass two: "); 
   scanf("%d", &mtwo);

   printf("Enter distance between the two objects: "); 
   scanf("%d", &r);
   
   force = (G * mone * mtwo) / (r * r);

   printf("The force is %.2e", force);
}