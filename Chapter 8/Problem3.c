// Q3. WAP to print all numbers within a given range. The range is given by user.


#include <stdio.h>

int main(){
    int a,b;
    printf("Type the starting point : ");
    scanf("%d",&a);
    printf("Type the end point : ");
    scanf("%d" , &b);

    
    while(a <= b)
    {
        printf("%d" ,a);
        ++a;
        printf("\n");
    }
    
}