// Write a function str_start () which takes two strings as argument and returns 1 if second
// string is present at the start of the first string, otherwise returns 0. Write another function
// str_end () that returns 1 if second string is present at the end of the first string otherwise
// return 0.


#include<stdio.h>

int str_start(){
    int count1 =0, count2=0,flag;
    char c1[50];
    char c2[50];
    printf("Enter the string");
    gets(c1);
    printf("Enter the sub string");
    gets(c2);
    while (c1[count1] != '\0')
        count1++;
    while (c2[count2] != '\0')
        count2++;
    for (int i = 0; i <= count1 - count2; i++)
    {
        for (int j = i; j < i + count2; j++)
        {
            flag = 1;
            if (c1[j] != c2[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }

    if (flag == 1){
        printf("1");
        return 1;
    }
    else{
        printf("0");
        return 0;
    }
}

int main(){
    str_start();

    return 0;
}