// Q10. WAP in C to input 5 numbers in an array and display in reverse order.

#include <stdio.h>

int main(){
    int arr[5];
    printf("Type the number : ");

    // Taking an input inside an array
    for (int i = 0; i < 5; i++)
    {
        scanf("%d" , &arr[i]);
    }

    // Reversing an array
    for (int i = 4; i >= 0; i--)
    {
        printf("Reverse number : %d" , arr[i]);
        printf(" ");
    }
}