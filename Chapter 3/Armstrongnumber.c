
// Here we will write code for the armstrong number 

#include <stdio.h>

int main(){
    int num;
    printf("Type any number : ");
    scanf("%d" , &num);
    int mod;
    int div;
    int sum = 0;
    int temp = num;

    while (num > 0)
    {
        mod = num % 10;
        sum = sum + (mod * mod * mod);
        div = num / 10;
    }
    
    if (temp == sum)
    {
        printf("The number is Armstrong number");
    }else{
        printf("Not an Armstrong number");
    }
    
    
}