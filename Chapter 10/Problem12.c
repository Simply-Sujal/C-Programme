
//     A
//    AB
//   ABC
//  ABCD
// ABCDE

#include <stdio.h>
int main(){
    int space;
   int i,j;
    for (i = 1; i <= 5; i++){
        for (space = 5 - i; space > 0; space--){
            printf(" ");
    }  
    for(j = 1; j <= i; j++){
    printf("%C",64+j); 
  }
    printf("\n");
}
    return 0;
}
