

#include <stdio.h>

int main(){
    int a,b,c;
    printf("Type the value of a : ");
    scanf("%d" , &a);

    printf("Type the value of b : ");
    scanf("%d" , &b);

    printf("Type the value of c : ");
    scanf("%d" , &c);

    int check = (a+b)>c && (b+c)>a && (c+a)>b;

    int equilateral = (a==b) && (b==c) && (c==a);
    printf("%d" ,equilateral);
    
}