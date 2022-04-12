// Q6. WAP in C to calculate the series like,1 e +2 e +3 e +4 e +..N e . Here e value should be enter by the user.

#include <stdio.h>
#include <math.h>

int main(){
    float add = 0;
    int n;
    int e;
    printf("Type the number : ");
    scanf("%d" , &n);
    printf("Type the power : ");
    scanf("%d" , &e);

    for (int i = 1; i <= n; i++)
    {
        add = add + pow(i,e);
    }
    
    printf("%f" , add);
}