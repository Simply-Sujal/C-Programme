// WAP to store one student’s information (i.e. student’s roll no, name, gender, marks etc)
// of an educational institute and display all the data, using structure.

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
    // creating an object for accesing the member of structure
    struct Student s1;
    s1.rollno = 21053362;
    strcpy(s1.name , "Sujal");
    strcpy(s1.gender , "Male");
    s1.marks = 92;

    printf("The information of a student is : \n");
    printf("Roll no. : %d\n" , s1.rollno);
    printf("Name     : %s\n" , s1.name);
    printf("Gender   : %s\n" , s1.gender);
    printf("Marks    : %d\n" , s1.marks);
}