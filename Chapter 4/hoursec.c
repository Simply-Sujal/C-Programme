

#include <stdio.h>

int main(){
    int h1 , m1 , s1 , h2 , m2 , s2 , time1 , time2;
    printf("Enter the h1 , m1 , s1 : ");
    scanf("%d%d%d" , &h1 , &m1 , &s1);

    printf("\n");

    printf("Enter the h2 , m2 , s2 : ");
    scanf("%d%d%d" , &h2 , &m2 , &s2);

    time1 = (h1 * 3600) + (m1 * 60) + s1;
    time1 = (h2 * 3600) + (m2 * 60) + s2;

    int sum = time1 + time2;

    int sh , sm , ss;

    ss = sum % 60;
    sum /= 60;
    sm = sum % 60;
    sum /= 60;
    sh = sum;

    printf("The sum of time is %d:%d:%d" , sh , sm, ss);
}