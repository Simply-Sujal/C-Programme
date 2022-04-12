// Q10. WAP to input numbers till the user inputted 0, and count how many numbers entered by the user.

#include <stdio.h>

int main(){
    int count = 0;
    int num = 1;
    while (num != 0)
    {
        printf("Type numbers : ");
        scanf("%d",&num);
        printf("The number is : %d\n",num);
        count++;
    }
    if (num == 0)
    {
        printf("The total number user have entered is : %d\n" , count-1);
    }
    return 0;
}