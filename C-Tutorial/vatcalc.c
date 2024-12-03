/*Structured Programming*

*****VAT Calculator****

Author: Abangira Precious Nimmusiima
Date: 26th May, 2024
*/

#include <stdio.h>

int main() {
  float price, vat_rate, vat_due, price_with_vat;

  vat_rate = 0.20;

  printf("Enter the price of item: ");
  scanf("%f", &price);

  vat_due = price * vat_rate;

  price_with_vat = price + vat_due;

  printf("Price of the article: %.2f\n", price);
  printf("VAT due (%.0f%%): %.2f\n", vat_rate * 100, vat_due); 
  printf("Price with VAT: %.2f\n", price_with_vat);

  return 0;
}
