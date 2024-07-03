#include <stdio.h>
#include <stdlib.h>

// write a main function that takes command line arguements a float , integer , long , double
int main(int argc, char *argv[])
{
    // check if the number of arguements is 5
    if (argc != 5)
    {
        printf("Invalid number of arguements\n");
        return 1;
    }

    // argv[0] is the name of the program

    // convert the arguements to their respective data types
    float f = atof(argv[1]);
    int i = atoi(argv[2]);
    long l = atol(argv[3]);
    double d = atof(argv[4]);

    // print the values of the data types
    printf("Float: %f\n", f);
    printf("Integer: %d\n", i);
    printf("Long: %ld\n", l);
    printf("Double: %f\n", d);

    return 0;
}