// WAP in C to display the transpose of a non-square matrix.

#include <stdio.h>

int main(){
    int arr1[10][10];
    int arr2[10][10];
    int m,n,p,q;
    printf("Type the value for row and coloumn for arr1 : ");
    scanf("%d%d" , &m , &n); 
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d" , &arr1[i][j]); // here am taking the elements into the array
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d \t" , arr2[i][j]);
        }
        printf("\n");
    }
    
}