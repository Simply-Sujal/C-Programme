// WAP in C to input m and n numbers in two array, and display the concatenate of that
// two array.

#include <stdio.h>

int main(){
    int index = 0;
    int arr1[5];
    int arr2[5];
    int arr3[10];

    printf("Type the elements : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d" , &arr1[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        scanf("%d" , &arr2[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        arr3[index++] = arr1[i];
    }

    for (int i = 0; i < 5; i++)
    {
        arr3[index++] = arr2[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d" , arr3[i]);
        printf(" ");
    }
}