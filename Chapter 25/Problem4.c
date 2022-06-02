// WAP to store n student’s information (i.e. student’s roll no, name, gender, marks in 5
// subjects etc) of an educational institute and display all the data using array within
// structure. [Take mark[5]].

#include <stdio.h>
#include <string.h>

struct student
{
    int rollno;
    char name[5];
    char gender[5];
    int marks;
};


int main(){
    int n;
    printf("Type the size of an array : ");
    scanf("%d" , &n);
    struct student s1[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d%s%s%d" , &s1[i].rollno , s1[i].name , s1[i].gender , &s1[i].marks);
    }
    printf("\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d\n%s\n%s\n%d" , s1[i].rollno , s1[i].name , s1[i].gender , s1[i].marks);
    }

    
}