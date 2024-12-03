/* Author: Abangira Precious Nimmusiima
B28326
M23B23/028
Date: 26th May, 2024
*/


#include <stdio.h>
#include <math.h>

int main (void) {

/* Exercise 1: Read your year of birth and print your age */
// Code for Exercise 1

   int yearof_birth, currentyear, age;

   printf("Enter your year of birth: "); 
   scanf("%d", &yearof_birth);

   currentyear = 2024;
   age = currentyear - yearof_birth;

   printf("You are %d years old now!\n\n", age);

/* Exercise 2: Input two numbers A and B and print their SUM and PRODUCT. */
// Code for Exercise 2

printf("NEXT EXERCISE: Input two numbers A and B to get their SUM and PRODUCT.\n\n");

int numa, numb, sum, product;

   printf("Enter number A: "); 
   scanf("%d", &numa);

   printf("Enter number B: "); 
   scanf("%d", &numb);

   sum = numa + numb;
   product = numa * numb;

   printf("The sum of the given numbers is %d and the product is %d.\n\n", sum, product);


/* Exercise 3: 3.	Write a program to input a number N and print it and the value of its square.*/
// Code for Exercise 3

   printf("NEXT EXERCISE: Enter a number to get the value of its square.\n\n");

   int vala;

   printf("Enter number: "); 
   scanf("%d", &vala);

   int square = vala * vala;


   printf("The number is ");

   printf("It's square is %d\n\n", square);

/* Exercise 4: 4.	Write a program to read in TWO numbers A and B and print their sum and their product.*/
// Code for Exercise 4

   printf("NEXT EXERCISE: Input two numbers A and B to get their SUM and PRODUCT\n\n");

   int spa, spb, sum1, product1;

   printf("Enter number A: "); 
   scanf("%d", &spa);

   printf("Enter number B: "); 
   scanf("%d", &spb);

   sum1 = spa + spb;
   product1 = spa * spb;

   printf("The sum of %d and %d is %d \n", spa, spb, sum1);
   printf("The product of %d and %d is %d\n\n", spa, spb, product1);

// /* Exercise 5: Finding the area and perimeter of a rectangle */
// // Code for Exercise 5

   printf("NEXT EXERCISE: AREA and PERIMETER of a rectangle\n\n");

   int length, width, area, perimeter;

   printf("Length of rectangle is: "); 
   scanf("%d", &length);

   printf("Width of rectangle is: "); 
   scanf("%d", &width);

   area = length * width;
   perimeter = (length + width) * 2 ;

   printf("The area of the rectangle is %d\n", area);
   printf("The perimeter of the rectangle is %d\n\n", perimeter);



// /* Exercise 6: Convert from degrees Fahrenheit (F) to degrees Celsius (C) */
// // Code for Exercise 6
    printf("NEXT EXERCISE: Convert from degrees Fahrenheit (F) to degrees Celsius (C)\n\n");

   int cels;

   printf("Enter Celsius temperature: "); 
   scanf("%d", &cels);
   
   float fahr = (1.8 * cels) + 32;

   printf("Fahrenheit value is %f\n\n", fahr);


// /* Exercise 7: Description of Exercise 7 */
// // Code for Exercise 7

   printf("NEXT EXERCISE: Diameter, Circumference, and Area\n\n");

   int radius, diameter;
   float circum, areaofc;

   printf("Enter the Radius: "); 
   scanf("%d", &radius);
   
   diameter = radius * 2;
   circum = 2 * 3.14 * radius;
   areaofc = 3.14 * radius * radius;

   printf("The diameter of the circle is %d\n", diameter);
   printf("The circumference of the circle is %f4\n", circum);
   printf("The area of the circle is %f\n\n", areaofc);

// /* Exercise 8: Area of the triangle. */
// // Code for Exercise 8


   printf("NEXT EXERCISE: Area of the triangle.\n\n");

   int baseoft, heightoft, areaoft;

   printf("Enter the Base: "); 
   scanf("%d", &baseoft);

   printf("Enter the Height: "); 
   scanf("%d", &heightoft);
   
   areaoft = (baseoft * heightoft) / 2;

   printf("The area of the triangle is %d\n\n", areaoft);

// /* Exercise 9: VAT Calculator */
// // Code for Exercise 9

   printf("NEXT EXERCISE: VAT Calculator\n\n");

   float price, vat_rate, vat_due, price_with_vat;

  vat_rate = 0.20;

  printf("Enter the price of item: ");
  scanf("%f", &price);

  vat_due = price * vat_rate;

  price_with_vat = price + vat_due;

  printf("Price of the article: %.2f\n", price);
  printf("VAT due (%.0f%%): %.2f\n", vat_rate * 100, vat_due); 
  printf("Price with VAT: %.2f\n\n", price_with_vat);


// /* Exercise 10: Hypotenuse */
// // Code for Exercise 10

   printf("NEXT EXERCISE: Hypotenuse\n\n");
   int sidea, sideb, hypo;

  printf("Enter the length Side A: ");
  scanf("%d", &sidea);

  printf("Enter the length Side B: ");
  scanf("%d", &sideb);

  hypo = sqrt(sidea * sidea + sideb * sideb);


  printf("The hypotenuse is %.d\n\n", hypo);

// /* Exercise 11: Water Bill Calc.*/
// // Code for Exercise 11

   printf("NEXT EXERCISE: Water Bill Calc\n\n");

   int initialr, finalr, consumptionw;
   float bill;

   printf("Enter the the intial reading: "); 
   scanf("%d", &initialr);

   printf("Enter the final reading: "); 
   scanf("%d", &finalr);
   
   consumptionw = finalr - initialr;
   bill = consumptionw * 1.50;

   printf("The consumption is currently %d L and the cost is %f shillings. \n\n", consumptionw, bill);

// /* Exercise 12: Fuel Consumption Calculator */
// // Code for Exercise 12

   printf("NEXT EXERCISE: Fuel Consumption Calculator\n\n");
   
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


// /* Exercise 13: Description of Exercise 13 */
// // Code for Exercise 13

   printf("NEXT EXERCISE\n\n");

// /* Exercise 14: Population Calc. */
// // Code for Exercise 14

   printf("NEXT EXERCISE: Population Calc\n\n");
   
   int y2024, y2025;
   float five, six, seven, pop25, pop26, pop27;
   y2024 = 43000000;

   printf("Population in 2024: 43000000\n");

   //Population in 2025
   five = y2024 * (12.3/100);
   pop25 = y2024 + five;
   printf("2025: %f \n", pop25); 


   //Population in 2026
   six = pop25 * (12.3/100);
   pop26 = six + pop25;
   printf("2026: %f \n", pop26); 

   //Population in 2027
   seven = pop26 * (12.3/100);
   pop27 = seven + pop26;
   printf("2027: %f\n\n", pop27); 

// /* Exercise 15: Midpoint */
// // Code for Exercise 15

   printf("NEXT EXERCISE: Midpoint\n\n");

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


   printf("Midpoint is at: (%d; %d)\n\n)", midpointx, midpointy);


// /* Exercise 16: Gradient */
// // Code for Exercise 16


   printf("NEXT EXERCISE: Gradient\n\n");

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

   printf("Gradient is: %f\n\n", gradient);


// /* Exercise 17: Value of N */
// // Code for Exercise 17

   printf("NEXT EXERCISE: Value of N\n\n");
      double valuex, N;
    printf("Enter value of x: ");
    scanf("%lf", &valuex);

    N = (pow(valuex, 4) - pow(valuex, 3) + pow(valuex,2) - valuex) / (pow(valuex + 1, 2) - sqrt(valuex));

    printf("The value of N is: %f\n\n", N);


// /* Exercise 18: Converted Mark */
// // Code for Exercise 18
   printf("NEXT EXERCISE: Converted Mark\n\n");

   float mark, original_total, new_total, converted_mark;
    printf("Enter mark: ");
    scanf("%f", &mark);
    printf("Enter original total: ");
    scanf("%f", &original_total);
    printf("Enter new total: ");
    scanf("%f", &new_total);

    converted_mark = (mark / original_total) * new_total;

    printf("Converted Mark: %f\n\n", converted_mark);


// /* Exercise 19: Speed in m/s */
// // Code for Exercise 19

   printf("NEXT EXERCISE: Speed in m/s\n\n");
   
   float s, a, v;
   a = 10.0;
   printf("Enter Distance in meters: ");
   scanf("%f", &s);

   v = sqrt(2 * a * s);

   printf("Speed in meters/sec: %f m/s\n\n", v);

// /* Exercise 20: Distance between two points */
// // Code for Exercise 20

   printf("NEXT EXERCISE: Distance between two points\n\n");

   float dx1, dx2, dy1, dy2, d2;
   printf("Enter 1st x-coordinate: ");
   scanf("%f", &dx1);

   printf("Enter 1st y-coordinate: ");
   scanf("%f", &dy1);

   printf("Enter 2nd x-coordinate: ");
   scanf("%f", &dx2);

   printf("Enter 2nd y-coordinate: ");
   scanf("%f", &dy2);

   d2 = sqrt(pow(dx2 - dx1, 2) + pow(dy2 - dy1, 2));

   printf("Distance is: %f\n\n", d2);
 
// /* Exercise 21: Description of Exercise 21 */
// // Code for Exercise 21

   printf("NEXT EXERCISE\n\n");


// /* Exercise 22: Enter a value of seconds and it will be printed in hours, minutes and seconds.*/
// // Code for Exercise 22

   printf("NEXT EXERCISE: Enter a value of seconds and it will be printed in hours, minutes and seconds.\n\n");

   int seconds2, hours2, minutes2;
   printf("Enter Value in Seconds: ");
   scanf("%d", &seconds2);

   hours2 = seconds2 / 3600;
   minutes2 = seconds2 / 60;
   seconds2 = seconds2 / 1;

   printf("Hours: %d \nMinutes: %d \nSeconds: %d\n\n", hours2, minutes2, seconds2); 


// /* Exercise 23: Enter a value of minutes and it will be printed in days, minutes and seconds  */
// // Code for Exercise 23

   printf("NEXT EXERCISE: Enter a value of minutes and it will be printed in days, minutes and seconds\n\n");
   
   int minutes, days, seconds;

   printf("Enter Value in Minutes: ");
   scanf("%d", &minutes);

   days = minutes / 1440;
   minutes = minutes / 1;
   seconds = minutes * 60;

   printf("Days: %d \nMinutes: %d \nSeconds: %d\n\n", days, minutes, seconds);


// /* Exercise 24: The ratio of the number of teachers to every five pupils */
// // Code for Exercise 24

   printf("NEXT EXERCISE: The ratio of the number of teachers to every five pupils\n\n");

   int students, teachers;

   printf("Enter Number of Pupils: ");
   scanf("%d", &students);

   teachers = students / 35;

   printf("The school may have %d teachers.\n\n", teachers);

// /* Exercise 25: The following line of code carries out the division function and also gives you the remainder. */
// // Code for Exercise 25

   printf("NEXT EXERCISE: The following line of code carries out the division function and also gives you the remainder.\n\n");


   int num1, num2, quotient, remainder;
   printf("Enter 1st Number: ");
   scanf("%d", &num1);

   printf("Enter 2nd Number: ");
   scanf("%d", &num2);

   quotient = num2 / num1;
   remainder = num2 % num1;

   printf("%d divides into %d %d times with a remainder of %d\n", num1, num2, quotient, remainder);

}
