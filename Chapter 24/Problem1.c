// WAP in C to swap of two numbers using call by reference. 

#include <stdio.h>

void swapping(int *x , int *y);

int main(){
    int a , b;
    printf("Type two number : ");
    scanf("%d%d" , &a , &b);

    swapping(&a , &b);

    printf("After Swapping the number is : %d\t%d" , a , b);
}

void swapping(int *x , int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}