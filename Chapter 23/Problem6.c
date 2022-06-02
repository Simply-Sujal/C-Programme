// WAP in C to print array elements in reverse order using pointer. 

#include<stdio.h>
int main()
{
    int n, i, a[50], *ptr;
    printf("Enter the number of integers : ");
    scanf("%d", &n);

    printf("\nEnter the integers : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    ptr = &a[n-1];

    printf("\nIntegers in reverse order : ");

    for(i=0; i<n; i++)
    {
        printf("%d ", *ptr);
        *ptr--;
    }
    printf("\n");
    return 0;
}