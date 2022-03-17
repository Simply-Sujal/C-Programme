
// WAP in C to input two times in terms of Hour, Minute and Second. Display the sum of that two time.

#include <stdio.h>

int main(){
    int hour1;
    printf("Type Hour : ");
    scanf("%d" , &hour1);
    int min1;
    printf("Type min : ");
    scanf("%d" , &min1);
    int second1;
    printf("Type sec : ");
    scanf("%d" , &second1);

    printf("\n");

    int hour2;
    printf("Type Hour : ");
    scanf("%d" , &hour2);
    int min2;
    printf("Type min : ");
    scanf("%d" , &min2);
    int second2;
    printf("Type sec : ");
    scanf("%d" , &second2);

    int SumofTime = (hour1 + min1 + second1) + (hour2 + min2 + second2);
    printf("\n");

    printf("The sum of time is : %d" , SumofTime);

}