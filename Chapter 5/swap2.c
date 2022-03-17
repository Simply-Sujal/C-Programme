
// Here i swapped two number without creating the third variable 
#include <stdio.h>

int main(){
    int a,b;
    printf("Type a number : ");
    scanf("%d" , &a);

    printf("\n");

    printf("Type b number : ");
    scanf("%d" , &b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("The number a is : %d \n" , a);
    printf("The number a is : %d" , b);

}