// WAP in C to designing a recursive function to calculate the sum of all even digits of any given integer.

#include<stdio.h>

int SumEven(int num1, int num2);

int main()
{
    int num1=2,num2;
    printf("Enter number in which you want to add even number :");
    scanf("%d",&num2);
    printf("Sum of all Even number is : %d",SumEven(num1,num2));
}

int SumEven(int num1, int num2)
{
   if(num1>num2)
    return 0;

    return num1+SumEven(num1+2,num2);
}