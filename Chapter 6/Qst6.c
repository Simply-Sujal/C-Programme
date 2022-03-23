// Q5. WAP to read an alphabet from the user check it in uppercase or lowercase letter.

#include <stdio.h>

int main(){
    char ch;
    printf("Type any character : ");
    scanf("%c" , &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("The character is in LowerCase!");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("The character is in UpperCase!");
    }
    
    
}