// 1. WAP in C to find out the multiplication of two matrix.
// the first matrix must have the same number of columns as the second matrix has rows

#include <stdio.h>

int main(){
    int a[100][100];
    int b[100][100];
    int product[100][100];
    int aRow , aCol;
    int bRow , bCol;

    printf("Type the number of rows and coloumns : ");
    scanf("%d%d" , &aRow , &aCol);

    printf("Enter the elements inside first matrix : \n");
    for (int i = 0; i < aRow; i++)
    {
        for (int j = 0; j < aCol; j++)
        {
            scanf("%d" , &a[i][j]);
        }
         
    }


    printf("Type the number of rows and coloumns : ");
    scanf("%d%d" , &bRow , &bCol);

    if (bRow != aCol)
    {
        printf("We cant multiply the matrix a and b");
    }
    else{
        printf("Enter the elements inside second matrix : \n");
    for (int i = 0; i < bRow; i++)
    {
        for (int j = 0; j < bCol; j++)
        {
            scanf("%d" , &b[i][j]);
        }
         
    }
    }
    
    printf("\n");

    int sum = 0;
    for (int i = 0; i < aRow; i++)
    {
        for (int j = 0; j < bCol; j++)
        {
            for(int k = 0; k < bRow; k++){
                sum = sum + a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }


    // Printing the array element
    printf("The resultant matrix : \n");
    for (int i = 0; i < aRow; i++)
    {
        for (int j = 0; j < bCol; j++)
        {
            printf("%d " , product[i][j]);
        }
        printf("\n");
    }
    
    
}