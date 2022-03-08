

// here we will learn about the ternary operator

#include <stdio.h>

int main(){

    // basic syntax for ternary operator
    // condtion ? doSomething if true : doSomething if else; 

    int age;
    printf("Type your age : ");
    scanf("%d" , &age);

    age >= 18 ? printf("You are eligible to vote") : printf("You are not eligible to vote");

    return 0;
}