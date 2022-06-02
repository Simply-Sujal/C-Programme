// WAP in C to print size of different types of pointer variables.

#include <stdio.h>

int main(){
    int a = 10;
    float b = 20.45;
    double c = 3034564;
    char d = b;
    long e = 10.01;

    int *ptr = &a;
    float *ptr2 = &b;
    double *ptr3 = &c;
    char *ptr4 = &d;
    long *ptr5 = &e;
    

    printf("The size of int : %d\n" , sizeof(a));
    printf("The size of int pointer : %d\n" , sizeof(*ptr));

    printf("The size of float : %d\n" , sizeof(b));
    printf("The size of float pointer : %d\n" , sizeof(*ptr2));

    printf("The size of double : %d\n" , sizeof(c));
    printf("The size of double pointer : %d\n" , sizeof(*ptr3));

    printf("The size of char : %d\n" , sizeof(d));
    printf("The size of char pointer : %d\n" , sizeof(*ptr4));

    printf("The size of long : %d\n" , sizeof(e));
    printf("The size of long pointer : %d\n" , sizeof(*ptr5));

    
}