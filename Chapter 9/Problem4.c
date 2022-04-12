// WAP in C to check whether a number n is palindrome  number or not

#include <stdio.h>

int main(){
    int sum = 0;
    int rem;
    int num;
    printf("Type the number : ");
    scanf("%d",&num);
    int temp = num;

    while (num != 0)
    {
        rem = num % 10;
        sum = sum * 10 + rem;
        num = num / 10;
    }

    if (sum == temp)
    {
        printf("The number is Palindrome.");
    }else{
        printf("The number is not Palindrome.");
    }
    
    
}