// Q4. WAP in C to input n numbers in an array, swap the pairing element and display.
// Example a[]={1,2,3,4,5}, O/P:=a[]={2,1,4,3,5}


#include <stdio.h>

int main(){
    int temp;
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d" , &arr[i]);
    }

    // i swapper the number
    for (int i = 0; i < 5; i+=2) // i = i + 2
    {
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }

    // here i printed the swaped number 
    for (int i = 0; i < 5; i++)
    {
        printf("%d" , arr[i]);
        printf(" ");
    }  
}