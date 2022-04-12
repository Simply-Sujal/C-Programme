// WAP in C to calculate the series like,1+ 2/2! + 3/3! + 4/4! + ... N/N!

#include <stdio.h>

int main(){
    float sum = 0;
    int fact = 1;
    int n; 
    printf("Type the number : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum = sum + ((i*1.0) / fact);
    }
    printf("%f" , sum);
    
}