// WAP in C to generate the first n terms of Fibonacci sequence.
#include<stdio.h>

int fibbo(int i);

int main(){ 
	int n, i; 
	printf("Enter the number you want fibbo number :\n"); 
	scanf("%d",&n); 
	printf("Fibonacci series : \n");
	for(i=0;i<n;i++) { 
		printf("%d ",fibbo(i));
	}
}
 
int fibbo(int i){ 
	if(i == 0 || i == 1){
        return 1;
    }  
       
    return (fibbo(i-1)+fibbo(i-2));
     
}