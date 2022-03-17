

#include <stdio.h>
int main()
{
  int a, b, c, d, e, f, g, h, i, reverse;
  printf("Enter Five Digit Number : ");
  scanf("%d",&a);
  b = a / 10000;
  c = a % 10000;
  d = c / 1000;
  e = c % 1000;
  f = e / 100;
  g = e % 100;
  h = g / 10;
  i = g % 10;

  reverse = (i * 10000) + (f * 1000) + (d * 100) + (h * 10) + b;
  printf("Reverse Number : %d \n",reverse);
}
