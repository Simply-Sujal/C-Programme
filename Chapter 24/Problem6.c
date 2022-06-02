// WAP in C to reverse a string using a pointer and print it. 

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str1[100];
    char str2[100];

    char *p1;
    char *p2;

    printf("Enter String : \n");
    gets(str1);
    p1 = str1 + strlen(str1) - 1;
    p2 = str2;
    while(p1 >= str1)
    {
       *p2 = *p1;
        p2++;
        p1--;
    }

    *p2 = '\0';
    printf("Original String: %s\n",str1);
    printf("Reverse String: %s",str2);
    return 0;
}