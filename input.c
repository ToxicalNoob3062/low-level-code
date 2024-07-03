#include <stdio.h>

int main()
{

    // scanf takes pointers
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    // for string you can use width specifier to limit the number of characters to be read
    char str[10];
    printf("Enter a string: ");
    scanf("%9s", str);

    // for float you can use precision specifier to limit the number of decimal places to be read
    float b;
    printf("Enter a float: ");
    scanf("%.3f", &b);

    // for double you can use length specifier to limit the number of decimal places to be read
    double c;
    printf("Enter a double: ");
    scanf("%.3lf", &c);

    // scanf breaks at spaces
    char str2[10];
    printf("Enter a string: ");
    scanf("%s", str2);

    // use get char to get char one by one from input
    //  read string with spaces
    char str3[10];
    printf("Enter a string: ");
    int i = 0;
    char ch;
    while ((ch = getchar()) != '\n')
    {
        str3[i] = ch;
        i++;
    }

    // Clearing the input buffer
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;

    // example for unread char
    char str4[10];
    printf("Enter a string: ");
    scanf("%c", str4);
    // get char
    char ch2 = getchar();

    // unget char
    ungetc(ch2, stdin);

    return 0;
}