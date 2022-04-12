// 2. Given 3 points (x1,y1),(x2,y2), (x3,y3)) in 2-D, display whether they form a triangle or not.

#include <stdio.h>

int main(){
    float x1 = 2; float y1 = 5;
    float x2 = 4; float y2 = 10;
    float x3 = 9; float y3 = 7;

    float area = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    if (area == 0)
    {
        printf("Triangle is not valid.");
    }else{
        printf("Triangle is valid.");
    }
    return 0;
}