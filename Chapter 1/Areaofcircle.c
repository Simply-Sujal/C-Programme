
// Here in this we will write the code for the area of circle.

#include<stdio.h>

int main(){
    float radius;
    printf("Type the radius of circle : ");
    scanf("%f" , &radius);
    float areaofCicle = 3.14 * radius * radius;
    printf("The area of a circle is : %f" , areaofCicle);
}