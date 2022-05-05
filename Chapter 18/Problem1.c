// WAP to read a sentence in lowercase and make the sentences in proper case like 1 st letter of the word should be in uppercase.

#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Type the sentece in LowerCase : ");
    gets(a);

    int len = strlen(a);
    int i;
    for (i = 0; i < len; i++)
    {
        if (i == 0)
        {
            if (a[i] >= 'a' && a[i] <= 'z')
            {
                a[i] = a[i] - 32; // here i converted lowercase letter into uppercase letter 
                printf("%c", a[i]);
            }
        }
        
        else if(a[i-1] == ' ') // hellow world => checking for the space just before any word
        {
            if(a[i] >= 'a' && a[i] <= 'z')
            {
                a[i]= a[i] - 32;
                printf("%c", a[i]);
            }
        }

        else
        {
            printf("%c", a[i]);
        }
    }

    printf("\n");
    return 0;

}