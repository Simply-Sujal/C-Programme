// Q5. WAP in C to find largest and smallest element stored in an array.

#include <stdio.h>

int main(){
    int arr[5];
    printf("Type some numbers : ");
    int large,small;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d" , &arr[i]);
        large = small = arr[0];
    }

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
        if(small > arr[i]){
            small = arr[i];
        }
    }
    printf("The greatest number in an array is : %d \n" , large);
    printf("The lowest number in an array is : %d \n" , small);
}