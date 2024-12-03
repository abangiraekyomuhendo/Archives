/*Structured Programming*

*****Hypotenuse Calculator****

Author: Abangira Precious Nimmusiima
Date: 26th May, 2024
*/

#include <stdio.h>
#include <math.h>

int main() {
  int sidea, sideb, hypo;

  printf("Enter the length Side A: ");
  scanf("%d", &sidea);

  printf("Enter the length Side B: ");
  scanf("%d", &sideb);

  hypo = sqrt(sidea * sidea + sideb * sideb);


  printf("The hypotenuse is %.d\n", hypo);

  return 0;
}
