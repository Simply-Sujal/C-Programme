// WAP in C to sum the following series S=1+(1+2)+(1+2+3)+...+(1+2+3+...+n). n is inputted by the
// user.

#include <stdio.h>

int main(){
    int add;
    int total = 0; 
    int num;
    printf("Type the number : ");
    scanf("%d" , &num);

    for (int i = 1; i <= num; i++)
    {
        add = 0;
        for (int j = 1; j <= i; j++)
        {
            add = add + j;
        }
        
        total = total + add;
    }
    printf("The total sum of the series is : %d" , total);
}