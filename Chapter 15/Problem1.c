// Find out reverse of a number and check whether the number is a palindrome or
// not.


#include <stdio.h>

int main(){
    int rem;
    int add = 0;
    int n;
    printf("Type the number : ");
    scanf("%d" , &n);
    int temp = n;

    while (n != 0)
    {
        rem = n % 10;
        add = add * 10 + rem;
        n = n / 10; 
    }

    if (add == temp)
    {
        printf("The number is Palindrome.");
    }else{
        printf("The number is not Palindrome.");
    }
}