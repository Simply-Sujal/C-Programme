// WAP to read a sentence and prints the number of words in the sentence, where spaces are not uniform.

#include <stdio.h>
#include <string.h>
 
int main()
{
    char a[100];
    int count = 0,i;
 
    printf("Enter the string:\n");
    gets(a);
    for (i = 0; a[i] != '\0';i++)
    {
        if (a[i] == ' ' && a[i+1] != ' ')
        {
            count++;
        }    
    }
    printf("Number of words : %d\n", count + 1);
    return 0;
}