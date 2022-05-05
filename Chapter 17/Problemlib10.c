// WAP to compare two strings.
// with library function 

#include<stdio.h>
#include<string.h>
    int main(){
    int flag=0, i;
    char s1[50], s2[50];
    printf("Enter first string : ");
    gets(s1);

    printf("Enter second string : ");
    gets(s2);
    flag = strcmp(s1,s2); // comparing string

    if(flag==0){
        printf("Both strings are same.\n");
    }

    else{
      printf("Both strings are not same.\n");
    }

}