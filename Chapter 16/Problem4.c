// WAP in C to input elements to a matrix of size m*n, and display the diagonal elements.

#include <stdio.h>

int main(){
    int arr[10][10];
    int m,n;
    printf("Type the value for row and coloumn : ");
    scanf("%d%d" , &m , &n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d" , &arr[i][j]); // here am taking the elements into the array
        }
        printf("\n");
    }

    printf("The diagonal matrix is : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d" , arr[i][j]);
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
}