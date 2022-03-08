// here i have code whther the number is odd or even 

#include <stdio.h>

int main(){
    int a;
    printf("Type the value of a : ");
    scanf("%d" , &a);
    printf("%d" , a % 2 == 0);
}