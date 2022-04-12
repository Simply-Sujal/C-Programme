// Learning functio

#include <stdio.h>

// function declaration or function prototyoe
void message1();
void message2();

int main(){
    message1(); // function calling
    message2();

    return 0;
}

// function defination
void message1(){
    printf("Hello!\n");
}

void message2(){
    printf("good bye:)\n");
}