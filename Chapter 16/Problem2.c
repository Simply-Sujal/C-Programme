// WAP in C to input elements in to two matrix of size m*n and p*q, then check that two matrix is equal or not.

#include <stdio.h>

int main(){
    int arr1[10][10];
    int arr2[10][10];
    int m,n,p,q;
    int ans = 1;
    printf("Type the row and coloumn for first array : ");
    scanf("%d%d" , &m,&n);
    printf("\n");
    printf("Type the row and coloumn for second array : ");
    scanf("%d%d" , &p,&q);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d" , &arr1[i][j]); // taking the element in first array
        }
    }

    printf("\n");

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d" , &arr2[i][j]); // taking the element in second array
        }
    }

    printf("\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t" , arr1[i][j]); // printing the first 2-d array
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d\t" , arr2[i][j]); // printing the second 2-d array
        }
        printf("\n");
    }

    printf("\n");
    // now comparing the two wheteher they are equal or not 
    if (m == p && n == q)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                if (arr1[i][j] != arr2[i][j])
                {
                    ans = 0; // means not equal materix
                    break;
                }  
            }
        }
    }
    
    if (ans == 1)
    {
        printf("The two matrix are equal!");
    }else{
        printf("The two matrix are not equal!");
    }
}