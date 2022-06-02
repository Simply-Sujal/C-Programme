// WAP to add two complex numbers using structure 

#include <stdio.h> 
struct complex
{
   int r; 
   int i;
};
 
int main()
{
   struct complex a, b, sum;
   printf("Enter real and imaginary part of first complex number(a+ib) : ");
   scanf("%d%d", &a.r, &a.i);
   printf("Enter real and imaginary part of second complex number(c+id) : ");
   scanf("%d%d", &b.r, &b.i);
 
   sum.r = a.r + b.r;
   sum.i = a.i + b.i;
 
   printf("Sum of the complex numbers: %d + %di\n", sum.r, sum.i);
   return 0;
}