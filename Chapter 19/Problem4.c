
// WAP in C to compute X n using user defined function, power(). 

#include<stdio.h>
void power(int,int);
 
void main() 
{
    int x,n;
    printf("Enter the base : ");
    scanf("%d",&x);
    printf("Enter the exponent : ");
    scanf("%d",&n);
    power(x,n);
}
 
void power(int b,int e)
{
    int power=1;
    while(e>0)
    {
        power=power*b;
        e--;
    }
    printf("The power of the no = %d\n",power);
}