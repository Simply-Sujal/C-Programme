// WAP to compare two strings.

#include<stdio.h>
int main()
{
    int flag = 0, i;
    char s1[50], s2[50];
    printf("Enter first string : ");
    gets(s1);
    printf("Enter second string : ");
    gets(s2);
    for(i=0; s1[i]!='\0'||s2[i]!='\0'; i++)
    {
        if(s1[i] != s2[i])
    {
        flag = 1; // not same
        break;
    }
    }
    if(flag==0){
        printf("Both strings are same.\n");
    }
    else
    {
        printf("Both strings are not same.\n");
    }
    
}