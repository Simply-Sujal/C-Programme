

#include <stdio.h>

int sum(int x , int y);

int main(){
    int a,b;
    printf("Type the first number : ");
    scanf("%d",&a);

    printf("Type the second number : ");
    scanf("%d",&b);

    int addition = sum(a,b);
    printf("%d",addition);

    return 0;
}

int sum(int x , int y){
    return x + y;
}