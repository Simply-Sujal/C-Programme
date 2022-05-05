
// WAP to find the length of a string.
// Without library function
#include <stdio.h>
int main(){
    char a[50];
    int i, length = 0;
    printf("Enter a string \n");
    gets(a);
    for (i = 0; a[i] != '\0'; i++){
    length++;
}

printf("So, the length of string = %d\n", length);
}

