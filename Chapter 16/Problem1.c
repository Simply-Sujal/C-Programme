// WAP in C to input elements to a matrix of size m*n, and display the matrix and display the sum of odd numbers and even numbers.

#include <stdio.h>

int main(){
    int even = 0;
    int odd = 0;
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
    printf("The matrix of m*n is : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d" , arr[i][j]); // here displaying the array
        }
        printf("\n");  
    }

    printf("\n");   
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] % 2 == 0) // this check is for even number 
            {
               even = even + arr[i][j];
            }else{
                odd = odd + arr[i][j]; // this is for odd number
            }
        }
    }

    printf("The sum of even number is : %d" , even);
    printf("\n");
    printf("The sum of odd number is : %d" , odd);
    
}