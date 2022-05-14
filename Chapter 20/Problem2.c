// WAP in C to initialize one array in the main(), and calculate the length of the array
// using function like length() and print the result in main().

#include <stdio.h>

int length();
int arr[] = {1,2,3,4,5,6,7};

int main(){
    int len = length();
    printf("Length of an array is : %d" , len);
}

int length(){
    int len = 0;
    len = sizeof(arr)/sizeof(arr[0]);
    return len;
}