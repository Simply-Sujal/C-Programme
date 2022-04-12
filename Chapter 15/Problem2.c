// Twenty numbers are entered from the keyboard into an array. WAP to find out
// how many of them are positive how many are negative, how many are even and
// how many odd.

#include <stdio.h>

int main(){
    int even = 0;
    int odd = 0;
    int negative = 0;
    int positive = 0;
    int n = 20;
    int arr[n];
    
    printf("Type the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            negative++;
        }else{
            positive++;
        }

        if (arr[i] % 2 == 0)
        {
            even++;
        }else{
            odd++;
        }
    }

    printf("Negative are : %d" , negative);
    printf("\n");
    printf("Positive are : %d" , positive);
    printf("\n");
    printf("Even are : %d" , even);
    printf("\n");
    printf("Odd are : %d" , odd);
    
}