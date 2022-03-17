

// Q3. WAP in C to input a 3 digit integer number. Use pre ++ in the middle bit digit and formulate the number
// and display it.(consider if the number is converted to 4 digit number). Exmp=995, 1005

#include <stdio.h>

int main(){
    int a;
    printf("Type the three digit number : ");
    scanf("%d" , &a);

    int mod = a % 10;
    int div = a / 10;
    
    int ans = ++div;
    printf("The number is : %d" , (ans*10)+mod);
}