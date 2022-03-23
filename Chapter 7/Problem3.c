// Q3. WAP in C to input a number and print how many digits of the number. The number
// should not more than 4 digit.

#include <stdio.h>

int main(){
    int count = 0;
    int num;
    printf("Type any number : ");
    scanf("%d" , &num);

    if (num != 0)
    {
    while (num != 0)
    {
        num = num / 10;
        ++count;
    }
    printf("%d" , count);
    }
}