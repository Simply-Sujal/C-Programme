// Q5. WAP in C to calculate the series like, 1+2+3+4+..N

#include <stdio.h>

int main(){
    int add = 0;
    int n;
    printf("Type the number : ");
    scanf("%d" , &n);

    for (int i = 1; i <= n; i++)
    {
        add = add + i;
    }
    printf("%d" , add);
    
}