// Q8. WAP to check the inputted number is prime number or not.

#include <stdio.h>

int main(){
    int num;
    printf("Type any number to check prime or not : ");
    scanf("%d" , &num);
    int count = 2, prime = 1;  
  
    while(count < num)  
    {  
        if(num%count == 0)  
        {  
            prime = 0;  
            break;  
        }  
        count++;  
    }  
  
    if(prime) {
        printf("%d is prime number\n", num);
    }  
    else{
        printf("%d is not prime number\n", num);  
    }     
  
    return 0;  
}  
