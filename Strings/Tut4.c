// Program to concatenate two strings with strcat() and without strcat()

#include <stdio.h>
#include <string.h>

int main(){
    int len1 , len2;
    char s1[20] = "Sujal";
    char s2[20] = "Kumar";
    // strcat(s1,s2); // using strcat() may have some buffer overflow problem
    // strncat(s1,s2,2);

    // len1 = strlen(s1);
    // len2 = strlen(s2);

    // for (int i = 0; i <= len2; i++)
    // {
    //     s1[len1 + i] = s2[i];
    // }
    
    printf("The concat. of two strings : %s\n" , s1);
    // puts(s2);
    // printf("The concatination of two string is : %s" , s3);
}