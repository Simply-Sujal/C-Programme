// WAP in C to find out the centre element of a square matrix.

#include<stdio.h>

int main(){

    int m,n,a[20][20];
    printf("Enter the dimension of the square matrix : ");
    scanf("%d%d",&m,&n);

    if(m!=n){
    printf("The dimensions entered are of non square matrix.");
    return 0;
    }

    printf("Enter the elements of the matrix : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
    {
    printf("Enter a[%d][%d] value : ",i,j);
    scanf("%d", &a[i][j]);
    }
}   
    
    printf("\nCentre element of the matrix : \n");

    if(m%2!=0){
        printf(" %d",a[m/2][m/2]);
    }
    else{
        printf("%d\t%d\n%d\t%d",a[m/2-1][m/2-1],a[m/2-1][m/2],a[m/2][m/2-1],a[m/2]
        [m/2]);
    }
        printf("\n");
}