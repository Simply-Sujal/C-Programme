// Q1. WAP to input any two integers distinct and display the greater of two integers.

#include <stdio.h>

int main(){
    int x;
    printf("Type the first number : ");
    scanf("%d" , &x);
    int y;
    printf("Type the second number : ");
    scanf("%d" , &y);

    if(x > y){
        printf("x is the greatest number");
    }else{
        printf("y is the greatest number");
    }

    return 0;
}