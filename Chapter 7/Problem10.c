// Q10. WAP in C to input 4 subjects mark of a student and their roll number, and display the
// grade sheet of the students of KIIT University, Using switch case.
// Avg&gt;=9 Grade=”O”
// Avg&gt;=8 Grade=”E”
// Avg&gt;=7 Grade=”A”
// Avg&gt;=6 Grade=”B”
// Avg&lt;6 Grade=”Fail”

#include <stdio.h>

int main(){
     int s1,s2,s3,s4;
    printf("Type your marks in English : ");
    scanf("%d" , &s1);

    printf("Type your marks in Maths : ");
    scanf("%d",&s2);

    printf("Type your marks in C Programming : ");
    scanf("%d" , &s3);

    printf("Type your marks in Biology : ");
    scanf("%d" , &s4);

    int avg = (s1 + s2 + s3 + s4)/40;

    switch (avg)
    {
        case 10:
        case 9 :
        printf("Your grade is : O");
        break;

        case 8 :
        printf("Your grade is : E");
        break;

        case 7 : 
        printf("Your grade is : A");
        break;

        case 6 :
        printf("Your grade is : B");
        break;

        default :
        printf("You are fail");
        break;

    }
    return 0;
}