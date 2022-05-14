// WAP in C to merge of two array using function. 

#include <stdio.h>

void mergeArray(int arr1[], int n1, int arr2[], int n2, int arr3[]);

int main(){

    int n1,n2,n3;
    printf("Type the size for arr1 : ");
    scanf("%d" , &n1);

    int arr1[n1];
    printf("Type the elements for arr1 : \n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d" , &arr1[i]);
    }

    printf("Type the size for arr2 : ");
    scanf("%d" , &n2);

    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        scanf("%d" , &arr2[i]);
    }
    
    n3 = n1 + n2;
    int arr3[n3];
    mergeArray(arr1,n1,arr2,n2,arr3);

    printf("The merger array is : \n");
    for (int i = 0; i < n3; i++)
    {
        printf("%d\t" , arr3[i]);
    }
    
}

void mergeArray(int arr1[], int n1, int arr2[], int n2, int arr3[]){

    int n3;
    n3 = n1 + n2;
    for (int i = 0; i < n3; i++)
    {
        if (i < n1)
        {
            arr3[i] = arr1[i];
        }else{
            arr3[i] = arr2[i - n1];
        }
        
    }
    
}

