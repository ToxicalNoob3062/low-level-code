#include <stdio.h>

int main()
{
    // defining a structure
    typedef struct student
    {
        char name[50];
        int roll;
        float marks;
    } Student;

    // unions are memory efficient
    typedef union choices
    {
        int x;
        float y;
        char z;
    } Choices;

    // defining a structure variable
    Student s1;
    s1.roll = 1;
    s1.marks = 99.9;

    // defining a union variable
    Choices c1;
}