// WAP in C to search an element in an array using pointer. 

#include<stdio.h>
int main()
{
    int a[50], n, x, *p, i, flag=0;
    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("Enter elements of array : \n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the number to be searched : ");
    scanf("%d", &x);

    p = &a;

    for(i=0; i<n; i++)
    {
        if(*p==n)
        {
            flag=1;
            break;
        }
        p++;
    }
    if(flag==1)
    {
        printf("The number is found.\n");
    }
    else
    {
        printf("Number is not present here.\n");
    }
    return 0;
}