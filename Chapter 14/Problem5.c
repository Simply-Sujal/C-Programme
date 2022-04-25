// WAP in C to input two sets of data A and B and find out AUB.

#include<stdio.h>

void main()
{
   int k = 0;
   int a[100],b[100],c[100],i,j,n1,n2;

   printf("Type the size of an array : \n");
   scanf("%d",&n1);
   printf("Enter the element for the first array : \n");
   for(i = 0;i < n1; i++)
      scanf("%d", &a[i]);


   printf("Type the size of an array : \n");
   scanf("%d",&n2);
   printf("Enter the element for the second array : \n");
   for(i = 0; i < n2; i++)
     scanf("%d", &b[i]);


   for(i = 0; i<n1; i++)
   {
       
      for(j = 0;j < k; j++)
      {
         if(c[j]==a[i]) 
            break;
       }
       if(j==k) 
       {
          c[k]=a[i];
          k++;
       }
    }
    
   for(i=0;i<n2;i++)
   {
       
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k) 
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
