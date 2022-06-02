// WAP in C to input a number using pointer and display the sum of digits of that number. 

#include<stdio.h>
int main()
{
    int *a,*b;
    int n,s=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    a=&n;
    b=&s;
    printf("Sum of digits : ", *a);
    while(*a)
    {
        *b = *b + *a%10;
        *a/=10;
    }
    printf("%d\n",*b);
    return 0;
}