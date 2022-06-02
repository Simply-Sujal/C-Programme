// WAP to store n student’s information (i.e. student’s roll no, name, gender, marks etc) of
// an educational institute and display all the data, using an array of structures.

#include <stdio.h>
#include <string.h>

struct Student
{
    int rollno;
    char name[30];
    char gender[30];
    int marks;
};

int main(){
    int n;
    printf("Type the size of n : ");
    scanf("%d" , &n);
    struct Student s1[n];

    printf("The information of Students are given below : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d%s%s%d" , &s1[i].rollno , s1[i].name , s1[i].gender , &s1[i].marks);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d%s%s%d" , s1[i].rollno , s1[i].name , s1[i].gender , s1[i].marks);
    }
    printf("\n");
    
    
}
