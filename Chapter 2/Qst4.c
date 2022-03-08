

// Write a program to print the average of 3 number 

#include <stdio.h>

int main(){
    int a;
    printf("Type the first number : ");
    scanf("%d" , &a);
    int b;
    printf("Type the second number : ");
    scanf("%d" , &b);
    int c;
    printf("Type the third number : ");
    scanf("%d" , &c);

    int average = (a+b+c)/3;
    printf("The average of three number is : %d" , average);
}