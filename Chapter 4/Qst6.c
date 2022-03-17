

// Q4. WAP in C to input a 4 digit integer number. Use pre -- in the 3rd bit digit and formulate the number and display it.(consider if the number may converted to 3 digit number). Exmp=1000, 900

#include <stdio.h>

int main(){
    int a;
    printf("Type four digit number : ");
    scanf("%d" , &a);

    // int mod = a % 100;
    int div = a / 100;

    int ans = --div;
    printf("The number is : %d" , (ans * 100));
}