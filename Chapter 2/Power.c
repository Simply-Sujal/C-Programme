

#include <stdio.h>
#include<math.h>

int main(){
    int a;
    int b;
    printf("Type the number a : \n");
    scanf("%d" , &a);
    printf("Type the number b : \n");
    scanf("%d" , &b);

    int power = pow(a , b); // is used to get the power like 5^2 = 25
    printf("%d" , power);
}