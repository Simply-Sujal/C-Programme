// Q7. WAP to calculate the sum of digits of a given number and find the average of it.


#include <stdio.h>

int main(){
    int mod;
    int div;
    int count = 0;
    int average;
    int sum = 0;
    int num;
    printf("Type any number : ");
    scanf("%d" , &num);

    while (num != 0)
    {
        mod = num % 10;
        sum = sum + mod;
        num = num / 10;
        count = count + 1;
    }

    average = sum / count;
    printf("The average of a number is : %d" , sum);
    printf("\n");
    printf("The average of a number is : %d",average);
    
}