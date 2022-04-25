// WAP in C to input elements to a matrix of size m*n, and display both the diagonal elements in X

// 1 2 3       1   3
// 4 5 6  =>     5
// 7 8 9       7   9

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

    if (m == n)
    {
        printf("The diagonal matrix is : \n");
         for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || i+j == m-1)
            {
                printf("%d" , arr[i][j]);
            }else{
                printf("    ");
            }
        }
        printf("\n");
    }
} else{
    printf("This is not a square matrix");
} 
}