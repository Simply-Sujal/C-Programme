// comparing two strings with strcmp() and without strcmp() 

#include <stdio.h>
#include <string.h>

int main(){
    // with strcmp() function 
    // int value;
    // char s1[] = "sujal";
    // char s2[] = "sujal";

    // value = strcmp(s1,s2);
    // if (value == 0)
    // {
    //     printf("Strings are same");
    // }else{
    //     printf("Sorry , the strings are not same : %d" , value);
        
    // }
    
    // without strcmp() function 
    int flag = 0;
    char s1[] = "Sujal";
    char s2[] = "Sujal";

    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("The strings are not equal");
    }else{
        printf("The strings are equal");
    }
    
    
}