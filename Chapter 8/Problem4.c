// Q4. WAP to print all the natural numbers from 1 to 200 in different lines. User should decide how many numbers print in a line.

#include<stdio.h>

int main ()
{
    int num;
    printf("Type the line difference : ");
    scanf("%d" , &num);
    int a = 1;
  
     while ( a <= 200 ) 
    {
        printf("%d%c", a, (a%num) ? '\t' : '\n');
        a++;
    }
    return 0;
}