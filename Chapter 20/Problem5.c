// WAP in C to reverse an array using function. 

#include <stdio.h>

void reverse(int arr[100] , int n);

int main(){
    int arr[100],n;
    printf("Type the n : ");
    scanf("%d" , &n);

    // taking input in array
    printf("Type the array element : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &arr[i]);
    }

    reverse(arr,n);

    // printing the reverse array
    printf("The reverse array element is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t" , arr[i]);
    }
    
}

void reverse(int arr[100] , int n){
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    
}