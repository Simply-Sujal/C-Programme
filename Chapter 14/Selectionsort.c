

#include <stdio.h>

int main(){
    int i,j,curr,temp;
    int n;
    printf("Type the size of an array : ");
    scanf("%d" , &n);
    int arr[n];
    printf("Type the element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d" , &arr[i]);
    }

    printf(" \n");

    for (i = 0; i < n-1; i++)
    {
        curr = i; // here i first seted the min. element to the first index.

        for (j = i + 1; j < n; j++)
        {
            if (arr[curr] > arr[j])
            {
                curr = j;
            }
        }
            if (curr != i)
            {
                temp = arr[i];
                arr[i] = arr[curr];
                arr[curr] = temp;
            } 
        }
    
    printf("The sorted array is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t" , arr[i]);
    }
    
}
