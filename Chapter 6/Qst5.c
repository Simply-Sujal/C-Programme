// Q4. WAP to test whether a number entered through the keyboard is ODD or EVEN.

#include <stdio.h>

int main(){
    int num;
    printf("Type any number to check odd or even : ");
    scanf("%d" , &num);

    if(num % 2 == 0){
        printf("The number is Even!");
    }else{
        printf("The number is Odd");
    }
}