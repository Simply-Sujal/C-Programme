// WAP in C to concatenate two array using pointer. 

#include<stdio.h>
int main()
{
    int arr1[50], arr2[50], n1, n2, i;
    printf("Enter size of first array : ");
    scanf("%d", &n1);
    printf("Enter elements of array 1 : \n");
    for(i=0; i<n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter size of second array : ");
    scanf("%d", &n2);
    printf("Enter elements of array 2 : \n");
    for(i=0; i<n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("\nConcatenation of array : \n");
    for(i=n1; i<n1+n2; i++)
    {
        *(arr1+i) = *(arr2+i-n1);
    }
    for(i=0; i<n1+n2; i++)
    {
        printf("%d ", *(arr1+i));
    }
    printf("\n");
    return 0;
}