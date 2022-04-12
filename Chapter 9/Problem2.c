// WAP in C to find the LCM of two integers

#include <stdio.h>

int main(){
    int num1,num2,maxNumber;
    printf("Type the two number : ");
    scanf("%d %d", &num1 , &num2);

    maxNumber = (num1 > num2) ? num1 : num2;

    while (1)
    {
        if (maxNumber % num1 == 0 && maxNumber % num2 == 0)
        {
            printf("The LCM of two number is : %d" , maxNumber);
            break;
        }
        maxNumber++;
    }
    return 0;
    
}