// here we will learned the basics of string and how to intialize and all 

#include <stdio.h>

int main(){
    char name[] = "Sujal"; // here how we can initialize a string 
    printf("%s\n" , name);

    char name1[6] = "Hello"; // here size is 5 and string has 4character and one is null charater i.e \0
    printf("%s\n" , name1);

    char name2[] = {'s','u','j','a','l','\0'};
    printf("%s\n" , name2);

    char name3[5] = {'v','a','r','u'};
    printf("%s\n" , name3);
}