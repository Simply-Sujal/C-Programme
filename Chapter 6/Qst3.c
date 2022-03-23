
// Q2. WAP to input any three integers distinct and display the greater of three integers.

#include <stdio.h>

int main(){
    int a;
    printf("Type the first number : ");
    scanf("%d" , &a);
    int b;
    printf("Type the second number : ");
    scanf("%d" , &b);
    int c;
    printf("Type the first number : ");
    scanf("%d" , &c);

    if(a > b && a > c){
        printf("A is the greatest");
    }
    else if (b > a && b > c)
    {
        printf("B is the greatest");
    }
    else{
        printf("C is the greatest");
    }
}
