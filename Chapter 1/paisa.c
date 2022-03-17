

# include<stdio.h>
 struct complex
{
  int real,img;
};
int main()
{
    struct complex a,b,c;
// complex no 1= a+bi,complex no 2=c+di
    printf("Enter the value a and b  where a + bi is the first complex number\n");
    scanf("%d%d",&a.real,&a.img);

   printf("Enter the value c and d where c + di is the second complex number\n"); 
    scanf("%d%d",&b.real,&b.img);

    c.real = a.real + b.real;
    c.img = a.img + b.img;

    printf("Sum of the complex number is (%d)+ (%di)", c.real, c.img);
    return 0;
}


