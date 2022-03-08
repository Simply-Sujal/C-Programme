// Here we will write a code for the area of square

#include <stdio.h>

int main(){
    int side;
    printf("Type the side of square : ");
    scanf("%d",&side);
    int areaOfSquare = side * side;
    // printf("Area of square is : %d" , (side * side));
    printf("Area of square is : %d" , areaOfSquare);
}