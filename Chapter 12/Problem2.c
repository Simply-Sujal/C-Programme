// WAP in C to print n prime numbers from 10.

#include <stdio.h>

int main(){
    int i, count=0, j;
    printf("Prime numbers are:\n");
    for(i=10; i<=45; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               count++;
               break;
           }
        }
        if(count==0 && i!=1)
            printf("%d\n", i);
        count = 0;
    }
    return 0;
}