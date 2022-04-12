// WAP in C to input 4 subjects mark of a student and their roll number, and display the
// grade sheet of the students of KIIT University, Use else..if ladder statement.
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
    if (avg >= 9)
    {
        printf("Your grade is : O");
    }
    else if (avg >= 8)
    {
        printf("Your grade is : E");
    }
    else if (avg >= 7)
    {
        printf("Your grade is : A");
    }
    else if (avg >= 6)
    {
        printf("Your grade is : B");
    }
    else if (avg < 6)
    {
        printf("You are Fail.");
    }
    
    return 0;
}