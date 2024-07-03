#include <stdio.h>

int main()
{
    char byte;

    char index = (char)3;
    // set bit
    byte |= (1 << index);

    // read bit
    char readBit = (byte >> index) & 1;

    // clear bit
    byte &= ~(1 << index);

    return 0;
}