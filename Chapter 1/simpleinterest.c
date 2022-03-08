

// write a programme for simple interest

#include <stdio.h>

int main(){
    int P;
    printf("Type the principle value : ");
    scanf("%d" , &P);
    int R;
    printf("Type the Rate value : ");
    scanf("%d" , &R);
    int T;
    printf("Type the time : ");
    scanf("%d" , &T);

    int SI = (P * R * T)/100;

    printf("The SI of given values are : %d" , SI);

    return 0;

}