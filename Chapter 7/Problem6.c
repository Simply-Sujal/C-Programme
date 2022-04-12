// Q6. WAP in C to input a number and check the number is odd or even using switch case.

#include <stdio.h>

int main(){
    int number;
    printf("Enter any number : ");
    scanf("%d" , &number);

    switch (number % 2)
    {
    case 0:
        printf("Even Number");        
        break;

    case 1:
        printf("Odd Number");
        break;
    }

    return 0;
}