


#include <stdio.h>
int main()
{
   int a, b, c, d, e, f, new;
 
   printf("Enter three digit number : ");
   scanf("%d", &a);
 
   b = a / 100;
   c = a % 100;
   d = c / 10;
   e = c % 10;
   f = ++d;
   new = b * 100 + f * 10 + e;
 
   printf("New No : %d\n", new);
  
   return 0;
}
