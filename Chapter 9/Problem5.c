// 5.	WAP in C to check whether an input integer is perfect number or not
// In this C program, we are reading the integer value using 'number' variable. Perfect number is a number which is equal to sum of its divisor. For example, divisors of 6 are 1, 2 and 3. The sum of these divisors is 6.

#include <stdio.h>

int main(){
    int sum = 0;
    int i = 1;
    int num;
    printf("Type any number : ");
    scanf("%d" , &num);

    while (i < num)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }

    if (sum == num)
    {
        printf("The number is perfect number.");
    }else{
        printf("The number is not a perfect number.");
    }
    
}