// WAP in C to input n integers in an array and display the array like 1 st all the odd numbers and then all the even numbers available in the array. Example a[]={1,2,3,4,5,6}, O/P: a[]={1,5,3,4,2,6}

#include <stdio.h>

int main(){
    int n;
    printf("Type the size of an array : ");
    scanf("%d" , &n);
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &arr1[i]);
    }
    
    int x = 0;
    int y = 0;
    int arr2[n];
    int arr3[n];

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] % 2 != 0)
        {
            arr2[x] = arr1[i];
            x++;
        }else{
            arr3[y] = arr1[i];
            y++;
        }
        
    }

    printf("Odd numbers are :\n");
    for(int i = 0; i < x; i++){
	printf("%d ",arr2[i]);
    }

    printf("\n");

    printf("Even numbers are : \n");
    for(int i = 0; i < y; i++)
    {
	printf("%d ", arr3[i]);
    }
   
}