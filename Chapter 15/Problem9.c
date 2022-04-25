// Enter score of 10 cricket players and count number of century scored. Discard the
// -ve score if you enter by mistake. (Use goto statement for this program).

#include <stdio.h>

int main(){
    int count = 0;
    int n = 10;
    int arr[n];
    printf("Type the score of 10 players : ");
    for (int i = 0; i < n; i++)
    {
        out:
        printf("Player %d : " , i + 1);
        scanf("%d" , &arr[i]);
        if (arr[i] >= 100)
        {
            count++;
        }
        if (arr[i] < 0)
        {
            printf("You have enetered the neagive number . \n Please enter the score once again : \n");
            goto out;
        }
    }   
    printf("Number of centuries : %d" , count);
}