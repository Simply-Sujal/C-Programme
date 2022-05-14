
// WAP in C to perform all the arithmetic operation of two integer using different user defined function
// like void add(), int sub(), void mul(int,int) and int divid(int,int).

#include<stdio.h>
void add();
void mul(int,int);
int sub();
int div(int,int);

int main()
{
    int s,a,b;
    add();
    
    s=sub();
    
    printf("Enter 2 numbers for multiplication : ");
    scanf("%d%d",&a,&b);
    mul(a,b);
    
    int d=div(a,b);  
}

void add()
{
    int a,b,s;
    printf("Enter 2 numbers for addition : ");
    scanf("%d%d",&a,&b);
    s=a+b;
    printf("sum of %d + %d = %d\n",a,b,s);
}

int sub()
{
    int a,b,s;
    printf("Enter 2 numbers for substraction : ");
    scanf("%d%d",&a,&b);
    s=a-b;
    printf("substraction of %d - %d = %d\n", a, b, s);
    return s;
}

void mul(int a,int b)
{
    int m;
    m=a*b;
    printf("multiplication of %d * %d = %d\n",a,b,m);
}

int div(int a, int b)
{
    if(b==0)
    {
        printf("wrong input for division, undefined");
    }
    else
    {
        int d;
        d=a/b;
        scanf("Type a and b : %d%d",&a,&b);
        printf("division of %d / %d = %d\n",a,b,d);

        return d;
    }
}