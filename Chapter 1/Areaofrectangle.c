

#include <stdio.h>

int main(){
    int length;
    printf("Type the length : ");
    scanf("%d" , &length);

    int breadth;
    printf("Type the breadth : ");
    scanf("%d" , &breadth);

    int AreaOfRectangle = length * breadth;
    printf("%d" , AreaOfRectangle);
}