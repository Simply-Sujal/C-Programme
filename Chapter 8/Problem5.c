// Q5. WAP to input n numbers and find the average of odd and even numbers, then display the result.

#include <stdio.h>

int main(){
    int average;
    int num1,num2,num3,num4;
    printf("Type any number : ");
    scanf("%d %d %d %d" , &num1 , &num2 , &num3 , &num4);

    int sum = num1 + num2 + num3 + num4;

    if(sum % 2 == 0){
        printf("The number you have entered is Even \n");
        average = sum / 4;
        printf("The average of Even numbers are : %d",average);
    }else{
        printf("The number you have enetred is Odd \n");
        average = sum / 4;
        printf("The average of Odd numbers are : %d",average);
    }
}