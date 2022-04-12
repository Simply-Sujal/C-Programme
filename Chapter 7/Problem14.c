// Write a program to display whether the Wheatstone bridge is balanced or not, if not find out value of the variable resistance to balance the bridge.

#include<stdio.h>
int main()
{
    int r1, r2, r3, r4;
    printf("Enter value of r1 : ");
    scanf("%d", &r1);
    printf("Enter value of r2 : ");
    scanf("%d", &r2);
    printf("Enter value of r3 : ");
    scanf("%d", &r3);
    printf("Enter value of r4 : ");
    scanf("%d", &r4);
    
    if ((r1/r2) == (r3/r4))
    {
        printf("The circuit is wheatstone bridge\n");
    }
    else if ((r1/r2) != (r3/r4))
    {
        printf("The circuit is not wheatstone bridge\n");

        //let the variable resistance r1 be x;

        float x=(r3/r4) * r2;

        printf("The variable resistance is x = %f , then it is a wheatstone bridge\n", x);
    }

    return 0;   
}