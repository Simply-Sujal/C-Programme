

// here we will learn about the if-else statements..

#include <stdio.h>

int main(){
    int age;
    printf("Type your age : ");
    scanf("%d" , &age);

    if (age >= 18)
    {
        printf("You are eligible to vote \n");
        printf("You are adult \n");
        printf("You can get your driving licence now.\n");
        printf("Now you become college student\n");
    }
    else if(age >=13 || age < 18){
        printf("You are teenager \n");
        printf("You are school boy or girl \n");
    }
    else{
        printf("You are child \n");
    }

    printf("Heelloo Worldd!!! \n");

    return 0;
}