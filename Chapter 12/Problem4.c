// WAP in C to compute nCr. ( n! / r! * (n - r)!)

#include <stdio.h>

int main(){
    int fact3 = 1;
    int fact2 = 1;
    int fact1 = 1;
    int n,r;
    printf("Type the value of n : ");
    scanf("%d" , &n);

    printf("Type the value of r : ");
    scanf("%d" , &r);

    for (int i = 1; i <= n-r; i++) // (n-r)!
    {
        fact3 = fact3 * i;
    }
    
    for (int i = 1; i <= n; i++) //n!
    {
        fact1 = fact1 * i; 
    }

    for (int i = 1; i <= r; i++) // r!
    {
        fact2 = fact2 * i;
    }
    
    int nCr1 = fact1;
    int nCr2 = fact2 * fact3;
    int ans = nCr1 / nCr2;
    printf("The value of nCr is : %d", ans);
    
}