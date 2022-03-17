

#include <stdio.h>
int main()
{
   int a, b, c, d, e, f, g, h, ans;
 
   printf("Enter four digit number : ");
   scanf("%d", &a);
 
   b = a / 1000;
   c = a % 1000;
   d = c / 100;
   e = c % 100;
   f = e / 10;
   g = e % 10;
   h = --d;
 
   ans = b * 1000 + h * 100 + f * 10 + g;
 
   printf("New No : %d\n", ans);

}
