
// here we will see how to take input in C programming 
#include <stdio.h>

int main(){
    int a;
    int b;

    printf("Enter th first number : ");
    scanf("%d" , &a); //The Address Operator in C also called a pointer. This address operator is denoted by “&”. This & symbol is called an ampersand. This & is used in a unary operator.
    printf("Enter the second number : ");
    scanf("%d" , &b);

    printf("The sum of two number is %d \n" , a + b);
    printf("The sub of two number is %d \n" , a - b);
    printf("The product of two number is %d \n" , a * b);
    printf("The division of two number is %d \n" , a / b);
}