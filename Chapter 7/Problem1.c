// Q1. WAP in C to check the number is divisible by 2 or 3 or 5 or 7 or not.

#include <stdio.h>

int main(){
    int num;
    printf("Type any number : ");
    scanf("%d" , &num);

    if (num % 2 == 0)
    {
        printf("The number is divisible by 2");
    }
    else if (num % 3 == 0)
    {
        printf("The number is divisible by 3");
    }
    else if (num % 5 == 0)
    {
        printf("The number is divisible by 5");
    }
    else if (num % 7 == 0)
    {
        printf("The number is divisible by 7");
    }
    else{
        printf("Sorry , the number is not divisible");
    }
}