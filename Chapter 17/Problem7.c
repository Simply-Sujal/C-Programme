// WAP to read a sentence and prints the sentence in word wise.

#include<stdio.h>
#include<string.h>

    int main(){
    int w=0;
    char a[50];
    printf("Enter the sentence : \n");
    gets(a);

    int len=strlen(a);
    printf("\nSentence in word wise : \n");

    for(int i=0;i<len;i++){
    if(a[i]==' '||a[i]=='\t'){
    if(a[i+1]==' '||a[i]=='\t'){
        continue;
    }
    printf("\n");
        continue;
    }
    printf("%c",a[i]);
}
    printf("\n");
return 0;
}