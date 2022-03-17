

#include<stdio.h>

int main(){
    int base;
    int altitude;
    printf("Type the value of base : ");
    scanf("%d" , &base);
    printf("Type the value for altitude : ");
    scanf("%d" , &altitude);

    int AreaOfTriangle =  0.5 * (base * altitude);
    printf("The AreaOfTriangle is : %d" , AreaOfTriangle);
}