// WAP in C to calculate the series like, 1 +12 + 123 + 1234 + .. n

#include <stdio.h>

int main(){
    int sum = 0;
    int add = 0;
    int n;
    printf("Type the number : ");
    scanf("%d" , &n);

    for (int i = 1; i <= n; i++)
    {
        add = add * 10 + i;
        printf("%d" , add);
        printf(" ");  
        sum = sum + add;
    }
    printf("\n");
    printf("%d" , sum);
      
}