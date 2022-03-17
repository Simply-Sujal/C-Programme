

#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,x,area;
    printf("Type the value of a : ");
    scanf("%f" , &a);

    printf("Type the value of b : ");
    scanf("%f" , &b);

    printf("Type the value of c : ");
    scanf("%f" , &c);

    float d = (a+b > c) && (b+c > a) && (c+a > b);
    x = (a + b + c)/2;
    area = sqrt(x*(x-a)*(x-b)*(x-c));
    printf("\nArea of Triangle is : %.3f" , area); 
}