// Q2. WAP in C to input n numbers in an array, reverse the array and display.

#include <stdio.h>

int main(){
    int arr[5];
    printf("Type the numbers : ");
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d" , &arr[i]);
    }

    for (int i = 4; i >= 0; i--)
    {
        printf("%d" , arr[i]);
        printf(" ");
    } 
}