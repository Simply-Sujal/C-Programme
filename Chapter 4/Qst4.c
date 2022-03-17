

// Q2. WAP in C to input a 4 digit integer number. Display the reverse of the number.

#include <stdio.h>

int main(){
    int a;
    printf("Type the four digit number : ");
    scanf("%d" , &a);
    int mod;
    int ans = 0;
    while (a != 0)      
    {
        mod = a % 10;
        ans = ans * 10 + mod;
        a /= 10;
    }
    printf("The reverse number is : %d" , ans);
    
}