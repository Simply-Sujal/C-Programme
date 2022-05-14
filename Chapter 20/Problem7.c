// WAP in C to sort an array using function. 

#include <stdio.h>

void sort(int arr[100] , int n);

int main(){
    int arr[100] , n;
    printf("Enter the size of an array : ");
    scanf("%d" , &n);

    printf("Type the array elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &arr[i]);
    }

    sort(arr,n);

    printf("The sorted array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t" , arr[i]);
    }
    
}

void sort(int arr[] , int n){
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    
}