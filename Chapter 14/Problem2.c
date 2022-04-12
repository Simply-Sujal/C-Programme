// WAP in C to input n integers in an array and display the array in such a way that the i th indexed value is replaced by the product of all the pervious and next indexed value. Example a[]={1,2,3,4,5}, O/P: a[]={120,60,40,30,24}

#include <stdio.h>

int main(){
    int n;
    printf("Type the size of an array : ");
    scanf("%d" , &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &arr[i]);
    }
    
    int prod = 1;

    for (int i = 0; i < n; i++)
    {
        prod = prod * arr[i];
    }

    for (int i = 0; i < n; ++i) {
        arr[i] = prod / arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\t" , arr[i]);
    }
    
    
}