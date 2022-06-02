// Find the length of the string using inbuilt function as well logic wise also.

#include <stdio.h>
#include <string.h>

int main(){
    // using inbuilt function 
    // int count = 0;
    // char name[30];
    // printf("Type whatever you want : ");
    // gets(name);
    // count = strlen(name);
    // printf("The length of the string is : %d" , count); 

    // now use the logic to calculate the length of the string 
    int count = 0;
    int i = 0;  
    char name1[30];
    printf("Type whatever you want : ");
    gets(name1);
    while (name1[i] != '\0')
    {
        count++;
        i++;
    }
    puts(name1);
    printf("The length of the string is : %d" , count);
    
}