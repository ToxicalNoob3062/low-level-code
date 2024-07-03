#include <stdio.h>

// convert decimal to binary
int toBinary(int n)
{
    return n == 0 ? 0 : 10 * toBinary(n >> 1) + (n & 1);
}

// convert base ? to decimal
int toDecimal(int n)
{
    return n < 10 ? n : n % 10 + (toDecimal(n / 10) << 1);
}

// convert binary to octal
int b2Octal(int n)
{
    return n == 0 ? 0 : b2Octal(n / 1000) * 10 + toDecimal(n % 1000);
}

int main()
{

    int n = 10101100;
    printf("Octal = %d\n", b2Octal(n));
    return 0;
}