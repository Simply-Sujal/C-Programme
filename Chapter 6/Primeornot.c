
// Write a program to check whether the number is Prime or not. 

#include <stdio.h>

int main(){
    int check = 0; // 0 means number is prime and 1 means number is not prime
    int i;
    int num;
    printf("Type any number to check prime or not : ");
    scanf("%d" , &num);
    

    if(num == 0 || num == 1){
        printf("Number is not prime.");
    }
    
    for(i = 2; i <= num/2; ++i){
        if (num % i == 0)
        {
            check = 1;
            break;
        }
    }

    if (check == 0)
    {
        printf("The number is Prime");
    }else{
        printf("The number is not Prime");
    }

    return 0;
    
}