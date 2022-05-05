// WAP to read a sentence and reverse the words as its original places. Example: Kiit university, O/P : tiiK ytisrevinu.

#include <stdio.h>
#include <string.h>
 
int main()
{
    int i, j = 0, k = 0, x, len;
    char a[100], b[50][50], temp;
 
    printf("Enter the string : \n");
    gets(a);

    for (i = 0;a[i] != '\0'; i++)
    {
        if (a[i] == ' ')
        {
            b[k][j]='\0';
            k++;
            j=0;
        }
        else
        {
            b[k][j]=a[i];
            j++;
        }
    }
    b[k][j] = '\0';

    for (i = 0;i <= k;i++)
    {
        len = strlen(b[i]);
        for (j = 0, x = len - 1;j < x;j++,x--)
        {
            temp = b[i][j];
            b[i][j] = b[i][x];
            b[i][x] = temp;
        }
    }
    for (i = 0;i <= k;i++)
    {
        printf("%s ", b[i]);
    }
    printf("\n");
    return 0;
}