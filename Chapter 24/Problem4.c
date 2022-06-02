// WAP in C to print a string using call by reference. 

#include<stdio.h>
#include<string.h>
void display(char*);
int main()
{
char *c,ch[100];
c = ch;
gets(c);
display(c);
}
void display(char *c)
{
for(int i=0;*(c+i)!='\0';i++){
printf("%c",*(c+i));
}
}