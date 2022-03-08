
// In this qst. we have to check whether the character is uppercase or lowercase

#include <stdio.h>

int main(){
    char ch;
    printf("Type the character : ");
    scanf("%c" , &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower Case");
    }
    else if(ch >= 'A' && ch <= 'Z'){
        printf("Upper Case");
    }
    else{
        printf("Not valid charcater");
    }
    
}