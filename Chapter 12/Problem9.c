// WAP in C to input 5 numbers in an array and display.

#include <stdio.h>

int main(){
    int arr[5];
    printf("Type the number : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d" , &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d" , arr[i]);
        printf(" ");
    }
}