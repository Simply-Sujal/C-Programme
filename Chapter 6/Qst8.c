// Q7. WAP to read an alphabet from the user and convert it into uppercase if the entered
// alphabet is in lowercase, otherwise display an appropriate message.


#include <stdio.h>

int main(){
    char chLowerCase , chUpperCase;
    int asciiValue;
    printf("Type the character in lowercase : ");
    scanf("%c" , &chLowerCase);

    if (chLowerCase >= 'a' && chLowerCase <= 'z')
    {
        asciiValue = chLowerCase;
        chUpperCase = asciiValue - 32;
        printf("The Uppercase form is : %c" , chUpperCase);

    }
    else{
        printf("Please enter the valid character");
    }

    return 0;
}