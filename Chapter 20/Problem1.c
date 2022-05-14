// WAP in C to input n number to an array and display using 2 user defined function
// like input() and display().[Hints: in input() do not take any argument, consider the
// concept of global declaration and the display(), takes the argument.

#include <stdio.h>

void input(int arr[] , int n);
void display(int arr[] , int n);

int main(){    
    int n = 10;
    int arr[n];
    input(arr,n);
    display(arr,n);
}


// this is for taking input 
void input(int arr[] , int n){
    printf("Enter array element : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &arr[i]);
    }
    
}

// this is for printing the array
void display(int arr[] , int n){
    printf("The array elements are : ");
    for (int i = 0; i < n; i++)
    { 
        printf("%d\t" , arr[i]);
    }
}