// WAP to read a sentence and prints the number of characters, numbers, special characters and space
// present in the sentence.

  #include<stdio.h>
  #include<string.h>
    int main(){
    int num=0,ch=0,sp=0,sc=0;
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
    else if(a[i]==' '){
        sp++;
    }
    else{
        sc++;
    }
}
printf("Character : %d\n Number : %d\n Special Character : %d\n Space : %d\n",ch,num,sc,sp);
return 0;
}
