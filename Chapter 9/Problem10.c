// WAP in C to input a binary number and print the decimal equivalent of that number.

#include <stdio.h>

int main(){
    int num;
    int binaryNum;
    int decimalNum = 0;
    int base = 1;
    int rem;

    printf("Enter the number in binary form : ");
    scanf("%d",&num);
    binaryNum = num;

    while (num > 0)
    {
        rem = num % 10;
        decimalNum = decimalNum + rem * base;
        num = num / 10;
        base = base * 2;
    }

    printf("The decimal form is : %d",decimalNum);
    

}