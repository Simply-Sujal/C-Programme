// Q3. WAP to input any three integers distinct and display the 2 nd greatest of three integers.

#include <stdio.h>

int main(){
    int a,b,c;
    printf("Type the first number : ");
    scanf("%d" , &a);

    printf("Type the second number : ");
    scanf("%d" , &b);

    printf("Type the third number : ");
    scanf("%d" , &c);

    if (a > b && a > c){
        if (b > c)
        {
            printf("The second largest number is : %d" , b);
        }else{
            printf("The second largest number is : %d" , c);
        }     
    }
    
    else if (b > a && b > c)
    {
        if (c > a)
        {
            printf("The second largest number is : %d" , c);
        }else{
            printf("The second largest number is : %d" , a);
        }    
    }
    
    else if (a > b)
    {
        printf("The second largest number is : %d" , a);
    }else{
        printf("The second largest number is : %d" , b);
    }
}