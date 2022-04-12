#include<stdio.h>

int main()
{
    int a,b;
    int select;
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Modulous\n");
    printf("Enter the values of a & b: ");
    scanf("%d %d",&a,&b);
    printf("Enter any number in between 1 to 5 : ");
    scanf("%d",&select);
    switch(select)
    {
    case 1	:
        printf("Sum of a and b is : %d" ,a+b);
        break;
    case 2	:
        printf("Difference of a and b is : %d" ,a-b);
        break;
    case 3	:
        printf("Multiplication of a and b is : %d" ,a*b);
        break;
    case 4	:
        printf("Division of Two Numbers is : %d" ,a/b);
        break;
    case 5 :
        printf("Modulo of two number is : %d" ,a % b);
        break;
    }
    return 0;
}