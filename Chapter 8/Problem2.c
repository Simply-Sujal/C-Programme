// Q2. WAP to print all the natural numbers from 50 to 20.

#include <stdio.h>

int main(){
    int i = 50;
    while(i >= 20)
    { 
        printf("%d" , i);
        --i;
        printf("\n");
    }
}