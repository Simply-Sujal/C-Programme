
// 54321
//  4321
//   321
//    21
//     1

#include <stdio.h>
int main()
{
    int space;
    int i, j;
    for(i= 5; i>=1; i--){
    for(space=5-i;space>0;space--){
    printf(" ");
    }
    for(j=i; j>=1; j--){
       printf("%d", j);
    }
    printf("\n");
}    
    return 0;
}
