// Q1. WAP to input one student’s information (i.e. student’s roll no, name, gender, marks etc) and display all the data, using pointer in structure.

#include <stdio.h>
#include <string.h>

struct Student
{
    int rollno;
    char name[50];
    char gender[50];
    int marks;
};


int main(){
    struct Student s1 = {21053362 , "Sujal" , "Male" , 95};

    struct Student *ptr;
    ptr = &s1;

    printf("Information for S1\n");
    printf("%d %s %s %d" , ptr->rollno , ptr->name , ptr->gender , ptr->marks);
}