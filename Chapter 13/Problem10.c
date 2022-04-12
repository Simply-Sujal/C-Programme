
// WAP in C to store 1 st n prime numbers in an array and display the array.

#include<stdio.h>

  int main()
{
    int a[10],i,n;
    printf("\nEnter the n number: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0; i< n; i++){
    scanf("%d" , &a[i]);
   }
    printf("\nThe Prime Number is: ");

    for(i=1; i<=n; i++){
    if(a[i]%2 == 1){
    printf("%d", a[i]);
    printf(" ");
    }
  }
}