
// print 
// * * * * *
// * * * * *
// * * * * * 
// * * * * *

#include <stdio.h>

int main(){
    int i,j;
    int rows,cols;
    printf("Type the number of rows : ");
    scanf("%d" , &rows);

    printf("Type the number of cols : ");
    scanf("%d" , &cols);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= cols; j++)
        {
            printf("* ");
        }
         printf("\n");
    }

    return 0;
    
}