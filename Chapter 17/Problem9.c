// WAP to copy one string into another.

#include <stdio.h>
int main()
{
    char s1[50], s2[50],i;
    printf("Enter string s1:\n");
    gets(s1);
    for(i = 0; s1[i] != '\0'; ++i)
    {
    s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("\nString s2: %s\n", s2);
    return 0;
}