// WAP to read a sentence and prints the number of characters, numbers and special characters present in the sentence.

#include <stdio.h>
#include <string.h>

int main(){

    int num=0,ch=0,sc=0,w=0;
    char a[100];
    printf("Enter the string : \n");
    gets(a);
    int len=strlen(a);

    for(int i=0;i<len;i++){
    if(a[i]>='0'&&a[i]<='9'){
        num++;
    }
    else if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){
        ch++;
    }
    else if(a[i]==' '||a[i]=='\t'){
    if(a[i+1]=='\0'){
        w--;
    }

    if(a[i+1]==' '||a[i+1]=='\t'){
    continue;
    }
        w++;
        continue;
    }
    else{
        sc++;
    }
}
printf("Character : %d\n Number : %d\n Special Character : %d\n ",ch,num,sc);
return 0;
}