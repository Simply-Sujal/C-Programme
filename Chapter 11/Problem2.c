

#include <stdio.h>

void message1();
void message2();

int main(){
    char country;
    printf("Type the first letter of your country : ");
    scanf("%c" , &country);
    if (country == 'i')
    {
        message1();
    }
    else if(country == 'f'){
        message2();
    }
    else{
        printf("Sorry , plse type the valid character!");
    }

    return 0;
    
}

void message1(){
    printf("Namaste"); // in India
}

void message2(){
    printf("Bonjour"); // in French
}


