// Q9. WAP in C to check a character is digit or alphabet. If alphabet then check vowel or
// consonant using nested switch structure.[ user can only input digit or alphabet].

#include <stdio.h>

int main(){
    char ch;
    printf("Type any digit or alphabet : ");
    scanf("%c" , &ch);

    if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        switch (ch)
    {
    case 'a' :
    printf("Character is Vowel");
    break;
    case 'e' :
    printf("Character is Vowel");
    break;
    case 'i' : 
    printf("Character is Vowel");
    break;
    case 'o' : 
    printf("Character is Vowel");
    break;
    case 'u' :
    printf("Character is Vowel");
    break;
    case 'A':
    printf("Character is Vowel");
    break;
    case 'E':
    printf("Character is Vowel");
    break;
    case 'I':
    printf("Character is Vowel");
    break;
    case 'O':
    printf("Character is Vowel");
    break;
    case 'U':
    printf("Character is Vowel");
    break;

    default :
    printf("Character is consonant");
    break;
    }
    }

    else{
        printf("Digits or Some special characters");
    }
    
    return 0;
}