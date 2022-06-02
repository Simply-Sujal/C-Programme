// WAP in C to count vowels and consonants in a string using pointer. 

#include <stdio.h>
int main()
{
    int vowel=0, cons = 0;
    char str[50], *p;

    printf("Please Enter String\n");
    gets(str);
  
    for(p = str; *p != '\0'; p++)
    {
        if(*p == 65 || *p == 69 || *p == 73 || *p == 79 || *p == 85 ||
		*p == 97 || *p == 101 || *p == 105 || *p == 111 || *p == 117)  
        {
            vowel++;
        }
        else if((*p >= 65 && *p <= 90) || (*p >= 97 && *p <= 122))
        {
            cons++;
        }
    }
    
	printf("Number of vowels= %d\nand consonents= %d\n", vowel, cons);
    return 0;
}