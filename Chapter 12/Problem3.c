// WAP in C to print the perfect square number in a range. Example range 10 – 50, so O/P:
// 16, 25, 36, 49.

# include <stdio.h>
# include <math.h> 
int main() 
{ 
	int temp,start,stop; 
	float p; 
	printf("Enter the starting and ending numbers : ") ; 
 	scanf("%d %d", &start,&stop) ; 
 	
	for(int n = start; n <= stop; n++)
	{
		p = sqrt(n); 
 		temp = p; 
 		if (p == temp){ 
  		printf("%d ", n);
        } 	  		
	}
 	return 0;
} 
		