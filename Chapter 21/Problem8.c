// WAP in C to reverse an array using recursive function. 

#include <stdio.h>

void reverse(int i, int n, int arr[]);

int main(){
    int i, n, arr[50];
    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("After reversing the array: ");
    reverse(0, n, arr);

}

void reverse(int i, int n, int arr[]){
    if(i==n){
    return;
}

    reverse(i+1, n, arr);
    printf("%d ", arr[i]);
}