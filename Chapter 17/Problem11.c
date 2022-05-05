// WAP to concatenate two strings. 

#include<stdio.h>
#include<string.h>
    int main()
    {
    int l1, l2, i;
    char s1[50], s2[50];
    printf("Enter first string : ");
    gets(s1);
    printf("Enter second string : ");
    gets(s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0; i<=50; i++)
    {
    s1[l1+i]=s2[i];
    }
    printf("String after concatenation is : %s\n", s1);

}