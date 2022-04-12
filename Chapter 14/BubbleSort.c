
// here i code for the bubble sort algorithm 
// 
#include <stdio.h>

int main(){
    int arr[] = {5,2,3,1,4};
    int length = 5;
    printf("The unsorted array is : ");
    for (int i = 0; i < length; i++)
    {
        printf("%d" , arr[i]);
        printf(" ");
    }

    printf("\n");
    
    for (int i = 0; i < length - 1; i++) 
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                // here we will swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }   
        }
    }
    
    printf("The sorted array is : ");
    for (int i = 0; i < length; i++)
    {
        printf("%d" , arr[i]);
        printf(" ");
    }
    
}