// WAP in C to find out the factorial of a number using user defined function, fact() 


#include<stdio.h>

int fact(int);

void main()
{
    int n, factorial;
    printf("Enter the number : ");
    scanf("%d", &n);
    factorial = fact(n);
    printf("Factorial of the number is : %d\n", factorial);
}

int fact(int n)
{
    int i, fact = 1;
    for(i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}