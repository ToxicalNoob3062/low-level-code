#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// flags = [-, +,  , #, 0]
// width = [0-9]
// precision = [.0-9]
// length = [h, hh, l, ll, L, z, j, t]
// type = [d, i, o, u, x, X, f, F, e, E, g, G, a, A, c, s, p, n, %]
int main()

{
    // learning about flags
    int a = -10;
    printf("a = % d\n", a);   // inserts space for positive numbers and ignores negative numbers (flag = ' ')
    printf("a = %+d\n", a);   // inserts + for positive numbers and - for negative numbers (flag = '+')
    printf("a = %-5d|\n", a); // left-justifies the output and moves the extra spaces to right (flag = '-')
    printf("a = %05d|\n", a); // fills the empty spaces with 0 (flag = '0')

    // learning about width
    printf("a = %5d\n", a); // sets the minimum width of the output to 5  (width = 5)

    // learning about precision

    //%g : (default precison = 6) and works on taking first n digits of precision from the first non zero digit & also removes trailing zeros and unnecessary decimal points

    // e or f format? -> convert the number into m*10^n form. (if n is >= precision or smaller than -4, then it will be converted into exponential form)
    double num = 0.0000567;
    double num2 = 1234857.178;
    printf("num = %.2g\n", num); // 5.67e-5
    printf("num2 = %g\n", num2); // 1.23457e+06

    //%f : (default precision = 6) and works on taking first n digits of precision but after decimal point and doesnt remove trailing zeros
    printf("num = %.3f\n", num); // 0.000

    //%e : (default precision = 6) and works on by converting the number into exponential form and takes first n digits of precision after
    printf("num = %.2e\n", num); // 5.670e-05

    // learning about length

    // every type don't have a format specifier such as double, long double, long long, etc. So, we use length modifier to specify the type of the variable

    // h : short int
    short int b = 10;
    printf("b = %hd\n", b);

    // l : long int
    long int c = 10;
    printf("c = %ld\n", c);

    // ll : long long int
    long long int d = 10;
    printf("d = %lld\n", d);

    // L : long double
    long double e = 10.0;
    printf("e = %Lf\n", e);

    // z : size_t
    float f[] = {1, 2, 3, 4, 5};
    printf("f = %zu\n", sizeof(f));

    // pointer
    int *g = &a;
    printf("g = %p\n", (void *)g);

    // learning about type
    printf("a = %d\n", a);        // integer
    printf("a = %o\n", a);        // octal
    printf("a = %x\n", a);        // hexadecimal
    printf("a = %X\n", a);        // hexadecimal
    printf("a = %f\n", (float)a); // float
    printf("a = %e\n", (float)a); // exponential
    printf("a = %c\n", 'a');      // character
    printf("a = %s\n", "hello");  // string
    printf("a = %p\n", &a);       // pointer
}