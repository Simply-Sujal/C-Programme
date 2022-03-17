

#include<stdio.h>

int main(){
    
int sec,min,hour,temp;
printf("enter time in sec = ");
scanf("%d", &sec);

hour = sec/(60*60);
temp = sec%(60*60);
min = temp/60;
sec = temp%60;

printf("hour = %d", hour);
printf("\nmin = %d", min);
printf("\nsec = %d", sec);

}