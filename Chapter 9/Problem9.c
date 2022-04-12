// WAP in C to input a decimal number and print binary equivalent of that number.


#include <stdio.h>

int main(){
    int rem = 0;
    int binary = 0;
    int place = 1;
    int num;
    printf("Enter the number in decimal form : ");
    scanf("%d",&num);

    while(num > 0){
        rem = num % 2;
        num = num / 2;
        binary = binary + (rem * place);
        place = place * 10;
    }

    printf("The binary equivalenet of decimal number is : %d" , binary);
}