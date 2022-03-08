
// Print the sum of n natural number 

#include <stdio.h>

int main(){
    int num;
    printf("Type the number : ");
    scanf("%d" , &num);
    // int add = 0;
    // for (int i = 0; i <= num; i++)
    // {
    //     add = add + i;
    // }
    // printf("%d \n" , add);

    for (int j = num; j >= 0; j--)
    {
        printf("%d \n" , j);
    }
}