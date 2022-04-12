// / Q9. WAP to find out the middle digit of a number.

#include <stdio.h>

int main(){
    int c = 0;
    int b = 0;
    int deno = 1;
    int i = 1;
    int temp;
    int mid_digit;

    int num;
    printf("Type any number : ");
    scanf("%d" , &num);

    temp = num;
    while (temp != 0)
    {
        c++;
        if (c % 2 == 0)
        {
            b++;
        }
        temp = temp / 10;
    }

    if (c % 2 == 0)
    {
        b--;
    }
    
    while (i <= b)
    {
        deno = deno * 10;
        i++;
    }

    if(c % 2 != 0){
        mid_digit = (num/deno)%10;
        printf("The middle digit of odd number is : %d" , mid_digit);
    }else{
        mid_digit = (num/deno)%100;
        printf("The middle digit of even number is : %d" , mid_digit);
    }
    
}