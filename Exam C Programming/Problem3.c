// WAP to read a character from the user, if the alphabet is a number the sum with 10 and
// convert it into lowercase if the entered alphabet is in uppercase, otherwise display an
// appropriate message.

#include <stdio.h>


int main(){
    char alp;
    printf("Type alphabet : ");
    scanf("%c" , &alp);

    if (alp >= '0' && alp <= '9')
    {
        int temp = alp;
        printf("%d" , temp - 48 + 10);
    }
    

    else if(alp >= 'A' && alp <= 'Z'){
        alp = alp + 32;
        printf("%c" , alp);
    }

    else{
        printf("Input is wrong.");
        printf("%c" , alp);
    }
    
}