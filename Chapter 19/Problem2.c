// WAP in C to swap of two number using user defined function.

#include<stdio.h>
int swap(int a, int b);

int main()
{
    int x, y, m, n;
    printf("Enter two numbers : ");
    scanf("%d%d", &x, &y);
    printf("\nNumbers before swapping : \na = %d and b = %d\n", x, y);
    swap(x,y);
}

int swap(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
    printf("\nNumbers after swapping : \na = %d and b = %d\n",a, b);
}