
//Write a programme to check if given character is digit or not 

#include <stdio.h>

int main(){

    char ch;
    printf("Type any character : ");
    scanf("%c" , &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        printf("This is the alphabet chracter : %c" , ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("This is the numeric chracter : %c" , ch);
    }
    else{
        printf("This is the special chracter : %c" , ch);
    }
    
}