
// here i swapped two number by creating the third variable 

#include <stdio.h>

int main(){
    int a , b, temp;
    printf("Type a number : ");
    scanf("%d",&a);
    
    printf("Type b number : ");
    scanf("%d",&b);

    
    temp = a;
    a = b;
    b = temp;

    printf("The value of a is : %d \n" , a);
    printf("The value of b is : %d" , b);
}