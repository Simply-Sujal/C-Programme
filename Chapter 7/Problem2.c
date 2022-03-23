// Q2. WAP in C to input a number and check it is odd or even, if even check it is divisible by 4
// or not and if odd then check the number is divisible by 3 or not.

#include <stdio.h>

int main(){
    int num;
    printf("Type any number : ");
    scanf("%d" , &num);

    if(num % 2 == 0){ // this will decide even or odd
        printf("The number is Even");
        if (num % 4 == 0)
        {
            printf("Yes , it is also divisible by 4");
        }else{
            printf("Sorry , it is not divisible by 4");
        }
    }else{
        printf("The number is Odd");
        if (num % 3 == 0)
        {
            printf("Yes , it is divisible by 3");
        }else{
            printf("Sorry , it is not divisible by 3");
        }
    }
}