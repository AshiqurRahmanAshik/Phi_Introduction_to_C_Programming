#include <stdio.h>

int main()
{
    int a = 22;
    int b = 10;
    int remainder = a % b;
    printf("%d", remainder);
    return 0;
}

/*
% modulus operator works on only in integer data types.
It does not work on floating point or double data types.
To find the remainder of any floating number, we need to use fmod() built in function in C.
*/