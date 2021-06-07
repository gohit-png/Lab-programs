#include <stdio.h>
#include <conio.h>
#include <math.h>
float ar(float a, float b, float c);
int main()
{
  float a, b, c, area;
  printf("\nEnter the lengths of sides of a triangle \n");
  scanf("%f%f%f", &a, &b, &c);
  area = ar(a, b, c);
  printf("Area of the triangle = %.2f\n", area);
  return 0;
  getch();
}

float ar(float a, float b, float c)
{
  float s, area;
  s = (a+b+c)/2;
  area = sqrt(s*(s-a)*(s-b)*(s-c));
  return area;
}
