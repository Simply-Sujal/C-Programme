
//           *
//         * *
//       * * *
//     * * * *
//   * * * * *

#include <stdio.h>

int main(){
    
    int i,j;
    int row;
    printf("Type the number of row : ");
    scanf("%d",&row);

    for(i = 1; i <= row; i++){
        for(j = 1; j <= row; j++){
            if(i+j <= row){ // this check for line space
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
}