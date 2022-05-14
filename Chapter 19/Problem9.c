// WAP in C to find out n c r factor by using a user defined function calculate() and for factorial use fact(). ncr =n!/(r!*(n-r)!)


#include<stdio.h>

int fact(int n);

int main()
{
    int n, r, ncr;

    int fact(int a);
    printf("Enter the values of n and r respectively : ");
    scanf("%d%d", &n, &r);
    
    ncr = fact(n) / (fact(r) * fact(n-r));
    printf("\n%dc%d =%d\n", n, r, ncr);
}

int fact(int n)
{
    int i;
    for(i=1; n!=0; n--)
    {
        i = i * n;
    }
    return i;    
}