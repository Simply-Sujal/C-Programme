
// 1
// 12
// 123
// 1234
// 12345
// 1234
// 123
// 12
// 1

#include <stdio.h>

int main(){
    int i,j;
    for(i = 1; i <= 5; i++){
        for(j = 1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    for(int k = 4;k >= 1;k--){
        for (int l = 1; l <= k ; l++)
        {
            printf("%d",l);
        }
        printf("\n");
    }
}

