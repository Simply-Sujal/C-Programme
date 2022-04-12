
// 1. WAP to read an alphabet from the user and convert it into lowercase if the entered alphabet is in uppercase, otherwise display an appropriate message.

#include <stdio.h>

int main(){
    int asciiValue;
    char ch;
    printf("Type any character in Uppercase : ");
    scanf("%c" , &ch );

   if (ch >= 'A' && ch <= 'Z')
   {
    asciiValue = ch + 32;
    printf("The lower case form is : %c" ,asciiValue);
    }
    else{
        printf("Please enter appropriate Chracter.");
    }
    return 0;
}