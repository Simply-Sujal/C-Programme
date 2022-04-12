// Q1. WAP in C to find the GCD of two integers .

#include <stdio.h>

int main(){
    int gcd;
    int num1,num2;
    printf("Type num1 : ");
    scanf("%d" , &num1);

    printf("Type num2 : ");
    scanf("%d" , &num2);

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }   
    }
    printf("The GCD of two number is : %d" , gcd);
}
