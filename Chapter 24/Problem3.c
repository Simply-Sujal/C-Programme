// WAP in C to create a function arith(), calculate all the arithmetic operation like, +,-,*,/ in the function and display all the out put in main() in a single call.

#include<stdio.h>

void arith(int,int,int*);
int main()
{
int a,b;
int *ans,p[4];
ans = p;
printf("Enter the two numbers : \n");
scanf("%d%d",&a,&b);
arith(a,b,ans);
printf("result of \n%d+%d=%d\n%d- %d=%d\n%d*%d=%d\n%d/%d=%d\n",a,b,*(ans+0),a,b,*(ans+1),a,b,*(ans+2), a,b,*(ans+3));
return 0;
}
void arith(int a,int b,int *ans){
    int r; 
    *(ans+0) = a+b; 
    *(ans+1)=a-b; 
    *(ans+2)=a*b; 
    *(ans+3)=a/b;
    
    return r;
}
