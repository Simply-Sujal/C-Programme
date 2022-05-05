// WAP in C to find out the centre element of a square matrix.
#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Type the string you want : "); 
    gets(a); // here i am taking the string value
    printf("The string is : ");
    puts(a); // output the real string which you have enetered

    int len = strlen(a); // this will store the length of the string
    printf("The reverse string is : ");
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c" ,a[i]);
    }
    printf("\n");
    
    return 0;
}