#include <stdio.h>
#include <string.h>

int main()
{
    // some useful string functions
    char *str = "Hello, World!";

    // length of string
    printf("Length of string: %ld\n", strlen(str));

    // copy string
    char str2[14];
    strcpy(str2, str);
    printf("Copied string: %s\n", str2);

    // slicing string from start
    char str3[6];
    strncpy(str3, str, 5);
    str3[5] = '\0';
    printf("Sliced string: %s\n", str3);

    // compare to string lexographically (s1<s2 -> -1, s1=s2 -> 0, s1>s2 -> 1)
    char *str4 = "Hello, World!";
    char byte = (char)strcmp(str3, str4);
    printf("Lexographical comparison: %d\n", byte);

    // comapres the first n bytes of two strings
    char fbytes = (char)strncmp(str3, str4, 5);
    printf("Lexographical comparison: %d\n", fbytes);

    // concatenate two strings
    char str5[20] = "";
    strcat(str5, "World!");
    strcat(str5, "Hello, ");
    printf("Concatenated string: %s\n", str5);

    // concatenate n bytes of two strings
    char str6[20] = "";
    strncat(str6, "World!", 5);
    strncat(str6, "Hello, ", 6);
    printf("Concatenated string: %s\n", str6);

    // sprintf ->instead of printing on console it store output on char array
    char str7[20];
    int a = 10;
    sprintf(str7, "Value of a is %d", a);

    return 0;
}