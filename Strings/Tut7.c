// Program to convert string from uppercase to lowercase using strlwr() and without using strlwr()

#include <stdio.h>
#include <string.h>

int main(){
    // using strlwr()
    // char s1[30] = "SujAL";
    // strlwr(s1);
    // printf("%s" , s1);

    char ch[50];
    gets(ch);
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ch[i] = ch[i] + 32;
        }
    }

    printf("The lowercase format of string is : %s" , ch);
    
}