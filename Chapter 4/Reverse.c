

#include <stdio.h>

int main(){
    int a , b , c , d , e , f , g , reverse;
    printf("Enter the 4 digit number : ");
    scanf("%d" , &a);

    b = a / 1000;
    c = a % 1000;
    d = c / 100;
    e = c % 100;
    f = e / 10;
    g = e % 10;

    reverse = (g * 1000) + (f * 100) + (d * 10) + b;
 
    printf("Reverse Number : %d \n",reverse);
}
