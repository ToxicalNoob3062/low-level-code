#include <stdio.h>

int main()
{

    // write a expression that contains almost all arithmetic operators and then show which is evaluated first

    // structures, suffix increment & decrement and brackets left to right
    // 1 -> () , [] , ->, . , ++ ,--

    // pointers and prefix increment & decrement right to left
    // 2 -> * , & , sizeof, ++, --

    // aritmatic -> left to right
    // 3-> * ,/ , % & 4-> + , -
    printf("Result = %d\n", 3 * 4 / 2 + 5 - 1 % 2);

    // bitwise
    //  2 -> ~ -> right to left
    //  5 -> << , >> -> left to right
    //  8 to 10 -> & ^ | -> left to right
    printf("Result = %d\n", ~2 << 5 & 8 ^ 10 | 5);

    // logical
    // 2 -> ! -> right to left
    // 11 ,12 -> && || -> left to right
    printf("Result = %d\n", !2 && 11 || 12);

    // relational
    // 6 -> < , > , <= , >= -> left to right
    // 7 -> == , != -> left to right
    printf("Result = %d\n", 6 < 5 >= 7 == 7 != 8);

    // ternary
    // 13 -> ? : -> right to left
    printf("Result = %d\n", 6 < 5 ? 7 : 8);

    // assignment
    //  14 -> /= , *= , %= , += , -= , <<= , >>= , &= , ^= , |=  = -> right to left
    int a = 5;
    printf("Result 1 = %d\n", a += 6 < 5 ? 7 : a);
    printf("Result 2 = %d\n", a);
}