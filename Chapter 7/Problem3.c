// Q3. WAP in C to input a number and print how many digits of the number. The number
// should not more than 4 digit.

#include<stdio.h>
 int main()
{
    int num;
    printf("Please enter any number : ");
    scanf("%d", &num);
    if ((num % 10) == num)
    {
        printf("The given number is a one digit number.\n");
    }
    else if ((num % 100) == num)
    {
        printf("The given number is a two digit number.\n");
    }
    else if ((num % 1000) == num)
    {
        printf("The given number is a three digit number.\n");
    }
    else if ((num % 10000) == num)
    {
       printf("The given number is a four digit number.\n");
    }
    else
    {
        printf("Error!!!!, Please enter a number upto four digit only.\n");
    }
    return 0;
}