// Reverse a string using strrev() and without strrev()

#include <stdio.h>
#include <string.h>

int main(){
    // this is using strrev()
    // char s1[30] = "Sujal Kumar";
    // strrev(s1);
    // printf("%s" , s1);

    // without using strrev() 
    // char ch;
    // int len;
    // char s2[30] = "Sujal";
    // printf("The original string is : %s\n" , s2);
    // len = strlen(s2);
    // for (int i = 0; i < len/2; i++)
    // {
    //     ch = s2[i];
    //     s2[i] = s2[len - i - 1];
    //     s2[len - i - 1] = ch; 
    // }
    // printf("The Reverse of string is : %s" , s2);

    // using two pointer 
    int i,j;
    char ch;
    int len;
    char s2[30] = "Sujal";
    printf("The original string is : %s\n" , s2);
    len = strlen(s2);
    for (i = 0,j = len - 1; i < j; i++,j--)
    {
        ch = s2[i];
        s2[i] = s2[j];
        s2[j] = ch;
    }
    printf("The Reverse of string is : %s" , s2);
}