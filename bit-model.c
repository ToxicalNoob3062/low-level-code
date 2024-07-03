#include <stdio.h>

int main()
{
    // magnitude only bit model
    unsigned char a = (char)256;
    printf("a = %d\n", a); // will overflow bit magnitude model (2^n)-1 -> 256 % 256 = 0

    // 2's complement bit model (signed) (-2^(n-1) to 2^(n-1)-1)
    signed char b = (char)128;
    printf("b = %d\n", b); // will overflow bit 2's complement model (-128 to 127) -> 128 % 256 = -128

    // positive numbers in 2's complement model are represented as it is in magnitude model
    // negative numbers in 2's complement model are represented as (~magnitude + 1)
    printf("a = %+d\n", ~++a + 1);

    // float bit model (-1)^s * 1.M * 2^E where E = e - bias and bias = 2^(k-1)-1 -> IEEE 754

    return 0;
}