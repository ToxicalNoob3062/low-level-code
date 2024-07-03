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

    // pointer to a structure
    Student *sp = &s1;
    sp->roll = 2;

    // defining a union variable
    Choices c1 = {.x = 10};

    // make a pointer to a union
    Choices *cp = &c1;

    // access the union
    cp->y = 10.5;
}