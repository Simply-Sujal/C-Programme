// Q1. WAP in C to input n numbers in an array, find out the sum of odd nos. and even nos Display the numbers whose sum is high.

#include <stdio.h>

int main(){
    int ans1 = 0;
    int ans2 = 0;
    int arr[5];
    printf("Type the numbers : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d" , &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0){
            ans1 = ans1 + arr[i];
        }else{
            int ans2 = ans2 + arr[i];
        }
    }

    int ans = (ans1 > ans2) ? ans1 : ans2;  
    

    printf("The highest sum is : %d" ,ans);
}