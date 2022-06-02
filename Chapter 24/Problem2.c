// WAP in C to sort an array using Pointer. 

#include<stdio.h>
int main()
{
    int arr[50], n, *p, temp;
    p=&arr[0];

    printf("Enter size of array : ");
    scanf("%d", &n);
    printf("Enter elements of array : \n");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", (p+i));
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(*(p+j) > *(p+(j+1)))
            {  
                temp = *(p+j);
                *(p+j) = *(p+(j+1));
                *(p+(j+1)) = temp;
            }
        }
    }

    printf("Array elements after sorting : \n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", *(p+i));
    }
    printf("\n");
    return 0;
}