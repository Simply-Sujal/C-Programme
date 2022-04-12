
#include <stdio.h>

void table(int n);

int main(){
    int n;
    printf("Type any number : ");
    scanf("%d",&n);

    table(n); //arguement/actual parameter
}

void table(int n){ // parameter or formal parameter
    int mul;
    for (int i = 1; i <= 10; i++)
    {
        mul = n * i;
        printf("%d \n" , mul);
    }
    
    
}