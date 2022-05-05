// with library function
// WAP to copy one string into another.


#include<stdio.h>
#include<string.h>

int main(){
    char s1[50];
    char s2[50];
    printf("\nEnter string s1 : ");
    gets(s1);
    strcpy(s2, s1);
    printf("\nCopied String s2 : %s\n", s2);

}