// Q1. WAP in C to print all the palindrome numbers in a range.

#include <stdio.h>

int main(){
    int mod;
    int reverse;
    int temp;
    int num1,num2;
    printf("Type the starting point : ");
    scanf("%d",&num1);
    printf("Type the ending point : ");
    scanf("%d",&num2);

    printf("Plaindrome number between %d and %d are : \n" , num1 , num2);

    for (int i = num1; i <= num2; i++)
    {
        temp = i;
        reverse = 0;
        while (temp != 0)
        {
            mod = temp % 10;
            temp = temp / 10;
            reverse = reverse * 10 + mod;
        }
        if (i == reverse)
        {
            printf("%d \n" , i);
        }
    }

    
}