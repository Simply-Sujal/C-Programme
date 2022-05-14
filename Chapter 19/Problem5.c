// WAP in C to find out the sum of digits of a number by using function, and print the result in main().

#include <stdio.h>

int SumOfDigits (int num); 

int main()
{
  int num, sum = 0;

  printf("\n Please Enter any number\n");
  scanf("%d", &num);

  sum =  SumOfDigits(num);

  printf("\n Sum of the digits = %d", sum);
  return 0;
}

int SumOfDigits (int num)
{
  int Rem, sum;

  for (sum = 0; num > 0; num = num/10)
  {
     Rem = num % 10;
     sum = sum + Rem;  
  }     

 return sum;
}