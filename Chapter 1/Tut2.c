#include <stdio.h>

int main(){
    // const int a = 15;
    // a = 20; // i cant change the value of a , if initially i said that it is const 
    // printf("%d" , a);
    int num1 = 234;
    int num2 = 62783;
    printf("The number is %d \n" , num1); 
    printf("The second number is %d \n", num2); // %d is the format specifier ,define the type of data to be printed on standard output.

    float pi = 3.14;
    printf("The value of pi is %f \n" , pi); // %f is for float

    char star = '*';
    printf("The start is %c \n" , star); //%c for characters
}