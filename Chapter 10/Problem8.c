    //      *
    //    *   *
    //  *   *   *


#include <stdio.h>

int main(){
    int row;
    printf("Type the no. of row you want : ");
    scanf("%d",&row);
    int i,j,space;
    for(i = 1;i <= row;i++){
        for(space = 1; space <= (row - i); space++){ // this will give space
            printf(" ");
        }
        for(j = 1;j <= i; j++){
            printf("* ");   
        }
        printf("\n");
    }
}