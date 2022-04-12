// WAP in C to swap first element with last, second element with second last and so on,
// and display the array elements.

#include <stdio.h>

int main(){
    int temp = 0;
    int n;
    printf("Type the size of an array : ");
    scanf("%d" , &n);

    int arr[n];
    printf("Type the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for(int j=n ; j>0 ; j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
 } 
    for (int i = 0; i < n; i++)
    {
        printf("%d" , arr[i]);
        printf(" ");
    }
}
