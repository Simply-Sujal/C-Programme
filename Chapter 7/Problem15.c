
// 5. WAP in C to input distance in terms of meter and find out how many meter and kilometer, (without if statements.)

#include<stdio.h>
int main()
{
    float m, km; 
    printf("Please enter the distance in meter : ");
    scanf("%f", &m);

    km = m/1000;

    printf("distance in kilometer : %.2fkm\n", km);
    return 0;
}