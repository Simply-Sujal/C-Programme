// WAP in C to find out the sum of 1 st n natural numbers. 

#include <stdio.h>

int sumOfNaturalNumber(int n);

int main(){
    int num;
    printf("Type the number to be added : ");
    scanf("%d" , &num);

    printf("Sum of n natural number is : %d" , sumOfNaturalNumber(num));
}

int sumOfNaturalNumber(int n){
    // base condtion
    if (n == 0){
        return n; 
    }

    return (n + sumOfNaturalNumber(n-1));
}