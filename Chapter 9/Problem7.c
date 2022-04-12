// 7.	WAP in C to evaluate the equation y=xn where n is a non-negative integer.

#include <stdio.h>

int main(){

    int count,n;
    float x,y;
    printf("Enter the values of x and n\n");
    printf("\nX=");
    scanf("%f",&x);

    printf("\nn=");
    scanf("%d",&n);

    y=1.0;
    count=1;
    while(count <= n)
   {
    y=y*x;
    count++;
  }
    printf("\n%f to power %d = %f",x,n,y);
}
