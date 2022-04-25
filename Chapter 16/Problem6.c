// WAP in C to display the lower triangular region of the inputted matrix. 

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

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t" , arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // now for lower triangular region 
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= j) // here is the condtion for lower triangle
            {
                printf("%d \t" , arr[i][j]);
            }else{
                printf("%d\t" , 0);
            }
        }
        printf("\n");
    }
}