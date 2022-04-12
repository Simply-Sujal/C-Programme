// Q3. WAP in C to input n numbers in an array, search one element and find out how many times the number available in the array, if the number is not available then display proper message.

#include <stdio.h>

int main(){
    int count = 0;
    int arr[5];
    int target = 15;
    printf("Type the number : ");

    for(int i = 0; i <= 4; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i <= 4; i++) 
    {
        int element = arr[i];
        if (element == target)
        {
            count = count + 1;
        }   
    }

    if (count == 0)
    {
        printf("The target element is no present in array \n");
    }
    
    printf("The total number is : %d" , count);
    
}