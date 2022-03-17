

#include <stdio.h>

int main(){
    float celcius;
    printf("Type the tempertaure : ");
    scanf("%f" , &celcius);

    float fahrenheit = (celcius * 1.8) + 32;
    printf("The value of temp. in Fahrenheit : %f" , fahrenheit);
}