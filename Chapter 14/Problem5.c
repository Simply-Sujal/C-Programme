// WAP in C to input two sets of data A and B and find out AUB.

#include<stdio.h>
#include<conio.h>
void main()
{
   int a[10],b[10],i,c[10],j,k=0,n1,n2;

   // taking input set A

   printf("Type the size of an array : \n");
   scanf("%d",&n1);
   printf("Enter the element for the first array : \n");
   for(i=0;i<n1;i++)
      scanf("%d",&a[i]);

    // taking input set B

   printf("Type the size of an array : \n");
   scanf("%d",&n2);
   printf("Enter the element for the second array : \n");
   for(i=0;i<n2;i++)
     scanf("%d",&b[i]);

   // copy the element of set A in set C
   for(i=0;i<n1;i++)
   {
       // repeted element is not allowed so we check is any value repeted
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i]) 
            break;
       }
       if(j==k) //if not repeated then store value in set c 
       {
          c[k]=a[i];
          k++;
       }
    }
    // copy element of set B in set C
   for(i=0;i<n2;i++)
   {
       // check for repeted element
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k) // if element is not repeted then store in set C
     {
       c[k]=b[i];
       k++;
     }
   }

   // printing of union of set A and set B
   printf("Union of set A and B is:-\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
}
