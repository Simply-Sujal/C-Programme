// WAP in C to input n integers in an array and display the array in unique elements, like if
// a[]={6,5,1,2,1,2,3,4,5,6,2}. O/P:={6,5,1,2,3,4}(Delete the duplicate elements)

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
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n; k++)
                {
                    arr[k] = arr[k+1];
                }
                n--;
                j--;
            }   
        }
    }
    
    printf("The array after removing duplicates : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d" , arr[i]);
    }
    

}