// WAP in C to input n numbers in an array and print all the elements that are three digit
// even integers.


#include<stdio.h>
int main()
{
int n;
printf("Enter size of the arrray: ");
scanf("%d", &n);
int num[n]; 

    printf("Enter a number : ");
    for(int i=0; i<n; i++){
    scanf("%d", &num[i]);
}

    printf("The three digit even number is : \n");
    for(int i=0; i<n; i++){
    if(num[i]>=100 && num[i]%2==0)
    {
        printf("%d\n", num[i]);
    }
    }
return 0;
}