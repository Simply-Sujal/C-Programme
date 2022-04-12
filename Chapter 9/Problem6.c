// 6. WAP in C to find the first n numbers of a Fibonacci sequence.

#include <stdio.h>
void main() 
{
   int a=0;
   int b=1;
   int c,num;
   printf("Enter a number to generate fibonacci series for first n terms\n");
   scanf("%d",&num);

    // printf("Fibonacci series for first %d terms:\n",num);
    for(int i=0;i<num;i++){
        c = a + b;
        a = b;
        b = c;

        printf("Fibonacci series for first n terms: %d \n",c);
    }
}
