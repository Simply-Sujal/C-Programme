// Q6. WAP to calculate the factorial of a given number. 

#include <stdio.h>

int main(){
    int x = 1;
    int factorial = 1;
    int num;
    printf("Type any number to find factorial : ");
    scanf("%d" , &num);

    while (x <= num)
    {
        factorial = factorial * x;
        x++;
    }
    printf("The factorial of a inputed number is : %d" , factorial);
    
}