#include <stdio.h>

int main()
{

    // simple pointer
    int a = 10;
    int *p = &a;

    // a pointer to a struct
    typedef struct student
    {
        char name[50];
        int roll;
        float marks;
    } Student;

    Student s1 = {.name = "John", 1, 99.9};
    Student *sp = &s1;

    // a pointer to a union
    typedef union choices
    {
        int x;
        float y;
        char z;
    } Choices;
    Choices c1 = {.x = 10};
    Choices *cp = &c1;

    // a pointer to a pointer
    int **pp = &p;

    // a pointer to an array
    int arr[2] = {1, 2};
    int *ap = arr;

    // double pointer to an array
    int **ap2 = &ap; // can't do &arr

    // rigid double pointer to an array
    int *arr2[2] = {&arr[0], &arr[1]};

    // should get a pointer
    printf("Pointer: %p\n", arr2[1]);

    // dynamic memory allocation lets define 2d
    int rows = 3, cols = 3;
    int **twoD = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        twoD[i] = (int *)malloc(cols * sizeof(int));
    }

    // free the memory
    for (int i = 0; i < rows; i++)
    {
        free(twoD[i]);
    }
    free(twoD);
}