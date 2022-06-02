// here we will learn how to take input and print the string

#include <stdio.h>

int main(){
    // taking input through scanf function
    
    // char name[100];
    // printf("Type the name : ");
    // scanf("%s" , name); // taking input through scanf has a limitation that we cant input the string by taking space because scanf function reads the sequence of characters until ut encounters "whitespaces" , space , newline , tab , etc;
    // printf("My name is : %s" , name);

    // now we will use gets and fgets function to take input 
    char name1[10];
    printf("Type whaterver you want : ");
    gets(name1);
    // printf("%s" , name1);
    puts(name1);


    // now will use fgets function to take input 
    // char name2[10];
    // printf("Type whatever you want : ");
    // fgets(name2,sizeof(name2),stdin);
    // // printf("%s" , name2);
    // puts(name2); // puts is used for printing the string 

    // gets() keeps reading input until newline charactre or end of file shows up. This can lead to buffer overflow as it doesnt check array bounds od variables . while in case of fgets() it will stop when max.m limit of input character is reached

}