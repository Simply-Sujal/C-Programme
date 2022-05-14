// WAP in C to search an element in an array of n numbers using function. 

#include <stdio.h>

int searchForAnElement(int arr[100] ,int n, int target);

int main(){
    int arr[100],n,target;
    printf("Enter the size of an array : ");
    scanf("%d" , &n);

    printf("Type the element : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &arr[i]);
    }

    printf("Type the search element : ");
    scanf("%d" , &target);

    searchForAnElement(arr,n,target);
}

int searchForAnElement(int arr[] , int n, int target){

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
			printf("%d" , i);
        }
 
    }
}