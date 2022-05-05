
// with library function
#include<stdio.h>
#include<string.h>

int main(){
    char a[50];
    int length;
    printf("\nEnter a String : ");
    gets(a);
    length = strlen(a);
    printf("\nSo, the length of string : %d\n", length);
}