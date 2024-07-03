#include <stdio.h>

// defining a constant
#define PI 3.14159;

int main()
{
    // all types and their size
    printf("Size of char: %ld\n", sizeof(char));                   // 1 byte
    printf("Size of short int: %ld\n", sizeof(short int));         // 2 bytes
    printf("Size of int: %ld\n", sizeof(int));                     // 4 bytes
    printf("Size of long int: %ld\n", sizeof(long int));           // 8 bytes
    printf("Size of long long int: %ld\n", sizeof(long long int)); // 8 bytes (atleast 64 bits)
    printf("Size of float: %ld\n", sizeof(float));                 // 4 bytes
    printf("Size of double: %ld\n", sizeof(double));               // 8 bytes
    printf("Size of long double: %ld\n", sizeof(long double));     // 16 bytes

    // write strings
    char str[] = "Hello, World!";

    // specfied length string that will be defined later
    char str2[20];

    // define array -> note that square brackets are not beside the type
    int arr[5] = {1, 2, 3, 4, 5};

    // define a pointer
    int *ptr = arr;

    return 0;
}