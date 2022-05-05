// WAP in C to input a string, reverse it and display.

#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Type the string : ");
    gets(a);
    printf("The typed string is : ");
    puts(a);

    int len = strlen(a);

    for (int i = 0; i < len/2; i++)
    {
        char x = a[i];
        a[i] = a[len - i - 1];
        a[len - i - 1] = x;
    }

    printf("The reverse string is : ");
    puts(a);
    
}