// WAP in C to find the factorial of a number n by writing a recursive function for it.

#include<stdio.h>

int fact(int num);

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Factorial of num is : %d", fact(num));
    return 0;
}

int fact(int num) {
    // base condtion
    if(num == 0){
        return 1;
    }
    return num * fact(num - 1);
}