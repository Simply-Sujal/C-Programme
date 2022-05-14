// WAP in C to find the LCM of two numbers, by using a suitable function (say LCM)
// for this.

#include <stdio.h>

int gcd( int n1, int n2);
int lcm( int n1, int n2); 

int main()  
{  
    int n1, n2;  
    printf( "Enter any two positive numbers \n");  
    scanf(" %d %d", &n1, &n2);  
  
    printf ( " LCM of two numbers %d and %d is %d ", n1, n2, lcm( n1, n2));  
    return 0;  
}  

  
int gcd( int n1, int n2)  
{  
    if ( n1 == 0){  
        return n2;      
    }  
    return gcd (n2 % n1, n1);   
}

int lcm( int n1, int n2)  
{     
    return ( n1 / gcd(n1, n2)) * n2;  
} 