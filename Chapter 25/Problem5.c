// WAP to store n student’s information (i.e. student’s roll no, name, gender, marks in 5
// subjects etc) of an educational institute and display all the data with average marks and
// grade of each student, using array of structure.

#include <stdio.h>
#include <string.h>

struct student
{
    int rollno;
    char name[50];
    char gender[50];
    int marks;
};


int main(){
    int ans = 0;
    int average = 0;
    int n;
    printf("Type the size of an array : ");
    scanf("%d" , &n);

    struct student s1[n];
    printf("Enter information of students:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nRoll number : \n");
        scanf("%d" , &s1[i].rollno);

        printf("\nName : \n");
        scanf("%s" , s1[i].name);

        printf("\nGender : \n");
        scanf("%s" , s1[i].gender);

        printf("\nMarks : \n");
        scanf("%d" , &s1[i].marks);
    }
    printf("\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("\nRoll number : %d\n" , s1[i].rollno);
        printf("\nName : %s\n" , s1[i].name);
        printf("\nGender : %s\n" , s1[i].gender);
        printf("\nMarks : %d\n" , s1[i].marks);
    }

    for (int i = 0; i < n; i++)
    {
        ans = ans + s1[i].marks;
    }
    average = ans / n;
    printf("The average marks is : %d" , average);
    printf("\n");

    if (average > 90)
    {
        printf("The grade you get is : A");
    }
    else if(average < 80 && average > 70){
        printf("The grade you get is : B");
    }
    else if(average < 70 && average > 60){
        printf("The grade you get is : C");
    }
    else if(average < 60 && average > 50){
        printf("The grade you get is : D");
    }else{
        printf("The grade you gey is E");
    }
    
}