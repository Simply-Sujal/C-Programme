// WAP in C to calculate x y by writing a function(say POWER) for it. 

#include <stdio.h>

int power(int n1, int n2);

int main() {
    int base, pow, result;
    printf("Enter base number : ");
    scanf("%d", &base);
    printf("Enter positive integer : ");
    scanf("%d", &pow);

    result = power(base, pow);
    printf("%d^%d = %d", base, pow, result);
}
int power(int base, int pow) {
    if (pow != 0){
        return (base * power(base, pow - 1));
    }
    else{
        return 1;
    }
}