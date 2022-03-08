
//here we write code for the perimeter of a rectangle

#include <stdio.h>

int main(){
    int length;
    int breadth;
    printf("Type the lenght of the Rectangle : ");
    scanf("%d" , &length);
    printf("Type the breadth of the Rectangle : ");
    scanf("%d" , &breadth);

    int perimeter = 2 * (length + breadth);
    printf("The Perimeter of Rectangle is : %d" , perimeter);
}