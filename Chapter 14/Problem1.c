// WAP in C to input n integers in an array and display the array like 1 st all the odd numbers and then all the even numbers available in the array. Example a[]={1,2,3,4,5,6}, O/P: a[]={1,5,3,4,2,6}

#include <stdio.h>
int main()
{
    int array[100], i, num;
    printf("Enter the size of an array \n");
 
    scanf("%d", &num);
    printf("Enter the elements of the array \n");
 
    for (i = 0; i < num; i++) 
    {
        scanf("%d", &array[i]);
    }
 
    for (i = 0; i < num; i++) 
    {
        if (array[i] % 2 != 0) 
        {
            printf("%d ", array[i]);
        }
    }

    for (i = 0; i < num; i++) 
    {
        if (array[i] % 2 == 0) 
        {
            printf("%d ", array[i]);
        }
    }
    printf("\n");
    return 0;
}