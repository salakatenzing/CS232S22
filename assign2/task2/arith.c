/* Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159

int main()
{
  float r, a, rInches, c;
  

  printf("Enter radius (in mm):\n");
  scanf("%f", &r);
  rInches = r/25.4;

  a = PI * rInches * rInches;
  c = 2 * PI * rInches;

  printf("Circle's area is %3.2f (sq in).\n", a);
  printf("Its circumference is %3.2f (in).\n", c);
}