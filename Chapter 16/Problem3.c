// WAP in C to input elements in to two matrix of size m*n and p*q, then find the sum of two matrix.
// Important addition and subtraction can only be done when the dimensions are same.

#include <stdio.h>

int main(){
    int arr1[2][3];
    int arr2[2][3];
    int arr3[2][3];
    printf("Type the element for arr[2][3] : ");

    // this loop is for taking element inside arr1
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d" , &arr1[i][j]);
        }
        printf("\n");
    }
    
    // this loop is for taking element inside arr2
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d" , &arr2[i][j]);
        }
        printf("\n");
    }

    // now we will add two array and store it inside arr3
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    // now we will print the addition array 
    printf("The resultant array is : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t" , arr3[i][j]);
        }
        printf("\n");
    }
        
}