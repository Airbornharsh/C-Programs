#include <stdio.h>

struct Student
{
    int rollNo;
    char name[20];
    int age;
    char branch[20];
    int totalClass;
    int attendedClass;
};

int main()
{
    struct Student a = {62, "Rohan Behara", 19, "CSE", 100, 75};

    printf("Roll No:- %d\n", a.rollNo);
    printf("Name:- %s\n", a.name);
    printf("Age:- %d\n", a.age);
    printf("Branch:- %s\n", a.branch);
    printf("Total Class:- %d\n", a.totalClass);
    printf("Attended Class:- %d\n", a.attendedClass);
}