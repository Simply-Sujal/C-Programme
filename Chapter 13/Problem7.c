
// WAP in C to input n numbers in an array, then copy all the element to another array and
// print it.

#include <stdio.h>

int main(){
    int arr1[5];
    int arr2[5];
    printf("Type the elements : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d" , &arr1[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr1[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d" , arr2[i]);
        printf(" ");
    }
    
}