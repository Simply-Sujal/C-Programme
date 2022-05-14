// WAP in C to find the sum of n elements in an array using user defined function. 

#include <stdio.h>

int main(){
    int arr[100],sum,n;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    sum = sumOfArray(arr,n);
    printf("The sum of the array elements are : %d" , sum);
}

int sumOfArray(int arr[] , int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
    
}