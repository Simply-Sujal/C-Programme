// WAP in C to add two numbers using pointers.

#include<stdio.h>
int main()
{
    int a, b, *m, *n, sum;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);

    m = &a;
    n = &b;
    sum = *m + *n;

    printf("Sum of two numbers : %d\n", sum);
    return 0;
}